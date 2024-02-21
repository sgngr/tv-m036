"""
================================================
A TV app for the AVerMedia AVerTV USB2.0 Plus
Hardware control module
================================================
Version:    0.1
Author:     Sinan Güngör
License:    GPL v2
"""

import os
import time
import usb1 as usb

#===============================================================================

class DC1120():
    """DC1120 registers, GPIO pins and GPIO masks"""
    GCTRL=0x000     # GCTRL GPIO Control 
    R004 =0x004
    RMCTL=0x00C     # Remote Wakeup Control
    POSVA=0x010     # Power-on Strapping Data
    R014 =0x014
    PLLSO=0x018     # PLL Select Options
    PLLFD=0x01c     # PLL Frequency Divider

    DCTRL=0x100     # Decoder Control Register
    CFSPO=0x110     # Capture Frame Start Position 
    CFSPO_STX_L=0x110
    CFSPO_STX_H=0x111
    CFSPO_STY_L=0x112
    CFSPO_STY_H=0x113
    CFEPO=0x114     # Capture Frame End Position
    CFEPO_ENX_L=0x114
    CFEPO_ENX_H=0x115 
    CFEPO_ENY_L=0x116
    CFEPO_ENY_H=0x117 
    TCTRL=0x120     #Test Data Control

    SICTL=0x200     # Serial Interface Control Register
    SBUSW=0x204     # Serial Bus Write
    SBUSR=0x208     # Serial Bus Read
    SCSI =0x20C
    GSBWP=0x210
    GSBRP=0x214
    AIC  =0x2FC
    
    TIGEN=0x300     # Timing Generator
    TICTL=0x350     # Timing Control Paramater

    AC97CTL_0=0x500 # Audio Control Register 0
    AC97CTL_1=0x504 # Audio Control Register 1
    I2SCTL   =0x50C # I2S Control
    EEPROM_SZ=0x5F0 # EEPROM Size

    #Pins
    IO0=0x00
    IO1=0x01
    IO2=0x02
    IO3=0x03
    IO4=0x04
    I2C_SCL=0x04
    IO5=0x05
    IO6=0x06
    LED=0x06
    IO7=0x07
    IO8=0x08
    I2C_SDA=0x08
    IO9=0x09
    #Masks
    ROMD_MASK=0x80
    PORT0_MASK=0xFF
    PORT1_MASK=0x03
    
dc1120=DC1120()

#===============================================================================

class AC97AudioCodec():
    """AC97 Mixer registers""" 
    MASTER_VOL   =0x02  # MX02 (Front) Master volume
    MIC_VOL      =0x0e  # MX0E MIC Volume
    LINE_IN_VOL  =0x10  # MX10 LINE_IN Volume
    CD_VOL       =0x12  # MX12 CD Volume
    AUX_VOL      =0x16  # MX16 AUX Volume
    RECORD_SELECT=0x1a  # MX1A Record Select
    RECORD_GAIN  =0x1c  # MX1C Record Gain
 
ac97=AC97AudioCodec()

#===============================================================================

class TVP5150A():
    """TVP5150A video decoder constants."""
    VIDEO_STANDARD_00 = 0x00
    VIDEO_STANDARD_01 = 0x01 
    VIDEO_STANDARD_NTSC_M_J = 0x02 
    VIDEO_STANDARD_03 = 0x03 
    VIDEO_STANDARD_PAL_B_G_H_I_N = 0x04 
    VIDEO_STANDARD_05 = 0x05 
    VIDEO_STANDARD_PAL_M = 0x06 
    VIDEO_STANDARD_07 = 0x07 
    VIDEO_STANDARD_PAL_Nc = 0x08 
    VIDEO_STANDARD_09 = 0x09 
    VIDEO_STANDARD_NTSC = 0x0A 
    VIDEO_STANDARD_11 = 0x0B
    VIDEO_STANDARD_SECAM = 0x0C

tvp5150a = TVP5150A()

#===============================================================================

import ctypes
enum = ctypes.c_uint

operating_modes = enum
(RADIO,TV,CVBS,S_VIDEO) = range(4)

# video_standards = enum 
# (VIDEO_STANDARD_00,VIDEO_STANDARD_01, VIDEO_STANDARD_NTSC_M_J, VIDEO_STANDARD_03, VIDEO_STANDARD_PAL_B_G_H_I_N, VIDEO_STANDARD_05, VIDEO_STANDARD_PAL_M, VIDEO_STANDARD_07, VIDEO_STANDARD_PAL_Nc, VIDEO_STANDARD_09, VIDEO_STANDARD_NTSC, VIDEO_STANDARD_11, VIDEO_STANDARD_SECAM) = range(13)

audio_sources = enum
(AUDIO_SOURCE_AUX,AUDIO_SOURCE_RADIO_TUNER,AUDIO_SOURCE_TV_TUNER) = range(3)

video_sources = enum
(VIDEO_SOURCE_NONE,VIDEO_SOURCE_TV,VIDEO_SOURCE_COMPOSITE,VIDEO_SOURCE_S_VIDEO) = range(4)

list_video_standards=["Autoswitch", "Reserved", "NTSC (M,J)", "Reserved", "PAL (B,G,H,I,N)", "Reserved", "PAL (M)","Reserved", "PAL (Nc)","Reserved", "NTSC (4.43)","Reserved", "SECAM  (B, D, G, K, K1, L)"]
list_audio_sources=["Aux","Tv Tuner","Radio"]
list_video_sources=["None","Tv","Composite","S-Video"]

#===============================================================================


class Utils():
    """Utils for bit operations.
    """
    def set_bit(self,x,n):
        """Set nth bit of x."""
        return x | (1<<n)
    
    def clear_bit(self,x,n):
        """Clear nth bit of x."""
        return x & ~(1<<n)

    def get_bit(self,x,n):
        """Get nth bit of x."""
        return ((x >> n) & 1)  
    
    def bitmask_set(self,x,mask):
        """Set mask bits of x."""
        return x | mask
    
    def bitmask_clear(self,x,mask):
        """Clear mask bits of x."""
        return x & ~mask

    def bits_copy(self,y,x,mask):
        """Copy mask bits of x to y."""
        return (y & ~mask) | (x & mask)
    
    def bitmask_flip(self,x,mask):
        """Flip mask bits of x.""" 
        return x ^ mask
        
    def byte2bits(self,x):
        """Return a formetted string from bits of x."""
        return "{:04b}".format(x>>4)+" "+"{:04b}".format(x&0x0F)
    
    def word2bits(self,x):
        """Return a formated string from bits of x."""
        return "{:04b}".format(x>>12)+" "+"{:04b}".format((x>>8)&0x0F)+" "+"{:04b}".format((x>>4)&0x0F)+" "+"{:04b}".format(x&0x0F)
    
utils = Utils()

#===============================================================================

class Position(object):
    """Position for frame start and frame end"""
    def __init__(self,x,y):
        self.x = x
        self.y = y
    def __str__(self):
        return '(' + str(self.get_x()) + ',' + str(self.get_y()) + ')'
    def get_x(self):
        """Return horizontal position."""
        return self.x
    def get_y(self):
        """Return vertical position."""
        return self.y

class Frame(object):
    """Video and capture frame."""
    def __init__(self,start,end):
        self.start = start
        self.end = end
    def __str__(self):
        return str(self.get_start()) + '-' + str(self.get_end())
    def get_start(self):
        """Return start position of the frame."""
        return self.start
    def get_end(self):
        """Return end position of the frame."""
        return self.end

class Size(object):
    """Video or capture size"""
    def __init__(self,w,h):
        self.width = w
        self.height = h
    def __str__(self):
        return str(self.get_width()) + 'x' + str(self.get_height()) 
    def get_width(self):
        """Return width."""
        return self.width
    def get_height(self):
        """Return height."""
        return self.height

#===============================================================================

