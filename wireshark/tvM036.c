/*
==================================================
A TV app for the AVerMedia AVerTV USB2.0 Plus
Testing the from USB capture files generated codes
==================================================
Version:    0.1
Author:     Sinan Güngör
License:    GPL v2
*/

// Compiling: gcc -lusb-1.0 -lvlc -lm tvM036.c -o tvM036

// Select an operating mode
#define TV 1
#define CVBS 0
#define SVIDEO 0
#define RADIO 0

#define V4L2_LOOPBACK "/dev/video0"

// Select audio source from the output of the command
//   pactl list short sources
#define AUDIO_SOURCE  "alsa_input.usb-AVerMedia_AVerTV_USB_2.0_Plus-01.pro-input-0"

#define VENDOR_ID 0x07ca
#define PRODUCT_ID 0x0036

#include <stdio.h>
#include <stdlib.h>
#include <libusb-1.0/libusb.h>

#include <vlc/vlc.h>

#include <unistd.h>
#include <signal.h>
#include <stdbool.h>
#include <math.h>

static struct libusb_device_handle *devh = NULL;
static char buf[1024];

// ===================================================================================

#include "m036-lib.c"

// ===================================================================================

#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/videodev2.h>
#include <assert.h>
#include <errno.h>

static char v4l2_device[16];
int dev_fd;

char isobuf0[64 * 3072];
char isobuf1[64 * 3072];
char isobuf2[64 * 3072];
char isobuf3[64 * 3072];

static int startX = 0;
static int startY = 0;
static int endX = 1440;
static int endY = 288;

static int width = 720;
static int height = 576;

uint8_t field=0;
uint8_t prev_field=0;
size_t line_offset=0;
int line=0;
int video_offset=0;
int bytes_in_field1=0;
int bytes_in_field2=0;
int bytes_in_frame=0;
int iTransfer=0;
int iFrame=0;

size_t line_size;
uint8_t *line_buffer;
size_t video_buffer_size;
uint8_t *video_buffer;

int setV4L2format(){

    fprintf(stderr, "* Setting v4l2 stream format\n");
    struct v4l2_format sdf;;
    sdf.type = V4L2_BUF_TYPE_VIDEO_OUTPUT;
	if (ioctl(dev_fd, VIDIOC_G_FMT, &sdf) == -1) {
		fprintf(stderr, "*  ~~~ Can not get video device! ~~~\n");
		return(1);
	}
	fprintf(stderr, "*  Current v4l2 stream data format - Width: %d \n",sdf.fmt.pix.width);
    fprintf(stderr, "*  Current v4l2 stream data format - Height: %d \n",sdf.fmt.pix.height);
    fprintf(stderr, "*  Current v4l2 stream data format - Pixel format: %d \n",sdf.fmt.pix.pixelformat);
    
    sdf.type = V4L2_BUF_TYPE_VIDEO_OUTPUT;
	sdf.fmt.pix.width = width;
	sdf.fmt.pix.height = height;
	sdf.fmt.pix.pixelformat = V4L2_PIX_FMT_YUYV;
	sdf.fmt.pix.sizeimage = video_buffer_size;
	sdf.fmt.pix.field = V4L2_FIELD_NONE;
	sdf.fmt.pix.colorspace = V4L2_COLORSPACE_REC709;
    
    fprintf(stderr, "*  W: %d\n",sdf.fmt.pix.width);
    fprintf(stderr, "*  H: %d\n",sdf.fmt.pix.height);
    
	if (ioctl(dev_fd, VIDIOC_S_FMT, &sdf) == -1) {
		fprintf(stderr, "*  ~~~ Can not set video device! ~~~\n");
		return(1);
	}

    if (ioctl(dev_fd, VIDIOC_G_FMT, &sdf) == -1) {
		fprintf(stderr, "*  ~~~ Can not get video device! ~~~\n");
		return(1);
	} 
	fprintf(stderr, "*  v4l2 stream data format - Width: %d \n",sdf.fmt.pix.width);
    fprintf(stderr, "*  v4l2 stream data format - Height: %d \n",sdf.fmt.pix.height);
    fprintf(stderr, "*  v4l2 stream data format - Pixel format: %d \n",sdf.fmt.pix.pixelformat);
    
    return(0);
}  