class M036Device():
    """This class provides functions to control the hardware of AVerMedia AVerTV USB2.0 Plus (07ca:0036).
    The main controller of the device - Syntek DC1120 video controller - is an ancestor 
    of Syntek STK11xx series video imaging controllers and has similar registers with this series of 
    controllers. Main controller functions are grouped as:
      - GPIO functions: gpio_....()
      - Video decoder interface functions: vdi_....()
      - Serial bus interface functions: sbi_....()
      - Timing generator functions: tg_....()
      - Audio interface functions: ai_...()
    Other hardware control functions are:
      - Video decoder (Texas Instruments TVP5150AM1) functions: video_decoder_....()
      - Tuner functions (LG TALN-M205T): tv_tuner_....()
      - Audio functions (): audio_....()
      - Video functions (): video_....()
    """

    def __init__(self):
        self.VENDOR_ID=0x07ca
        self.PRODUCT_ID=0x0036
        self.usbDev = None
        self.usbDevh = None
        self.usbOpened = False
        
        self.colorBrightness0 = 0.5
        self.colorBrightness = 0.5
        self.colorContrast0 = 0.5
        self.colorContrast = 0.5
        self.colorHue0 = 0.0
        self.colorHue = 0.0
        self.colorSaturation0 = 0.5
        self.colorSaturation = 0.5
 
        self.operatingMode = 1
 
        self.audioSource = 0
        self.videoSource = 0

        self.videoCaptureStart=Position(0,0)
        self.videoCaptureEnd=Position(640,480)
        self.videoCaptureSize=Size(640,480)

        self.vdVideoStandard=0x04
        self.vdVideoStandardAuto=0x00
        self.vdVideoStandardComposite=0
        self.vdVideoStandardSVideo=0
        self.vdVideoStandardTv=0
        self.vdCaptureFrameComposite=Frame(Position(0,0),Position(1280,240))
        self.vdCaptureFrameSVideo=Frame(Position(0,0),Position(1280,240))
        self.vdCaptureFrameTv=Frame(Position(0,0),Position(1280,240))
        self.vdVideoSizeClass="576"
        self.vdVerticalLineCount=625
        self.vdVerticalSyncLocked=0
        self.vdHorizontalSyncLocked=0
        self.vdVideoDetected=False

        self.tvTunerFrequency=500.25


    def find(self):
        """Find the device."""
        usbContext=usb.USBContext()
        for dev in usbContext.getDeviceList():
            if dev.getVendorID() == self.VENDOR_ID and dev.getProductID() == self.PRODUCT_ID :
                break
            else:
                dev=None
        self.usbDev=dev
        
    def open(self):
        """Open the device."""
        self.usbDevh=self.usbDev.open()
    
    def reset(self):
        """Reset the device."""
        if self.usbDevh :
            self.usbDevh.resetDevice()
            
    def close(self):
        """Close the device."""
        self.usbDevh.close()
        
    def ctrl_tx(self,index,value):
        """Do a USB control write."""
        r = self.usbDevh.controlWrite(0x40,1,value,index,[])

    def ctrl_rx(self,index):
        """Do a USB control read."""
        r = self.usbDevh.controlRead(0xc0,0,0x0000,index,1)
        return r[0]
 
    def print_register(self,reg):
        """Print value of a USB control register"""
        val=self.ctrl_rx(reg)
        print("0x{v:03x} | {b}".format(v=val,b=utils.byte2bits(val)))
 
    def get_register_bit(self,reg,bit):
        """Get a USB control register bit."""
        val=self.ctrl_rx(reg)
        return utils.get_bit(val,bit)
 
    def set_register_bit(self,reg,bit):
        """Set a USB control register bit."""
        val=self.ctrl_rx(reg)
        val=utils.set_bit(val,bit)
        self.ctrl_tx(reg,val)
        
    def clear_register_bit(self,reg,bit):
        """Clear a USB control register bit."""
        val=self.ctrl_rx(reg)
        val=utils.clear_bit(val,bit)
        self.ctrl_tx(reg,val)
        
    def copy_to_register(self,reg,value,mask):
        """Copy mask bits of value to register"""
        val=self.ctrl_rx(reg)
        val=utils.bits_copy(val,value,mask)
        self.ctrl_tx(reg,val)
        
#   ============================================    
#   GPIO functions
#   0x0000 GCTRL GPIO Control
#            GCTRL[31] - ROMD : EEPROM Disable 
#            GCTRL[25:16] - GDIR: GPIO Direction
#            GCTRL[9:0] - GV : GPIO Value
#   --------------------------------------------
#            GCTRL[31:24]
#     0x82 : 1 0 0 0 0 0 1 0
#     0x83 : 1 0 0 0 0 0 1 1
#            GCTRL[31] - ROMD 1 EEPROM interface is disabled.
#            GCTRL[25] - GDIR[9] 1 Output, 0 Input   
#            GCTRL[24] - GDIR[8] 1 Output, 0 Input
#   --------------------------------------------
#            GCTRL[23:16] - GDIR [7:0] - 1 Output, 0 Input
#     0x78 : 0 1 1 1 1 0 0 0
#     0xe8 : 1 1 1 0 1 0 0 0
#     0xef : 1 1 1 0 1 1 1 1
#   --------------------------------------------         
#     IO Directions
#     0x82 0x78  1 0 0 0 0 0 1 0  0 1 1 1 1 0 0 0
#     0x82 0xe8  1 0 0 0 0 0 1 0  1 1 1 0 1 0 0 0
#     0x82 0xef  1 0 0 0 0 0 1 0  1 1 1 0 1 1 1 1 
#     0x83 0x78  1 0 0 0 0 0 1 1  0 1 1 1 1 0 0 0
#     0x83 0xe8  1 0 0 0 0 0 1 1  1 1 1 0 1 0 0 0
#     0x83 0xef  1 0 0 0 0 0 1 1  1 1 1 0 1 1 1 1 
#                |           | |  | | | | | | | |___ GPIP0              
#                |           | |  | | | | | | |_____ GPIO1     
#                |           | |  | | | | | |_______ GPIO2 
#                |           | |  | | | | |_________ GPIO3
#                |           | |  | | | |___________ GPIO4 : I2C_SCL             
#                |           | |  | | |_____________ GPIO5    
#                |           | |  | |_______________ GPIO6 : LED
#                |           | |  |_________________ GPIO7
#                |           | |____________________ GPIO8 : I2C_SDA    
#                |           |______________________ GPIO9 
#                |__________________________________ ROMD          

    def gpio_get(self,io):
        """Read GPIO pin status."""
        if io in range(0,8):
            return self.get_register_bit(dc1120.GCTRL,io)
        if io in range(8,10):
            return self.get_register_bit(dc1120.GCTRL+1,io-8)

    def gpio_set(self,io):
        """Set GPIO pin."""
        if io in range(0,8):
            self.set_register_bit(dc1120.GCTRL,io)
        if io in range(8,10):
            self.set_register_bit(dc1120.GCTRL+1,io-8)
            
    def gpio_clear(self,io):
        """Clear GPIO pin."""
        if io in range(0,8):
            self.clear_register_bit(dc1120.GCTRL,io)
        if io in range(8,10):
            self.clear_register_bit(dc1120.GCTRL+1,io-8)    

    def gpio_dir_set(self,io):
        """Set GPIO pin direction (set GPIO pin as output)."""
        if io in range(0,8):
            self.set_register_bit(dc1120.GCTRL+2,io)
        if io in range(8,10):
            self.set_register_bit(dc1120.GCTRL+3,io-8)

    def gpio_dir_clear(self,io):
        """Clear GPIO pin direction (set GPIO pin as input)."""
        if io in range(0,8):
            self.clear_register_bit(dc1120.GCTRL+2,io)
        if io in range(8,10):
            self.clear_register_bit(dc1120.GCTRL+3,io-8)     
    
    def gpio_write_directions(self,port,mask,directions):
        """Write direction of selected IO pins."""
        if port == 0 :
            self.copy_to_register(dc1120.GCTRL+2,directions,mask)
        if port == 1 : 
            self.copy_to_register(dc1120.GCTRL+3,directions,mask)
            
    def gpio_write_outputs(self,port,mask,outputs):
        """Write selected IO pins."""
        if port == 0 :
            self.copy_to_register(dc1120.GCTRL,outputs,mask)
        if port == 1 : 
            self.copy_to_register(dc1120.GCTRL+1,outputs,mask)
    
    def gpio_get_directions(self,port,mask):
        """Get directions of the selected IO pins."""
        if port == 0 :
            val=self.ctrl_rx(dc1120.GCTRL+2)
            return val & mask
        if port == 1 : 
            val=self.ctrl_rx(dc1120.GCTRL+3)
            return val & mask
    
    def gpio_read(self,port,mask):
        """Read selected IO pins."""
        if port == 0 :
            val=self.ctrl_rx(dc1120.GCTRL)
            return val & mask
        if port == 1 : 
            val=self.ctrl_rx(dc1120.GCTRL)
            return val & mask
                
    def gpio_led(self,on):
        """Turn LED on or off."""
        if on :
            self.set_register_bit(dc1120.GCTRL,dc1120.LED) 
        else:
            self.clear_register_bit(dc1120.GCTRL,dc1120.LED) 

#   ====================================    
#   Serial bus interface functions

    def sbi_set_clock_devider(self):
        """Set serial interface clock devider."""
        self.ctrl_tx(0x0202,0x001e)
    
    def sbi_select_device(self,sda):
        """Set serial interface device address."""
        self.ctrl_tx(0x0203,sda)
       
    def sbi_read(self,ra):
        """Read data through serial bus interface."""
        self.ctrl_tx(0x0208,ra)
        self.ctrl_tx(0x0200,0x0020)   # Read now
        rf=self.sbi_read_finish(1000)
        if rf == False :
            print('Serial bus interface can not read!')
        rd=self.ctrl_rx(0x0209)
        return rd   
   
    def sbi_write(self,wa,wd):
        """Write data through serial bus interface."""
        self.ctrl_tx(0x0204,wa)
        self.ctrl_tx(0x0205,wd)
        self.ctrl_tx(0x0200,0x0005)  # Retry Write on Failed ACK + Access Immediately
        wf=self.sbi_write_finish(1000)
        if wf == False:
            print('Serial bus interface can not write!')

    def sbi_write_finish(self, max_try):
        """Wait until serial bus write operation completed."""
        c = self.ctrl_rx(0x201) 
        q=1
        while c != 0x04 :
            c = self.ctrl_rx(0x201)
            q+=1
            if q == max_try :
                return False
        return True
    
    def sbi_read_finish(self, max_try):
        """Wait until serial bus read operation completed."""
        c = self.ctrl_rx(0x201) 
        q=1
        while c != 0x01 :
            c = self.ctrl_rx(0x201)
            q+=1
            if q == max_try :
                return False
        return True