void getData_M036( struct libusb_transfer *trf){
    
    int n_packets = trf->num_iso_packets;
    
    int p;
    for(p =0 ; p < n_packets; p++ ) {
        
        char *data = libusb_get_iso_packet_buffer(trf, p );
        char *video_data;
        int video_data_len;
        
        // fprintf( stderr, "--- %06d, %02d, %04d --------------------------\n",iTransfer,p,trf->iso_packet_desc[p].actual_length);
        
        int l;
        l=trf->iso_packet_desc[p].actual_length;
        if ( l > 0) {
            
            if (data[0] == 0x40 || data[0] == 0xc0 || data[0] == 0xe0)
                field=2;
            else 
                field=1;

            // fprintf(stderr, "Line %3d, Field: %d\n",line, field);  
            
            if (prev_field == 2 && field == 1){
                line_offset=1; // Shift line 
                line=0; video_offset=0;
      
                bytes_in_frame=0;
                bytes_in_field1=0;
                bytes_in_field2=0;
            }
            if (prev_field == 1 && field == 2){
                line_offset=1;   // Shift line
                line=1; video_offset=line_size;
            }
        }   
        
        // if ( l > 32 ) l=32;
        // int i=0;
        // for (i=0;i<l;i++){
        //     fprintf( stderr, "0x%02x ",(uint8_t)data[i]);
        //     if ((i+1)%32 == 0) fprintf( stderr, "\n");
        // } 
        // fprintf( stderr, "\n");
        
        l=trf->iso_packet_desc[p].actual_length;
        if  ( l > 4 && l != 8 ) {
            video_data=data+4;    
            video_data_len=l-4;
            
            int remain=video_data_len;
            int video_data_offset=0;
            
            while (remain > 0 ) {
                int to_copy=line_size-line_offset;
                if (remain >= to_copy) {
                    for (int i=0;i<to_copy;i++)
                        line_buffer[line_offset+i]=video_data[video_data_offset+i];
                    line_offset+=to_copy;
                    
                    for (int i=0;i<line_size;i++){
                        // fprintf(stderr,"%d < %d\n",video_offset+i, video_buffer_size);
                        if (video_offset+i < video_buffer_size)
                        video_buffer[video_offset+i]=line_buffer[i];
                    }
                    video_offset+=line_size;
                    video_offset+=line_size;
                    line+=2;
                    
                    line_offset=0;
                    
                    video_data_offset+=to_copy;
                    remain-=to_copy;
            
                }
                else {
                    to_copy=remain;
                    for (int i=0;i<to_copy;i++)
                        line_buffer[line_offset+i]=video_data[video_data_offset+i];
                    line_offset+=to_copy;
                    video_data_offset+=to_copy;
                    remain-=to_copy;
                }  
            }    
            
            video_offset=video_offset%video_buffer_size;
            
            if (line >= (height-1)) {
                
                // switch (iFrame%16){
                //     case 0:
                //         fprintf(stderr,"- ******\n");
                //         break;
                //     case 1: 
                //         fprintf(stderr,"\\ ******\n");
                //         break;
                //     case 2:
                //         fprintf(stderr,"| ******\n");
                //         break;
                //     case 3: 
                //         fprintf(stderr,"/ ******\n");
                //         break;
                //     default:
                //         break;
                // } 
                
                write(dev_fd,video_buffer, video_buffer_size);
                line=0;
                line_offset=0;
                video_offset=0;
                iFrame++;
            }   
            
            bytes_in_frame+=video_data_len;
            if (field == 1 )
                bytes_in_field1+=video_data_len;
            if (field == 2 )
                bytes_in_field2+=video_data_len;
                        
            // fprintf(stderr,"Line: %d + %d  | %d \n",line,line_offset/2,height);
            // fprintf(stderr,"Field 1: %d / %d\n", bytes_in_field1, video_buffer_size/2);
            // fprintf(stderr,"Field 2: %d / %d\n", bytes_in_field2, video_buffer_size/2);
            // fprintf(stderr,"Frame: %d / %d\n", bytes_in_frame, video_buffer_size);

        } 
        
        prev_field=field;
    
    }    
    
    int r;
    r = libusb_submit_transfer( trf );
    if (r != 0) {
        fprintf( stderr, "libusb_submit_transfer failed with error %d\n", r);
        exit(1);
    }
    
    iTransfer++;
    
}

volatile bool running = true;
volatile bool interrupted = false;
volatile bool verbose = false;
volatile bool update_capture = false;

void signalHandler(int signal){
    fprintf(stderr, "\n* --> Signal: %d",signal);    
    if (signal == SIGINT || signal == SIGTERM || signal == SIGQUIT || signal == SIGTSTP) 
        running = false;
    if (signal == SIGUSR1) {
        update_capture = true ;
        interrupted = false ;
        fprintf(stderr, "\n* --> Capture update or streaming resume request\n");
    }
    if (signal == SIGUSR2){
        interrupted = true ;
        fprintf(stderr, "\n* --> Streaming interrupt request\n");
    }
}