#   ====================================    
#   Video decoder interface functions        
    
    def vdi_start_capturing(self):
        """Start video capture."""
        self.set_register_bit(dc1120.DCTRL,7)
        
    def vdi_stop_capturing(self):
        """Stop video capture."""
        self.clear_register_bit(dc1120.DCTRL,7)

    def vdi_disable_vbi(self):
        """Turn the VBI mode off."""
        self.ctrl_tx(dc1120.DCTRL+3,0x0000)
     
    def vdi_set_capture_start(self,start):
        """Set capture start position."""
        x0=start.x
        y0=start.y
        xL=x0&0x00FF
        xH=(x0&0xFF00)>>8
        self.ctrl_tx(dc1120.CFSPO_STX_L,xL)
        self.ctrl_tx(dc1120.CFSPO_STX_H,xH)
        yL=y0&0x00FF
        yH=(y0&0xFF00)>>8
        self.ctrl_tx(dc1120.CFSPO_STY_L,yL)
        self.ctrl_tx(dc1120.CFSPO_STY_H,yH)
        self.videoCaptureStart=start
        self.videoCaptureFrame=Frame(self.videoCaptureStart,self.videoCaptureEnd)
        
    def vdi_set_capture_end(self,end):
        """Set capture end position.""" 
        x1=end.x
        y1=end.y
        xL=x1&0x00FF
        xH=(x1&0xFF00)>>8
        self.ctrl_tx(dc1120.CFEPO_ENX_L,xL)
        self.ctrl_tx(dc1120.CFEPO_ENX_H,xH)
        yL=y1&0x00FF
        yH=(y1&0xFF00)>>8
        self.ctrl_tx(dc1120.CFEPO_ENY_L,yL)
        self.ctrl_tx(dc1120.CFEPO_ENY_H,yH) 
        self.videoCaptureEnd=end
        self.videoCaptureFrame=Frame(self.videoCaptureStart,self.videoCaptureEnd)
        
    def vdi_set_capture_frame(self,frame):
        """Set capture frame."""
        x0=frame.start.x
        y0=frame.start.y
        x1=frame.end.x
        y1=frame.end.y
        
        xL=x0&0x00FF
        xH=(x0&0xFF00)>>8
        self.ctrl_tx(dc1120.CFSPO_STX_L,xL)
        self.ctrl_tx(dc1120.CFSPO_STX_H,xH)

        yL=y0&0x00FF
        yH=(y0&0xFF00)>>8
        self.ctrl_tx(dc1120.CFSPO_STY_L,yL)
        self.ctrl_tx(dc1120.CFSPO_STY_H,yH)

        xL=x1&0x00FF
        xH=(x1&0xFF00)>>8
        self.ctrl_tx(dc1120.CFEPO_ENX_L,xL)
        self.ctrl_tx(dc1120.CFEPO_ENX_H,xH)

        yL=y1&0x00FF
        yH=(y1&0xFF00)>>8
        self.ctrl_tx(dc1120.CFEPO_ENY_L,yL)
        self.ctrl_tx(dc1120.CFEPO_ENY_H,yH)      
        
        # print("vdi_set_capture_frame: ({},{}) - ({},{})".format(x0,y0,x1,y1))
        
        if self.videoSource == VIDEO_SOURCE_TV :
            self.vdCaptureFrameTv=Frame(Position(x0,y0),Position(x1,y1))
        if self.videoSource == VIDEO_SOURCE_COMPOSITE :
            self.vdCaptureFrameComposite=Frame(Position(x0,y0),Position(x1,y1))
        if self.videoSource == VIDEO_SOURCE_S_VIDEO :
            self.vdCaptureFrameSVideo=Frame(Position(x0,y0),Position(x1,y1))
        
        self.videoCaptureSize.width=int((x1-x0)//2)
        self.videoCaptureSize.height=int((y1-y0)*2)
        
    def vdi_get_capture_frame(self):
        """Get capture frame, store it for current video source and set video size."""
        xL=self.ctrl_rx(dc1120.CFSPO_STX_L)
        xH=self.ctrl_rx(dc1120.CFSPO_STX_H)
        x0=256*xH + xL
        xL=self.ctrl_rx(dc1120.CFEPO_ENX_L)
        xH=self.ctrl_rx(dc1120.CFEPO_ENX_H)
        x1=256*xH + xL
        yL=self.ctrl_rx(dc1120.CFSPO_STY_L)
        yH=self.ctrl_rx(dc1120.CFSPO_STY_H)
        y0=256*yH + yL
        yL=self.ctrl_rx(dc1120.CFEPO_ENY_L)
        yH=self.ctrl_rx(dc1120.CFEPO_ENY_H)
        y1=256*yH + yL
        
        self.vd_capture_frame=Frame(Position(x0,y0),Position(x1,y1))
        
        if self.videoSource == VIDEO_SOURCE_TV :
            self.vdCaptureFrameTv=Frame(Position(x0,y0),Position(x1,y1))
        if self.videoSource == VIDEO_SOURCE_COMPOSITE :
            self.vdCaptureFrameComposite=Frame(Position(x0,y0),Position(x1,y1))
        if self.videoSource == VIDEO_SOURCE_S_VIDEO :
            self.vdCaptureFrameSVideo=Frame(Position(x0,y0),Position(x1,y1))
            
        self.videoCaptureSize.width=int((x1-x0)//2)
        self.videoCaptureSize.height=int((y1-y0)*2)
    
    def video_decoder_get_device_id(self):
        """Get the device ID and ROM version of the video decoder chip TVP5150A."""
        idH=self.sbi_read(0x0080)
        idL=self.sbi_read(0x0081)
        majorVer=self.sbi_read(0x0082)
        minorVer=self.sbi_read(0x0083)
        deviceID="{h:02x}{l:02x}".format(h=idH,l=idL)
        version="{V:02x}.{v:02x}".format(V=majorVer,v=minorVer)
        print("Video decoder device ID:",deviceID)
        print("Video decoder ROM version:",version)
        return deviceID, version
    
    def video_print_capture(self):
        """Print video capture geometry."""
        self.video_get_capture()
        x0=self.videoCaptureStart.x
        y0=self.videoCaptureStart.y
        x1=self.videoCaptureEnd.x
        y1=self.videoCaptureEnd.y
        w=self.videoCaptureSize.width
        h=self.videoCaptureSize.height
        print ("({x0},{y0}) - ({x1},{y1}) : {w}x{h}".format(x0=x0,y0=y0,x1=x1,y1=y1,w=w,h=h)) 
     
    def video_get_capture (self):
        """Get start position, end position and size of video capture frame.""" 
        self.vdi_get_capture_frame()
        x0=self.vd_capture_frame.start.x
        y0=self.vd_capture_frame.start.y
        x1=self.vd_capture_frame.end.x
        y1=self.vd_capture_frame.end.y
        X0=x0//2
        X1=x1//2
        Y0=y0*2
        Y1=y1*2
        W=X1-X0
        H=Y1-Y0
        self.videoCaptureStart=Position(X0,Y0)
        self.videoCaptureEnd=Position(X1,Y1)
        self.videoCaptureSize=Size(W,H)
        
    def video_set_capture(self,X,Y,W,H):
        """Set video capture frame WxH+X+Y""" 
        if X < 0 :
            X = 0
        if Y < 0:
            Y = 0
        if W > 720 :
            W = 720
        if H > 576 :
            H = 576
            
        x0 = X*2
        y0 = Y//2
        x1=(X+W)*2
        y1=(Y+H)//2

        self.vdi_set_capture_frame(Frame(Position(x0,y0),Position(x1,y1)))
        
    def video_decoder_status_video_standard(self):
        """Get Status #5 of the video decoder chip TVP5150A.
           Get video standard of the video decoder.
           Save video standard of the video decoder for current video source.
        """
        self.sbi_select_device(0xba)
        s5=self.video_decoder_status(5)
        b7=utils.get_bit(s5,7)
        b3=utils.get_bit(s5,3)
        b2=utils.get_bit(s5,2)
        b1=utils.get_bit(s5,1)
        b0=utils.get_bit(s5,0)
        
        vStd= b0 | b1 << 1 | b2 << 2 | b3 << 3
        autoSwitched=b7

        print("video_decoder_status_video_standard: Status #5 : {v:04d} | 0x{v:02x} | {b}".format(v=s5,b=utils.byte2bits(s5)))
        print("video_decoder_status_video_standard: Status #5 - Video standard : {v:04d} | 0x{v:02x} | {b}".format(v=vStd,b=utils.byte2bits(vStd)))
        
        self.vdVideoStandard=0
        
        if vStd==1 :
            if autoSwitched :
                self.vdVideoStandardAuto=tvp5150a.VIDEO_STANDARD_NTSC_M_J
            else:
                self.vdVideoStandard=tvp5150a.VIDEO_STANDARD_NTSC_M_J
        if vStd==3 :
            if autoSwitched :
                self.vdVideoStandardAuto=tvp5150a.VIDEO_STANDARD_PAL_B_G_H_I_N
            else:
                self.vdVideoStandard=tvp5150a.VIDEO_STANDARD_PAL_B_G_H_I_N
        if vStd==5 :
            if autoSwitched :
                self.vdVideoStandardAuto=tvp5150a.VIDEO_STANDARD_PAL_M
            else:
                self.vdVideoStandard=tvp5150a.VIDEO_STANDARD_PAL_M
        if vStd==7 :
            if autoSwitched :
                self.vdVideoStandardAuto=tvp5150a.VIDEO_STANDARD_PAL_Nc
            else:
                self.vdVideoStandard=tvp5150a.VIDEO_STANDARD_PAL_Nc
        if vStd==9 :
            if autoSwitched :
                self.vdVideoStandardAuto=tvp5150a.VIDEO_STANDARD_NTSC
            else:
                self.vdVideoStandard=tvp5150a.VIDEO_STANDARD_NTSC
        if vStd==11 :
            if autoSwitched :
                self.vdVideoStandardAuto=tvp5150a.VIDEO_STANDARD_SECAM
            else:
                self.vdVideoStandard=tvp5150a.VIDEO_STANDARD_SECAM
        if autoSwitched :
                self.vdVideoStandard=self.vdVideoStandardAuto
            
        if self.videoSource == VIDEO_SOURCE_TV :
            self.vdVideoStandardTv=self.vdVideoStandard
        if self.videoSource == VIDEO_SOURCE_COMPOSITE :
            self.vdVideoStandardComposite=self.vdVideoStandard
        if self.videoSource == VIDEO_SOURCE_S_VIDEO :
            self.vdVideoStandardSVideo=self.vdVideoStandard

        if autoSwitched :
            print("video_decoder_status_video_standard: Video standard: ",list_video_standards[self.vdVideoStandard]," (auto switched)")
        else :
            print("video_decoder_status_video_standard: Video standard: ",list_video_standards[self.vdVideoStandard])

    def video_decoder_get_video_standard(self):
        """Get video standard of the video decoder chip TVP5150A."""
        # Video Standard Register: 0x28
        # Video standard
        # 0000 = Autoswitch mode (default)
        # 0001 = Reserved
        # 0010 = (M, J) NTSC ITU-R BT.601
        # 0011 = Reserved
        # 0100 = (B, G, H, I, N) PAL ITU-R BT.601
        # 0101 = Reserved
        # 0110 = (M) PAL ITU-R BT.601
        # 0111 = Reserved
        # 1000 = (Combination-N) PAL ITU-R BT.601
        # 1001 = Reserved
        # 1010 = NTSC 4.43 ITU-R BT.601
        # 1011 = Reserved
        # 1100 = SECAM ITU-R BT.601
        # With the autoswitch code running, the application can force the device to operate in a particular video
        # standard mode by writing the appropriate value into this register.
        self.sbi_select_device(0xba)
        self.vdVideoStandard=self.sbi_read(0x28)
            
    def video_decoder_set_video_standard(self,vs):
        """Select video standard of the video decoder chip TVP5150A."""
        self.sbi_select_device(0xba)
        self.sbi_write(0x28,vs)
    
    def video_decoder_get_vertical_line_count(self):
        """Return vertical line count of the video decoder chip TVP5150A."""
        self.sbi_select_device(0xba)
        vlc_h=self.sbi_read(0x84)
        vlc_l=self.sbi_read(0x85)
        vlc=256*vlc_h+vlc_l
        self.vdVerticalLineCount=vlc
    
    def video_decoder_status(self,n):
        """Return the nth status byte of the video decoder chip TVP5150A."""
        self.sbi_select_device(0xba)
        s=False
        if n == 1:
            s=self.sbi_read(0x88)
        if n == 2:
            s=self.sbi_read(0x89)
        if n == 3:
            s=self.sbi_read(0x8a)
        if n == 4:
            s=self.sbi_read(0x8b)
        if n == 5:
            s=self.sbi_read(0x8c)
        return s
    
    def video_decoder_set_brightness(self,brightness):
        """Set video brightness."""
        if brightness < 0.0 :
            brightness=0.0
        if brightness > 1.0 :
            brightness=1.0
        b=int(brightness*255)
        self.sbi_select_device(0xba)
        self.sbi_write(0x0009,b)

    def video_decoder_set_contrast(self,contrast):
        """Set video contrast."""
        if contrast < 0.0 :
            contrast=0.0
        if contrast > 1.0 :
            contrast=1.0
        c=int(contrast*255)
        self.sbi_select_device(0xba)
        self.sbi_write(0x000c,c)
        
    def video_decoder_set_hue(self,hue):
        """Set video hue."""
        if hue > 0.4985 :
            hue = 127/255
        if hue < -0.4985:
            hue = -128/255 
        h=int(hue*255)
        if h < 0 :
            h=255+h           
        self.sbi_select_device(0xba)
        self.sbi_write(0x000b,h)

    def video_decoder_set_saturation(self,saturation):
        """Set video saturation."""
        if saturation < 0.0 :
            saturation=0.0
        if saturation > 1.0 :
            saturation=1.0
        s=int(saturation*255)
        self.sbi_select_device(0xba)
        self.sbi_write(0x000a,s)

    def tg_set_timing_generator(self):
        """Set timing generator settings
        """
        self.ctrl_tx(0x0300,0x0012)
        self.ctrl_tx(0x0350,0x002d)
        self.ctrl_tx(0x0351,0x0001)
        self.ctrl_tx(0x0352,0x0000)
        self.ctrl_tx(0x0353,0x0000)
        self.ctrl_tx(0x0300,0x0080)
        
    def tg_set_pll(self):
        """Set timing generator PLL options.
        """
        self.ctrl_tx(0x0018,0x0010) # PLLSO     COC [4] – Clock Output Control - 1 : Enable clock out, DCI [1] –Clock Invert - 1: Clock inverted
        self.ctrl_tx(0x0019,0x0000) # PLLSO+1   TGCS [13] –Timing Generator Clock STOP - 0 : Don't stop

    def init_device(self):
        """Initialize DC1120 chip.
        """
        # self.usbDevh.claimInterface(0)
        # self.usbDevh.setInterfaceAltSetting(0,0)

        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x60)
        self.gpio_write_directions(0,dc1120.PORT0_MASK,0xe8)                        
        # !! First off all, disable EEPROM interface, never enable it.
        self.gpio_write_directions(1,dc1120.ROMD_MASK|dc1120.PORT1_MASK,0x83)
        self.gpio_write_directions(0,dc1120.PORT0_MASK,0xef) 
        
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x66)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x67)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x66)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x65)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x65)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x65)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x65)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x65)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x65)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x65)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x65)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x61)
        
        c=self.gpio_read(0,dc1120.PORT0_MASK) # Response data: 61
        c=self.gpio_get_directions(0,dc1120.PORT0_MASK) # Response data: ef
        
        self.gpio_write_directions(0,dc1120.PORT0_MASK,0xef)
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x61)
        
        self.sbi_select_device(0x00ba)
        
        self.gpio_write_directions(0,dc1120.PORT0_MASK,0xe8) 
        self.gpio_write_directions(1,dc1120.PORT1_MASK,0x83) 
        
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x60)
        self.gpio_write_outputs(1,dc1120.PORT1_MASK,0x02)
        
        self.ctrl_tx(0x0005,0x0000) # Unknown register R004+1
        self.ctrl_tx(0x0007,0x0002) # Unknown register R004+3
        
        self.ctrl_tx(0x000d,0x0000) # Remote Wakeup Polarity, GPIO[8:9] : 
        self.ctrl_tx(0x000f,0x0002) # Remote Wakeup Control,  GPIO[8:9] : Enables USB remote wakeup for corresponding GPIO 
        
        # Video decoder TI TVP5150AM1
        self.vdi_disable_vbi()  # DCTRL+3 : 0x00 VBI mod disabled
        
        # Timing generator
        self.tg_set_timing_generator()
        self.tg_set_pll()
        self.sbi_set_clock_devider()  
        
        # Video decoder capture frame: (80,25) - (1360,265) | (40,50)-(680,530) pixel |  
        self.vdi_set_capture_frame(Frame(Position(0x0050,0x0019),Position(0x0550,0x0109)))        
                
        self.vdi_stop_capturing()
     
        self.sbi_select_device(0x00ba)
        self.sbi_write(0x007f,0x0000) # Luminance processing control #1
        
        deviceID,version=self.video_decoder_get_device_id()
        
        self.sbi_select_device(0x00a0)
        c=self.sbi_read(0x003c)
        
        self.sbi_select_device(0x00ba)
        
        self.gpio_write_directions(0,dc1120.PORT0_MASK,0xe8) 
        self.gpio_write_directions(1,dc1120.PORT1_MASK,0x83) 
        
        self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x60)
        self.gpio_write_outputs(1,dc1120.PORT1_MASK,0x02)
        
        self.ctrl_tx(0x0005,0x0000) # Unknown register R004+1
        self.ctrl_tx(0x0007,0x0002) # Unknown register R004+3
        
        self.ctrl_tx(0x000d,0x0000) # Remote Wakeup Polarity, GPIO[8:9] : 
        self.ctrl_tx(0x000f,0x0002) # Remote Wakeup Control,  GPIO[8:9] : Enables USB remote wakeup for corresponding GPIO 
        
        self.vdi_disable_vbi()  # DCTRL+3 : 0x00 VBI mod disabled
        
        self.tg_set_timing_generator()
        self.tg_set_pll()
        self.sbi_set_clock_devider()
        
        self.vdi_set_capture_frame(Frame(Position(0x0050,0x0019),Position(0x0550,0x0109))) 
    
        self.vdi_stop_capturing()
    
        self.sbi_write(0x0008,0x0008) # Luminance processing control #2
        self.video_decoder_set_video_standard(0x0004)
        self.sbi_write(0x0030,0x0000) # 656 revision select (TVP5150AM1 only)
        self.sbi_write(0x000f,0x000a) # Configuration shared pins
        
        self.ai_init()
        
        self.vdi_stop_capturing()
        self.set_register_bit(dc1120.GCTRL,3) # GCTRL[3] : GPIO[3]
        
        self.sbi_write(0x0000,0x0000)
        self.sbi_write(0x0003,0x006f)
             
        self.vdi_stop_capturing()
     
        self.audio_codec_get_MX(ac97.CD_VOL)
        self.audio_codec_set_MX(ac97.CD_VOL,0x8808)  # CD Volume 0x8808 : CD Volume mute, left 8, right 8
        self.audio_codec_get_MX(ac97.MIC_VOL)
        self.audio_codec_set_MX(ac97.MIC_VOL,0x8008)  # Mic Volume 0x8008 : Mic Volume mute, left 0 (=Mono), right 8
        self.audio_codec_get_MX(ac97.AUX_VOL)
        self.audio_codec_set_MX(ac97.AUX_VOL,0x8808)  # Aux Volume - 0x8808 : Aux Volume mute, left 8, right 8
        self.audio_codec_get_MX(ac97.LINE_IN_VOL)
        self.audio_codec_set_MX(ac97.LINE_IN_VOL,0x0808)  # Line In Volume - 0x0808: Line In Volume unmute, left 8, right 8
        self.audio_codec_set_MX(0x1a,0x0404)  # Record Select 0x0404 :  Line Input Left + Line Input Right
        self.audio_codec_set_MX(0x1c,0x0000)  # Record Gain 0x0000 : No mute, no amplification 

    def set_operating_mode(self,operatingMode):
        """Set operating mode.."""
        if operatingMode == TV :
            print("Setting operating mode: TV")
            print("  Tuner frequency: {f:.2f} MHz".format(f=self.tvTunerFrequency))
            print("  Video standard:",list_video_standards[self.vdVideoStandardTv])
            print("  Capture frame:",self.vdCaptureFrameTv)

            self.audio_select_source(AUDIO_SOURCE_TV_TUNER)
            self.set_tv_tuner(self.tvTunerFrequency)
            self.video_select_source(VIDEO_SOURCE_TV)
            
            self.audioSource=AUDIO_SOURCE_TV_TUNER
            self.videoSource=VIDEO_SOURCE_TV

        if operatingMode == CVBS :
            print("Setting operating mode: CVBS")
            print("  Video standard:",list_video_standards[self.vdVideoStandardComposite])
            print("  Capture frame:",self.vdCaptureFrameComposite)
            
            self.audio_select_source(AUDIO_SOURCE_AUX)
            self.video_select_source(VIDEO_SOURCE_COMPOSITE)

            self.audioSource=AUDIO_SOURCE_AUX
            self.videoSource=VIDEO_SOURCE_COMPOSITE
            
        if operatingMode == S_VIDEO :
            print("Setting operating mode: S-Video")
            print("  Video standard:",list_video_standards[self.vdVideoStandardSVideo])
            print("  Capture frame:",self.vdCaptureFrameSVideo)
            
            self.audio_select_source(AUDIO_SOURCE_AUX)
            self.video_select_source(VIDEO_SOURCE_S_VIDEO)
            
            self.audioSource=AUDIO_SOURCE_AUX
            self.videoSource=VIDEO_SOURCE_S_VIDEO
        
        self.operatingMode=operatingMode    
        print("Operation mode is set:",self.operatingMode)

    def video_select_source(self,videoSource):
        """Select video source."""
        if videoSource == VIDEO_SOURCE_TV :
            self.sbi_select_device(0x00ba) 
            c = self.sbi_read(0x0088)  # Status register 1

            self.sbi_select_device(0x00ba) 

            self.gpio_write_directions(0,dc1120.PORT0_MASK,0xe8)
            self.gpio_write_directions(1,dc1120.PORT1_MASK,0x83)
            self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x60)
            self.gpio_write_outputs(1,dc1120.PORT1_MASK,0x02)
                
            self.ctrl_tx(0x0005,0x0000)
            self.ctrl_tx(0x0007,0x0002)
            
            self.ctrl_tx(0x000d,0x0000)
            self.ctrl_tx(0x000f,0x0002)
                
            self.vdi_disable_vbi() # VBI disable
                
            self.tg_set_timing_generator()
            self.tg_set_pll() 
            self.sbi_set_clock_devider() 

            self.vdi_set_capture_frame(self.vdCaptureFrameTv)
            self.vdi_start_capturing()    

            self.sbi_write(0x0008,0x0008) # Luminance processing control #2
            self.video_decoder_set_video_standard(0x0004) # Video Standard
            self.sbi_write(0x0030,0x0000) # 656 revision select
            self.sbi_write(0x000f,0x000a) # Configuration shared pins

            self.vdi_stop_capturing()
            self.vdi_disable_vbi()  # VBI disable
            self.vdi_start_capturing()
    
            self.vdi_stop_capturing()    
            self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x6c) # set GPIO3    
            self.sbi_write(0x0000,0x0000) # Video input source selection #1 :  Input A
            self.sbi_write(0x0003,0x006f) # Miscellaneous controls
            self.vdi_start_capturing()

            self.vdi_stop_capturing()
            self.vdi_set_capture_frame(self.vdCaptureFrameTv)
            self.vdi_start_capturing()
            
            self.gpio_write_directions(0,dc1120.PORT0_MASK,0x78)
            
            self.vdi_stop_capturing()
            self.vdi_start_capturing()
    
        if videoSource == VIDEO_SOURCE_COMPOSITE :
            self.sbi_select_device(0x00ba)
 
            self.gpio_write_directions(0,dc1120.PORT0_MASK,0xe8)
            self.gpio_write_directions(1,dc1120.PORT1_MASK,0x83)
            self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x60)
            self.gpio_write_outputs(1,dc1120.PORT1_MASK,0x02)
            
            self.ctrl_tx(0x0005,0x0000)
            self.ctrl_tx(0x0007,0x0002)
            
            self.ctrl_tx(0x000d,0x0000)
            self.ctrl_tx(0x000f,0x0002)

            self.vdi_disable_vbi()

            self.tg_set_timing_generator()
            self.tg_set_pll()    
            self.sbi_set_clock_devider()
                                
            self.vdi_set_capture_frame(self.vdCaptureFrameComposite)
            self.vdi_start_capturing()
            
            self.sbi_write(0x0008,0x0008)  # Luminance processing control #2
            self.video_decoder_set_video_standard(0x0004)  # Video Standand
            self.sbi_write(0x0030,0x0000)  # 656 revision select 
            self.sbi_write(0x000f,0x000a)  # Configuration shared pins

            self.vdi_stop_capturing()
            self.vdi_disable_vbi()  # VBI disable
            self.vdi_start_capturing()
                
            self.vdi_stop_capturing()
            self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x6c)  # Set GPIO3 bit     
            self.sbi_write(0x0000,0x0002)  # Video input source selection : Analog Input B
            self.sbi_write(0x0003,0x006f)  # Miscellaneous controls
            self.vdi_start_capturing()

            self.vdi_stop_capturing()
            self.vdi_set_capture_frame(self.vdCaptureFrameComposite)
            self.vdi_start_capturing()
                
            self.gpio_write_directions(0,dc1120.PORT0_MASK,0x78)
            
            self.vdi_stop_capturing()
            self.vdi_start_capturing()
                
        if videoSource == VIDEO_SOURCE_S_VIDEO :
            self.sbi_select_device(0x00ba)
    
            self.gpio_write_directions(0,dc1120.PORT0_MASK,0xe8)
            self.gpio_write_directions(1,dc1120.PORT1_MASK,0x83)
            self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x60)
            self.gpio_write_outputs(1,dc1120.PORT1_MASK,0x02)

            self.ctrl_tx(0x000d,0x0000)
            self.ctrl_tx(0x000f,0x0002)
            self.vdi_disable_vbi()

            self.tg_set_timing_generator()
            self.tg_set_pll()
            self.sbi_set_clock_devider()
            
            self.vdi_set_capture_frame(self.vdCaptureFrameSVideo)
            self.vdi_start_capturing()
                    
            self.sbi_write(0x0008,0x0008)  # Luminance processing control #2
            self.video_decoder_set_video_standard(0x0004)  # Video Standand
            self.sbi_write(0x0030,0x0000)  # 656 revision select 
            self.sbi_write(0x000f,0x000a)  # Configuration shared pins

            self.vdi_stop_capturing()
            self.vdi_disable_vbi()  # VBI disable
            self.vdi_start_capturing()

            self.vdi_stop_capturing()
            self.gpio_write_outputs(0,dc1120.PORT0_MASK,0x64) # Clear GPIO3 bit
            self.sbi_write(0x0000,0x0001)  # Video input source selection :  Analog Input A + B
            self.sbi_write(0x0003,0x002f)  # Miscellaneous controls
            self.vdi_start_capturing()

            self.vdi_stop_capturing()
            self.vdi_set_capture_frame(self.vdCaptureFrameSVideo)
            self.vdi_start_capturing()
            
            self.gpio_write_directions(0,dc1120.PORT0_MASK,0x78)
            
            self.vdi_stop_capturing()
            self.vdi_start_capturing()             
    
    def tv_tuner_select_band(self,frequencyMHz):
        """Return band select byte.
        M036 device has a LG Innotek TALN - M205T tuner which can receive 40 - 900 MHz signal.
        Bands and band select bytes are:
        Band                 BB
        -------------------  ----
          [40.0, ..., 45.0]  0x00
         (45.0, ..., 142.0]  0x01
        (142.0, ..., 147.0]  0x00
        (147.0, ..., 425.0]  0x02
        (425.0, ..., 431.0]  0x00
        (431.0, ..., 900.0]  0x08
        """
        bb=0x00
        if frequencyMHz>45.0 and frequencyMHz <= 142.0 :
            bb=0x01
        if frequencyMHz>147.0 and frequencyMHz <= 425.0 :
            bb=0x02
        if frequencyMHz>431.0 and frequencyMHz <= 900.0 :
            bb=0x08
        return bb
    
    def tv_tuner_set_frequency(self,frequencyMHz):
        """Set TV tuner frequency."""
        VFRQ=int(16*frequencyMHz)+622
        DB2=VFRQ&0x00FF
        DB1=(VFRQ>>8)&0x00FF
        # print("VFRQ_H,VFRQ_L: 0x{h:02x} 0x{l:02x}".format(h=DB1,l=DB2)) 
        CB=0x8e
        BB=self.tv_tuner_select_band(frequencyMHz)
        self.sbi_select_device(0xc2) 
        self.sbi_write(DB1,DB2)
        self.sbi_write(CB,BB)
        
    def set_tv_tuner(self,frequencyMHz): 
        """Set TV tuner."""
        self.tv_tuner_set_frequency(frequencyMHz)
        time.sleep(0.5)
        self.sbi_select_device(0x00ba) # TVP5150AM1 Chip
        status1=self.video_decoder_status(1)
        print("Video decoder status 1: 0x{s:02x} {b}".format(s=status1,b=utils.byte2bits(status1)))

        self.vdVerticalSyncLocked=utils.get_bit(status1,2)
        self.vdHorizontalSyncLocked=utils.get_bit(status1,1)
        
        if self.vdVerticalSyncLocked and self.vdHorizontalSyncLocked :
            self.vdVideoDetected=True
        else :
            self.vdVideoDetected=False

        self.sbi_select_device(0x0086)
        self.sbi_write(0x0000,0x00d6)
        self.sbi_write(0x0001,0x0070)
        self.sbi_write(0x0002,0x0049)
        
        self.tvTunerFrequency=frequencyMHz
        return True
    
#   ====================================    
#   Audio interface functions  
#   0x0500 Audio Control Register 0
#            CMD [31:16] - Command data
#            AD [15:8]   - Audio data
#            [7:0]
#     0x8b : 1 0 0 0 1 0 1 1
#            AC [7]   - 1 Enable AC97
#            HRST [3] - 1 AC97 operetion
#            CR [1]   - 1 Command read phase
#            DIR [0]  - 1 Input
#     0x8c : 1 0 0 0 1 1 0 0
#            AC [7]   - 1 Enable AC97
#            HRST [3] - 1 AC97 operetion
#            CW [2]   - 1 Command write phase
#            DIR [0]  - 0 Output
#     0x94 : 1 0 0 1 0 1 0 0
#            AC [7]   - 1 Enable AC97
#            RS [4]   - 1 Reset AC97 interface
#            CW [2]   - 1 Command write phase
#            DIR [0]  - 0 Output
#
#  0x0504 Audio Control Register 1
#            CMA [6:0] - Command adress

    def ai_init(self):
        """Initialize the audio interface."""
        self.ctrl_tx(0x0500,0x0094) # AC97CTL_0   : 0x94  Enable AC97  + Reset AC97 + Hardware Reset AC97 + Control write phase
        self.ctrl_tx(0x0500,0x008c) # AC97CTL_0   : 0x8c  Enable AC97 interface + AC97 operation + Control write phase
        self.ctrl_tx(0x0506,0x0001) # AC97CTL_1+2 : 0x01 16 Bit Audio
        self.ctrl_tx(0x0507,0x0000)

    def ai_write(self,cma,cmd):
        """Write audio command data to command address."""
        self.ctrl_tx(0x0504,cma)
        cmd_L=cmd&0x00FF
        cmd_H=(cmd>>8)&0x00FF
        self.ctrl_tx(0x0502,cmd_L)
        self.ctrl_tx(0x0503,cmd_H)
        time.sleep(0.01)
        self.ctrl_tx(0x0500,0x008c)

    def ai_read(self,cma):
        """Read audio command data from command address."""
        self.ctrl_tx(0x0504,cma)
        self.ctrl_tx(0x0500,0x008b)
        time.sleep(0.01)
        cmd_L=self.ctrl_rx(0x0502)
        cmd_H=self.ctrl_rx(0x0503)           
        cmd=(cmd_H<<8)|cmd_L
        return cmd