int main (int argc, char **argv) {
    
    sprintf(v4l2_device,"%s","/dev/video0");

    bool option_v4l2_dev = false ;  

    // Handle signals
    signal(SIGINT, signalHandler);
    signal(SIGTERM, signalHandler);
    signal(SIGQUIT, signalHandler);
    signal(SIGTSTP, signalHandler);

    int r;
    char c;
    uint16_t w;
    
    libusb_device *dev = NULL;

    int current_config=-1;
    int config=-1;

    int kernel_driver_detached=0;
    int interface=0;
    libusb_context *usb_context = NULL;

    r = libusb_init(&usb_context);
    if (r < 0) {
       fprintf(stderr, "Error initializing libusb: %s\n", libusb_error_name(r));
       exit(1);
    }

    devh = libusb_open_device_with_vid_pid(NULL, VENDOR_ID,PRODUCT_ID);
    if (!devh) {
       fprintf(stderr, "Error finding USB device\n");
       goto out;
    }

    r=libusb_set_auto_detach_kernel_driver(devh,0);
    if (r==LIBUSB_SUCCESS)
       fprintf(stderr, ">> Auto detach kernel driver is disabled.\n");

    if (libusb_kernel_driver_active(devh, 0) == 1) { //find out if kernel driver is attached
       fprintf(stderr, ">> Kernel driver active!\n");
       if(libusb_detach_kernel_driver(devh, 0) == 0) { //detach it
           fprintf(stderr, "   Kernel driver detached.\n");
           kernel_driver_detached=1;
       }
    }

    fprintf(stderr, "Claiming interface ...\n");
    r = libusb_claim_interface(devh, interface);
    if (r != 0) {
       fprintf(stderr, "Claiming interface failed with error %d\n", r);
       exit(1);
    }
    fprintf(stderr, "   Interface %d is allowed\n", interface);

    fprintf(stderr, "Getting configuration ...\n");
    r = libusb_get_configuration(devh,&current_config);
    if (r != 0) {
       fprintf(stderr, "!! Getting configuration failed with error %d\n", r);
    }
    fprintf(stderr,"   Configuration %d is active\n",current_config);

    config=1;
    if ( current_config != config ) {
       fprintf(stderr, "Setting configuration %d ...\n",config);
       r = libusb_set_configuration(devh,config);
       if (r != 0) {
           fprintf(stderr, "!! Setting configuration %d failed with error %d\n", config, r);
       }
    }

    
 // --------------------------------------------------------------------------

    libvlc_instance_t * inst;
	libvlc_media_player_t *mpAudio;
	libvlc_media_player_t *mpVideo;
	libvlc_media_t *mVideo;
	libvlc_media_t *mAudio;

	inst = libvlc_new (0, NULL );
  
    mAudio = libvlc_media_new_location (inst, "pulse://"AUDIO_SOURCE);
	mVideo = libvlc_media_new_location (inst, "v4l2://"V4L2_LOOPBACK);

	mpAudio = libvlc_media_player_new_from_media (mAudio);
	mpVideo = libvlc_media_player_new_from_media (mVideo);
     
	libvlc_media_release (mAudio);
	libvlc_media_release (mVideo);
    
    libvlc_video_set_aspect_ratio(mpVideo,"16:9");    
    
    audio_set_volume(15);
    
 // --------------------------------------------------------------------------
    
unsigned int t;

float frequencyMHz;

// |>=== Codes from USB capture files ============================================================='

#include "m036-init.c"
if (TV){
    #include "m036-tv.c"
}
if (CVBS){
    #include "m036-cvbs.c"
}
if (SVIDEO){
    #include "m036-svideo.c"
}
if (RADIO){
    #include "m036-radio-87.95MHz.c"
    
    tea5767_read_registers[0]=0;
    tea5767_read_registers[1]=0;
    tea5767_read_registers[2]=0;
    tea5767_read_registers[3]=0;
    tea5767_read_registers[4]=0;
    tea5767_write_registers[0]=0;
    tea5767_write_registers[1]=0;
    tea5767_write_registers[2]=0;
    tea5767_write_registers[3]=0;
    tea5767_write_registers[4]=0;
    
    
    frequencyMHz=radio_tuner_get_frequency();
    printf("Radio frequency: %0.2f MHz\n",frequencyMHz);
    print_tea5767_read_registers();

    audio_set_volume(15);
    libvlc_media_player_play (mpAudio);
    
    printf("\nPlaying radio at the frequency %.2f MHz for 10s.\n",frequencyMHz);
    t=sleep (10);
    
    frequencyMHz=90;
    printf("\nAdjusting radio frequency to %.2f MHz\n.",frequencyMHz);
    radio_tuner_set_frequency(frequencyMHz);
    print_tea5767_write_registers();
    frequencyMHz=radio_tuner_get_frequency();
    printf("Radio frequency: %0.2f MHz\n",frequencyMHz);
    print_tea5767_read_registers();

}

// |<=== Codes from USB capture files ============================================================='

    if (TV)
        frequencyMHz=655.25;
        printf("\nAdjusting TV tuner frequency to %.2f MHz\n.",frequencyMHz);
        tv_tuner_set_frequency(frequencyMHz);
    
    if(!RADIO){
        startX=0;
        startY=0;
        endX=1440;
        endY=288;
        vdi_set_capture_start(startX,startY);
        vdi_set_capture_end(endX,endY);
    }
    

    if(TV||CVBS||SVIDEO){
        audio_set_volume(15);
        libvlc_media_player_play (mpAudio);
        libvlc_media_player_play (mpVideo);
    }
        
// --------------------------------------------------------------------------   
    if (!RADIO){
        vdi_get_capture_start(&startX,&startY);
        vdi_get_capture_end(&endX,&endY);
        width=(endX-startX)/2;
        height=(endY-startY)*2;
        
        // size_t line_size;
        // uint8_t *line_buffer;
        line_size=width*2;
        line_buffer = calloc(line_size, sizeof(uint8_t));
        
        // size_t video_buffer_size;
        // uint8_t *video_buffer;
        video_buffer_size=line_size*height;
        video_buffer = calloc(video_buffer_size, sizeof(uint8_t));
        
        printf("\n* <----------------\n* Start stream\n");
        fprintf(stderr,"* m036: Capture start: (%d,%d)\n",startX,startY);
        fprintf(stderr,"* m036: Capture end: (%d,%d)\n",endX,endY);
        fprintf(stderr,"* m036: Width: %d\n* m036: Height: %d\n",width,height);
        
        // --------------------------------------------------------------------------
        
        dev_fd = open(v4l2_device, O_RDWR);
        if (dev_fd < 0) {
            perror(v4l2_device);
            return errno;
        }
        
        r=setV4L2format();
        if(r>0){
            fprintf(stderr,"* ~~~ Setting v4l2 stream data format failed! ~~~\n");
            running=false;
        }

        size_t written_bytes ;	
        written_bytes = write(dev_fd,video_buffer, video_buffer_size);

        // --------------------------------------------------------------------------
    
        struct libusb_transfer *trf0;
        trf0 = libusb_alloc_transfer( 64 );
        assert( trf0 != NULL ); 
        libusb_fill_iso_transfer(trf0, devh, 0x82, isobuf0, 64*3072, 64 , getData_M036, NULL, 2000 );
        libusb_set_iso_packet_lengths(trf0, 3072 );
    
        struct libusb_transfer *trf1;
        trf1 = libusb_alloc_transfer( 64 );
        assert( trf1 != NULL ); 
        libusb_fill_iso_transfer(trf1, devh, 0x82, isobuf1, 64*3072, 64 , getData_M036, NULL, 2000 );
        libusb_set_iso_packet_lengths(trf1, 3072 );
        
        struct libusb_transfer *trf2;
        trf2 = libusb_alloc_transfer( 64 );
        assert( trf2 != NULL ); 
        libusb_fill_iso_transfer(trf2, devh, 0x82, isobuf2, 64*3072, 64 , getData_M036, NULL, 2000 );
        libusb_set_iso_packet_lengths(trf2, 3072 );
        
        struct libusb_transfer *trf3;
        trf3 = libusb_alloc_transfer( 64 );
        assert( trf3 != NULL ); 
        libusb_fill_iso_transfer(trf3, devh, 0x82, isobuf3, 64*3072, 64 , getData_M036, NULL, 2000 );
        libusb_set_iso_packet_lengths(trf3, 3072 );
        

        r = libusb_submit_transfer(trf0);
        if (r != 0) {
            fprintf( stderr, "* libusb_submit_transfer failed with error %d\n", r);
            exit(1);
        }

        r = libusb_submit_transfer(trf1);
        if (r != 0) {
            fprintf( stderr, "* libusb_submit_transfer failed with error %d\n", r);
            exit(1);
        }

        r = libusb_submit_transfer( trf2 );
        if (r != 0) {
            fprintf( stderr, "* libusb_submit_transfer failed with error %d\n", r);
            exit(1);
        }
    
        r = libusb_submit_transfer( trf3 );
        if (r != 0) {
            fprintf( stderr, "* libusb_submit_transfer failed with error %d\n", r);
            exit(1);
        }
    
        // -------------------------------------------------------------------------- 

    
    }
    
    printf("\nPress Ctrl+C to exit.\n\n");
    
    loop:
    // Run until interruption or failure.
    while (running==true){
       libusb_handle_events(NULL);
    }
    if(!RADIO)
        printf("\n* End stream\n* <----------------\n\n");
    
    libvlc_media_player_stop (mpAudio);
    libvlc_media_player_release (mpAudio);
    // libvlc_media_player_stop (mpVideo);
    // libvlc_media_player_release (mpVideo);
    libvlc_release (inst);
    
    print_dc1120_registers();
    print_ac97_registers();
    
    out:
    
    if (devh)
       libusb_close(devh);
    libusb_exit(usb_context);
    
    return 0;
}