#   ====================================    
#   Audio functions 
#

    def audio_codec_get_MX(self,mx):
        """Return audio mixer data."""
        value=self.ai_read(mx)
        return value
    def audio_codec_set_MX(self,mx,value):
        """Write audio mixer data."""
        self.ai_write(mx,value)
        
    def audio_mute(self):
        """Mute audio."""
        rg=self.ai_read(ac97.RECORD_GAIN)
        rg=utils.set_bit(rg,15)
        self.ai_write(ac97.RECORD_GAIN,rg)
        rg=self.ai_read(ac97.RECORD_GAIN)
        
    def audio_unmute(self):
        """Unmute audio."""
        rg=self.ai_read(ac97.RECORD_GAIN)
        rg=utils.clear_bit(rg,15)
        self.ai_write(ac97.RECORD_GAIN,rg)
        rg=self.ai_read(ac97.RECORD_GAIN)
        
    def audio_get_gain(self):
        """Get audio amplification gain."""
        rg=self.ai_read(ac97.RECORD_GAIN)
        rgR=rg&0x000F
        rgL=(rg>>8)&0x000F
        return int(round((rgL+rgR)/2))
    
    def audio_set_volume(self,vol):
        """Set audio amplification gain."""
        if vol > 15 :
            vol=15
        if vol < 0 :
            vol=0
        rgL=vol
        rgR=vol
        rg=(rgL<<8)|rgR
        self.ai_write(ac97.RECORD_GAIN,rg)
        print("Volume: {}".format(vol))
    
    def audio_set_volume_LR(self,volL,volR):
        """Set stereo audio volume separately."""
        if volL > 15 :
            volL=15
        if volL < 0 :
            volL=0
        if volR > 15 :
            volR=15
        if volR < 0 :
            volR=0  
        rgL=volL
        rgR=volR
        rg=(rgL<<8)|rgR
        self.ai_write(ac97.RECORD_GAIN,rg)
        print("Volume: {l} L {r} R".format(l=volL,r=volR)) 
        
    def audio_mute_mixer_channel(self,channel):
        """Mute a mixer channel."""
        mx=self.audio_codec_get_MX(channel)
        mx=utils.set_bit(mx,15)
        self.audio_codec_set_MX(self,channel,mx)
        print("Mixer 0x{m:02x}: {b}".format(m=mx,b=utils.word2bits(mx)))
        
    def audio_unmute_mixer_channel(self,channel):
        """Unmute a mixer channel."""
        mx=self.audio_codec_get_MX(channel)
        mx=utils.clear_bit(mx,15)
        self.audio_codec_set_MX(channel,mx)
        print("Mixer 0x{m:02x}: {b}".format(m=mx,b=utils.word2bits(mx)))
        
    def audio_select_source(self,audioSource):
        """Select audio source."""
        print("Audio source:",audioSource)
        if audioSource == AUDIO_SOURCE_AUX :
            self.ai_write(ac97.RECORD_SELECT,0x0101)
            self.audio_unmute_mixer_channel(ac97.CD_VOL)
        
        if audioSource == AUDIO_SOURCE_RADIO_TUNER :
            self.ai_write(ac97.RECORD_SELECT,0x0303)
            self.audio_unmute_mixer_channel(ac97.AUX_VOL)
        
        if audioSource == AUDIO_SOURCE_TV_TUNER :
            self.ai_write(ac97.RECORD_SELECT,0x0404)
            self.audio_unmute_mixer_channel(ac97.LINE_IN_VOL)
        
        self.audio_unmute_mixer_channel(ac97.MASTER_VOL)
        self.audio_set_volume(0x04)
        self.print_audio_codec_registers()

    def print_audio_codec_registers(self):
        """Print audio codec registers."""
        print("Audio codec registers:")
        print("(0x{r:02x})  Master volume: 0x{v:04x}  {v:016b}".format(r=ac97.MASTER_VOL,v=self.audio_codec_get_MX(ac97.MASTER_VOL)))
        print("(0x{r:02x})     Mic volume: 0x{v:04x}  {v:016b}".format(r=ac97.MIC_VOL,v=self.audio_codec_get_MX(ac97.MIC_VOL)))
        print("(0x{r:02x}) Line-in volume: 0x{v:04x}  {v:016b}".format(r=ac97.LINE_IN_VOL,v=self.audio_codec_get_MX(ac97.LINE_IN_VOL)))   
        print("(0x{r:02x})      CD volume: 0x{v:04x}  {v:016b}".format(r=ac97.CD_VOL,v=self.audio_codec_get_MX(ac97.CD_VOL)))
        print("(0x{r:02x})     Aux volume: 0x{v:04x}  {v:016b}".format(r=ac97.AUX_VOL,v=self.audio_codec_get_MX(ac97.AUX_VOL)))
        print("(0x{r:02x})  Record select: 0x{v:04x}  {v:016b}".format(r=ac97.RECORD_SELECT,v=self.audio_codec_get_MX(ac97.RECORD_SELECT)))
        print("(0x{r:02x})    Record gain: 0x{v:04x}  {v:016b}".format(r=ac97.RECORD_GAIN,v=self.audio_codec_get_MX(ac97.RECORD_GAIN)))
        selectedInput=self.audio_codec_get_MX(ac97.RECORD_SELECT)
        selectedInput=selectedInput&0x00FF
        if selectedInput==0x01:
            print("Selected input channel: CD input")
        if selectedInput==0x03:
            print("Selected input channel: Aux input")
        if selectedInput==0x04:
            print("Selected input channel: Line input")



class I2C(object):
    """Main controller (Syntek DC1120) of the device communicate with the FM stereo radio chip TEA5767 over I2C bus.
       I2C protocol is implemented by using GPIO pins.
       Sending n byte: 
         start()
         byte_tx(addr)
         receive_ack()
         byte_tx(byte_0))
         receive_ack()
             .
             .
             .
         byte_tx(byte_(n-1))
         receive_ack_p_tx()
         stop()
        
      Receiving n byte:  
         start()
         byte_tx(addr)
         receive_ack_p_rx()
         byte_0=byte_rx()
         send_ack()
             .       
             .
             .
         byte_(n-1)=byte_rx()
         send_ack_p() 
         stop()  
    """
    
    def __init__(self, m036):
        self.m036=m036
    
    def start(self):
        """Start I2C communication."""
        self.m036.gpio_dir_set(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SCL)
        self.m036.gpio_clear(dc1120.I2C_SDA)
        self.m036.gpio_clear(dc1120.I2C_SCL)
        self.m036.gpio_clear(dc1120.I2C_SCL)
        self.m036.gpio_dir_set(dc1120.I2C_SDA)

            
    def bit_tx(self,b):
        """Transmit a bit."""
        if b :
            self.m036.gpio_set(dc1120.I2C_SDA)
        else:
            self.m036.gpio_clear(dc1120.I2C_SDA)   
        self.m036.gpio_set(dc1120.I2C_SCL)
        self.m036.gpio_clear(dc1120.I2C_SCL)

    def byte_tx(self,byte):
        """Transmit a byte."""
        for x in range(7,-1,-1):
            b=utils.get_bit(byte,x)
            self.bit_tx(b)

    def receive_ack(self):
        """Receive acknowledgement from slave."""
        self.m036.gpio_dir_clear(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SCL)
        ack=self.m036.gpio_get(dc1120.I2C_SDA)
        self.m036.gpio_clear(dc1120.I2C_SCL)
        self.m036.gpio_clear(dc1120.I2C_SCL)
        self.m036.gpio_dir_set(dc1120.I2C_SDA)
        return ack

    def receive_ack_p_tx(self):
        """Receive acknowledgement from slave in TX mode (before stop)."""
        self.m036.gpio_dir_clear(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SCL)
        ack=self.m036.gpio_get(dc1120.I2C_SDA)
        self.m036.gpio_clear(dc1120.I2C_SCL)
        self.m036.gpio_dir_set(dc1120.I2C_SDA)
        return ack

    def receive_ack_p_rx(self):
        """Receive acknowledgement from slave in RX mode (before switching to receiving phase)."""
        self.m036.gpio_dir_clear(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SCL)
        ack=self.m036.gpio_get(dc1120.I2C_SDA)
        self.m036.gpio_clear(dc1120.I2C_SCL)
        self.m036.gpio_set(dc1120.I2C_SDA)
        self.m036.gpio_dir_clear(dc1120.I2C_SDA)
        
    def bit_rx(self):
        """Receive a bit."""
        self.m036.gpio_dir_clear(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SCL)
        b=self.m036.gpio_get(dc1120.I2C_SDA)
        self.m036.gpio_clear(dc1120.I2C_SCL)
        return b

    def byte_rx(self):
        """Receive a byte."""
        byte=0x00
        for x in range(7,-1,-1):
            b=self.bit_rx()
            if b == 1 :
                byte=utils.set_bit(byte,x)
        return byte 

    def send_ack(self):
        """Send acknowledgement to slave."""
        self.m036.gpio_dir_set(dc1120.I2C_SDA)
        self.m036.gpio_clear(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SCL)
        self.m036.gpio_clear(dc1120.I2C_SCL)
        self.m036.gpio_set(dc1120.I2C_SDA)
        self.m036.gpio_dir_clear(dc1120.I2C_SDA)
        
    def send_ack_p(self):
        """Send acknowledgement to slave (before stop)."""
        self.m036.gpio_dir_set(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SCL)
        self.m036.gpio_clear(dc1120.I2C_SCL)
        self.m036.gpio_dir_set(dc1120.I2C_SDA)
   
    def stop(self): 
        """Stop I2C communication."""
        self.m036.gpio_clear(dc1120.I2C_SDA)
        self.m036.gpio_set(dc1120.I2C_SCL)
        self.m036.gpio_set(dc1120.I2C_SDA)
 
       

class TEA5767(object):
    def __init__(self, i2c):
        self.i2c=i2c
    #-------------------------------
    # Write mode register values 
    #-------------------------------
    # First register
    MUTE = 0x80         # Mutes output 
    SM = 0x40           # Activates station search  
    # Third register
    SUD = 0x80          # Station search from bottom to up
    SL_MASK = 0x60
    SL_H = 0x60         # Searches with ADC output = 10
    SL_M = 0x40         # Searches with ADC output = 7
    SL_L = 0x20         # Searches with ADC output = 5
    HLSI = 0x10         # If on, div=4*(Frf+Fif)/Fref otherwise, div=4*(Frf-Fif)/Freq)
    MS= 0x08            # Disable stereo 
    MR = 0x04           # Disable right channel and turns to mono 
    ML = 0x02           # Disable left channel and turns to mono
    SWP1 = 0x01         # 
    # Fourth register 
    SWP2 = 0x80         #
    STDBY = 0x40        # Chips stops working. Only I2C bus remains on
    BL = 0x20           # Japan freq 76-108 MHz . If disabled, 87.5-108 MHz
    XTAL = 0x10         # Selected means 32.768 KHz freq as reference. Otherwise Xtal at 13 MHz 
    SMUTE = 0x08        # Cuts weak signals
    HCC = 0x04          # Activates high cut control
    SNC = 0x02          # Activates stereo noise control
    SI = 0x01           # If activate PORT 1 indicates SEARCH or else it is used as PORT1 */    
    # Fifth register
    PLLREF =  0x80      # By activating, it will use Xtal at 13 MHz as reference for divider
    DTC = 0X40          # By activating, deemphasis=75us, or else, deemphasis of 50us 
    #-------------------------------
    # Read mode register values 
    #-------------------------------
    # First register 
    READY_FLAG_MASK = 0x80  # Tuning completed or BL reached / Busy
    BAND_LIMIT_MASK = 0X40  # Band limit reached / not reached
    PLL_H_MASK = 0X3F       # Bits 0-5 for divider MSB after search or preset 
    # Second register 
    PLL_L_MASK = 0XFF       # Bits 0-7 for divider LSB after search or preset 
    # Third register
    STEREO_MASK = 0x80      # Stereo reception / Mono reception
    IF_CNTR_MASK = 0x7f     # IF counter result 
    # Fourth register 
    ADC_LEVEL_MASK = 0xf0   # Level ADC output
    CHIP_ID_MASK = 0x0f     # Should be 0 
    # Fifth register 
    RESERVED_MASK = 0xff    # Reserved 
    #-------------------------------
    read_registers=[0,0,0,0,0]
    write_registers=[0,0,0,0,0]
    #-------------------------------
    
    def read(self):
        """Get read registers of the stereo FM radio chip TEA5767."""
        self.i2c.start()
        self.i2c.byte_tx(0xc1)
        self.i2c.receive_ack_p_rx()
        self.read_registers[0]=self.i2c.byte_rx()
        self.i2c.send_ack()
        self.read_registers[1]=self.i2c.byte_rx()
        self.i2c.send_ack()
        self.read_registers[2]=self.i2c.byte_rx()
        self.i2c.send_ack()
        self.read_registers[3]=self.i2c.byte_rx()
        self.i2c.send_ack()
        self.read_registers[4]=self.i2c.byte_rx()
        self.i2c.send_ack_p() 
        self.i2c.stop() 
    
    def write(self):
        """Send write registers of the stereo FM radio chip TEA5767."""
        self.i2c.start()
        self.i2c.byte_tx(0xc0)
        self.i2c.receive_ack()
        self.i2c.byte_tx(self.write_registers[0])
        self.i2c.receive_ack()
        self.i2c.byte_tx(self.write_registers[1])
        self.i2c.receive_ack()
        self.i2c.byte_tx(self.write_registers[2])
        self.i2c.receive_ack()
        self.i2c.byte_tx(self.write_registers[3])
        self.i2c.receive_ack()
        self.i2c.byte_tx(self.write_registers[4])
        self.i2c.receive_ack_p_tx()
        self.i2c.stop()
        self.read()
        
    def set_frequency(self,frequencyMHz):
        """Set radio tuner frequency."""
        print("Frequency %.2f MHz" % frequencyMHz)
        wPLL = round((frequencyMHz*1000.0-225.0)*4.0/50.0)
        PLL_L = wPLL & 0x00FF
        PLL_H = (wPLL >> 8) & 0x003F   
        self.write_registers[0]=(self.write_registers[0]&~self.PLL_H_MASK)|PLL_H
        self.write_registers[1]=PLL_L
        self.write()
        
    def get_signal_level(self):
        """Get ADC output level of the stereo FM radio chip TEA5767."""
        self.read()
        ADC_Level=(self.read_registers[3]&self.ADC_LEVEL_MASK)>>4
        print("ADC level: {adc}".format(adc=ADC_Level))
        return ADC_Level

    def SNC_on(self):
        """Turn on Stereo Noise Cancelling."""
        self.write_registers[3]=utils.set_bit(self.write_registers[3],1)
        self.write() 
    
    def SNC_off(self):
        """Turn off Stereo Noise Cancelling."""
        self.write_registers[3]=utils.clear_bit(self.write_registers[3],1)
        self.write()  

    def HCC_on(self):
        """Turn on High Cut Control."""
        self.write_registers[3]=utils.set_bit(self.write_registers[3],2)
        self.write() 
    
    def HCC_off(self):
        """Turn off High Cut Control."""
        self.write_registers[3]=utils.clear_bit(self.write_registers[3],2)
        self.write() 
    
    def soft_mute_on(self):
        """Turn on Soft Mute."""
        self.write_registers[3]=utils.set_bit(self.write_registers[3],3)
        self.write() 
    
    def soft_mute_off(self):
        """Turn off Soft Mute."""
        self.write_registers[3]=utils.clear_bit(self.write_registers[3],3)
        self.write()  

    def DTC_on(self):
        """Set Deemphasis Time Constant 75us."""
        self.write_registers[4]=utils.set_bit(self.write_registers[4],6)
        self.write() 
    
    def DTC_off(self):
        """Set Deemphasis Time Constant 50us."""
        self.write_registers[4]=utils.clear_bit(self.write_registers[4],6)
        self.write() 

    def print_read_registers(self): 
        """Print TEA5767 read registers."""
        self.read()
        print("TEA5767 read registers: ","{b4}  {b3}  {b2}  {b1}  {b0}".format(
            b0=utils.byte2bits(self.read_registers[0]),
            b1=utils.byte2bits(self.read_registers[1]),
            b2=utils.byte2bits(self.read_registers[2]),
            b3=utils.byte2bits(self.read_registers[3]),
            b4=utils.byte2bits(self.read_registers[4])))
        
    def print_write_registers(self):
        """Print TEA5767 write registers."""
        print("TEA5767 write registers:","{b4}  {b3}  {b2}  {b1}  {b0}".format(
            b0=utils.byte2bits(self.write_registers[0]),
            b1=utils.byte2bits(self.write_registers[1]),
            b2=utils.byte2bits(self.write_registers[2]),
            b3=utils.byte2bits(self.write_registers[3]),
            b4=utils.byte2bits(self.write_registers[4])))
