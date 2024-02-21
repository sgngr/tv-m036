/*
==================================================
A TV app for the AVerMedia AVerTV USB2.0 Plus
Testing the from USB capture files generated codes
==================================================
Version:    0.1
Author:     Sinan Güngör
License:    GPL v2
*/

//
//  Bit operations
//

uint8_t set_bit(uint8_t value, uint8_t bit){
    return value | (1<<bit) ;
}

uint8_t clear_bit (uint8_t value, uint8_t bit){
    return value & ~(1<<bit);
}

uint8_t read_bit (uint8_t value, uint8_t bit){
    return (value >> bit) & 0x1 ;
}

//
//  USB control functions
//

void ctrl_tx(int index, uint16_t value) {
   int r;
   r = libusb_control_transfer(devh,0x40,1,value,index,buf,0,1000);
}

unsigned char ctrl_rx(int index){
    int r;
    r = libusb_control_transfer(devh,0xc0,0,0,index,buf,1,1000);
    return buf[0];
}

//
//  DC1120 functions
//

// DC1120 Registers
// =================================
#define DC1120_GCTRL 0x000
#define DC1120_0x004 0x004
#define DC1120_RMCTL 0x00C
#define DC1120_POSVA 0x010
#define DC1120_PLLSO 0x018
#define DC1120_PLLFD 0x01C

#define DC1120_DCTRL 0x100
#define DC1120_0x104 0x104

// Capture Frame Start Position 
#define DC1120_CFSPO 0x110
#define DC1120_CFSPO_STX_L 0x110
#define DC1120_CFSPO_STX_H 0x111
#define DC1120_CFSPO_STY_L 0x112
#define DC1120_CFSPO_STY_H 0x113

// Capture Frame End Position
#define DC1120_CFEPO 0x114
#define DC1120_CFEPO_ENX_L 0x114
#define DC1120_CFEPO_ENX_H 0x115
#define DC1120_CFEPO_ENY_L 0x116
#define DC1120_CFEPO_ENY_H 0x117

#define DC1120_TCTRL 0x120

#define DC1120_SICTL 0x200
#define DC1120_SBUSW 0x204
#define DC1120_SBUSR 0x208
#define DC1120_SCSI  0x20C
#define DC1120_GSBWP 0x210
#define DC1120_GSBRP 0x214
#define DC1120_AIC   0x2FC

#define DC1120_TIGEN 0x300
#define DC1120_TICTL 0x350

#define DC1120_AC97CTL_0 0x500
#define DC1120_AC97CTL_1 0x504
#define DC1120_I2SCTL    0x50C
#define DC1120_EEPROM_SZ 0x5F0

// GPIO Pins
#define  I2C_SCL    0x04
#define  I2C_SDA    0x08

// GPIO Masks
#define ROMD_MASK   0x80
#define PORT0_MASK  0xFF
#define PORT1_MASK  0x03

//  Video decoder interface functions

void vdi_start_capturing(){
    uint8_t c;
    c = ctrl_rx(DC1120_DCTRL);
    c = set_bit(c,7);
    ctrl_tx(DC1120_DCTRL,c);
}

void vdi_stop_capturing(){
    uint8_t c;
    c = ctrl_rx(DC1120_DCTRL);
    c = clear_bit(c,7);
    ctrl_tx(DC1120_DCTRL,c);
}

void vdi_get_capture_start(int *startX, int *startY){
    uint8_t xL, xH, yL, yH;
    xL=ctrl_rx(DC1120_CFSPO_STX_L);
    xH=ctrl_rx(DC1120_CFSPO_STX_H);
    *startX=(int)(xH*256+xL);
    yL=ctrl_rx(DC1120_CFSPO_STY_L);
    yH=ctrl_rx(DC1120_CFSPO_STY_H);
    *startY=(int)(yH*256+yL);
}

void vdi_get_capture_end(int *endX, int *endY){
    uint8_t xL, xH, yL, yH;
    xL=ctrl_rx(DC1120_CFEPO_ENX_L);
    xH=ctrl_rx(DC1120_CFEPO_ENX_H);
    *endX=(int)(xH*256+xL);
    yL=ctrl_rx(DC1120_CFEPO_ENY_L);
    yH=ctrl_rx(DC1120_CFEPO_ENY_H);
    *endY=(int)(yH*256+yL);
}

void vdi_set_capture_start(int startX, int startY){
    uint8_t xL, xH, yL, yH;
    xL=startX&0x00FF;
    xH=(startX&0xFF00)>>8;
    ctrl_tx(DC1120_CFSPO_STX_L,xL);
    ctrl_tx(DC1120_CFSPO_STX_H,xH);
    yL=startY&0x00FF;
    yH=(startY&0xFF00)>>8;
    ctrl_tx(DC1120_CFSPO_STY_L,yL);
    ctrl_tx(DC1120_CFSPO_STY_H,yH);
}

void vdi_set_capture_end(int endX, int endY){
    uint8_t xL, xH, yL, yH;
    xL=endX&0x00FF;
    xH=(endX&0xFF00)>>8;
    ctrl_tx(DC1120_CFEPO_ENX_L,xL);
    ctrl_tx(DC1120_CFEPO_ENX_H,xH);
    yL=endY&0x00FF;
    yH=(endY&0xFF00)>>8;
    ctrl_tx(DC1120_CFEPO_ENY_L,yL);
    ctrl_tx(DC1120_CFEPO_ENY_H,yH) ;  
}

//  Serial bus interface functions

void sbi_select_device(uint16_t sda){
    ctrl_tx(DC1120_SICTL+3,sda);
}

bool sbi_read_finish(uint16_t max_try){
    char c;
    uint16_t q;
    c = ctrl_rx(DC1120_SICTL+1);
    q=1;
    while (c != 0x01){
        c = ctrl_rx(DC1120_SICTL+1);
        q+=1;
        if (q == max_try) {
            fprintf(stderr, "sbi_read_finish: Serial bus interface can not read!");
            return false;
        }
    }
    return true ;
}

char sbi_read(uint16_t ra){
    ctrl_tx(DC1120_SBUSR,ra);
    ctrl_tx(DC1120_SICTL,0x0020);  // Read now
    bool rf;
    rf = sbi_read_finish(1000);
    char rd;
    if (rf == true)  
        rd=ctrl_rx(DC1120_SBUSR+1);
    else
        rd = 0x00;
    return rd ;
}   

bool sbi_write_finish(uint16_t max_try){
    char c;
    uint16_t q;
    c = ctrl_rx(DC1120_SICTL+1);
    q=1;
    while (c != 0x04){
        c = ctrl_rx(DC1120_SICTL+1);
        q+=1;
        if (q == max_try) {
            fprintf(stderr, "sbi_read_finish: Serial bus interface can not read!");
            return false;
        }
    }
    return true ;
}

void sbi_write_0(uint16_t wa,uint16_t wd){
    ctrl_tx(DC1120_SBUSW,wa);
    ctrl_tx(DC1120_SBUSW+1,wd);
    ctrl_tx(DC1120_SICTL,0x0001);  // Access Immediately
    bool wf;
    wf = sbi_write_finish(1000);
} 

void sbi_write(uint16_t wa,uint16_t wd){
    ctrl_tx(DC1120_SBUSW,wa);
    ctrl_tx(DC1120_SBUSW+1,wd);
    ctrl_tx(DC1120_SICTL,0x0005);  // Retry Write on Failed ACK + Access Immediately
    bool wf;
    wf = sbi_write_finish(1000);
}  

void print_dc1120_registers(){
    int r;
    uint8_t rval;
    fprintf(stderr, "\nDC1120 Registers");
    fprintf(stderr, "\n=================================\n");
    r=DC1120_GCTRL;   rval=ctrl_rx(r); fprintf(stderr, "GCTRL       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_GCTRL+1; rval=ctrl_rx(r); fprintf(stderr, "GCTRL+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_GCTRL+2; rval=ctrl_rx(r); fprintf(stderr, "GCTRL+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_GCTRL+3; rval=ctrl_rx(r); fprintf(stderr, "GCTRL+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_0x004;   rval=ctrl_rx(r); fprintf(stderr, "REG_004H    0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_0x004+1; rval=ctrl_rx(r); fprintf(stderr, "REG_004H+1  0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_0x004+2; rval=ctrl_rx(r); fprintf(stderr, "REG_004H+2  0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_0x004+3; rval=ctrl_rx(r); fprintf(stderr, "REG_004H+3  0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_RMCTL;   rval=ctrl_rx(r); fprintf(stderr, "RMCTL       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_RMCTL+1; rval=ctrl_rx(r); fprintf(stderr, "RMCTL+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_RMCTL+2; rval=ctrl_rx(r); fprintf(stderr, "RMCTL+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_RMCTL+3; rval=ctrl_rx(r); fprintf(stderr, "RMCTL+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_POSVA;   rval=ctrl_rx(r); fprintf(stderr, "POSVA       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_POSVA+1; rval=ctrl_rx(r); fprintf(stderr, "POSVA+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_POSVA+2; rval=ctrl_rx(r); fprintf(stderr, "POSVA+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_POSVA+3; rval=ctrl_rx(r); fprintf(stderr, "POSVA+3     0x%03x : 0x%02x %08b\n",r,rval,rval); 
    fprintf(stderr, "\n");
    r=DC1120_PLLSO;   rval=ctrl_rx(r); fprintf(stderr, "PLLSO       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_PLLSO+1; rval=ctrl_rx(r); fprintf(stderr, "PLLSO+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_PLLSO+2; rval=ctrl_rx(r); fprintf(stderr, "PLLSO+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_PLLSO+3; rval=ctrl_rx(r); fprintf(stderr, "PLLSO+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_PLLFD;   rval=ctrl_rx(r); fprintf(stderr, "PLLFD       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_PLLFD+1; rval=ctrl_rx(r); fprintf(stderr, "PLLFD+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_PLLFD+2; rval=ctrl_rx(r); fprintf(stderr, "PLLFD+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_PLLFD+3; rval=ctrl_rx(r); fprintf(stderr, "PLLFD+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_DCTRL;   rval=ctrl_rx(r); fprintf(stderr, "DCTRL       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_DCTRL+1; rval=ctrl_rx(r); fprintf(stderr, "DCTRL+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_DCTRL+2; rval=ctrl_rx(r); fprintf(stderr, "DCTRL+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_DCTRL+3; rval=ctrl_rx(r); fprintf(stderr, "DCTRL+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_0x104;   rval=ctrl_rx(r); fprintf(stderr, "REG_104H    0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_0x104+1; rval=ctrl_rx(r); fprintf(stderr, "REG_104H+1  0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_0x104+2; rval=ctrl_rx(r); fprintf(stderr, "REG_104H+2  0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_0x104+3; rval=ctrl_rx(r); fprintf(stderr, "REG_104H+3  0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_CFSPO;   rval=ctrl_rx(r); fprintf(stderr, "CFSPO       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_CFSPO+1; rval=ctrl_rx(r); fprintf(stderr, "CFSPO+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_CFSPO+2; rval=ctrl_rx(r); fprintf(stderr, "CFSPO+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_CFSPO+3; rval=ctrl_rx(r); fprintf(stderr, "CFSPO+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_CFEPO;   rval=ctrl_rx(r); fprintf(stderr, "CFEPO       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_CFEPO+1; rval=ctrl_rx(r); fprintf(stderr, "CFEPO+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_CFEPO+2; rval=ctrl_rx(r); fprintf(stderr, "CFEPO+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_CFEPO+3; rval=ctrl_rx(r); fprintf(stderr, "CFEPO+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_TCTRL;   rval=ctrl_rx(r); fprintf(stderr, "TCTRL       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_TCTRL+1; rval=ctrl_rx(r); fprintf(stderr, "TCTRL+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_TCTRL+2; rval=ctrl_rx(r); fprintf(stderr, "TCTRL+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_TCTRL+3; rval=ctrl_rx(r); fprintf(stderr, "TCTRL+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_SICTL;   rval=ctrl_rx(r); fprintf(stderr, "SICTL       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SICTL+1; rval=ctrl_rx(r); fprintf(stderr, "SICTL+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SICTL+2; rval=ctrl_rx(r); fprintf(stderr, "SICTL+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SICTL+3; rval=ctrl_rx(r); fprintf(stderr, "SICTL+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_SBUSW;   rval=ctrl_rx(r); fprintf(stderr, "SBUSW       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SBUSW+1; rval=ctrl_rx(r); fprintf(stderr, "SBUSW+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SBUSW+2; rval=ctrl_rx(r); fprintf(stderr, "SBUSW+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SBUSW+3; rval=ctrl_rx(r); fprintf(stderr, "SBUSW+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_SBUSR;   rval=ctrl_rx(r); fprintf(stderr, "SBUSR       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SBUSR+1; rval=ctrl_rx(r); fprintf(stderr, "SBUSR+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SBUSR+2; rval=ctrl_rx(r); fprintf(stderr, "SBUSR+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SBUSR+3; rval=ctrl_rx(r); fprintf(stderr, "SBUSR+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_SCSI;   rval=ctrl_rx(r); fprintf(stderr, "SCSI        0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SCSI+1; rval=ctrl_rx(r); fprintf(stderr, "SCSI+1      0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SCSI+2; rval=ctrl_rx(r); fprintf(stderr, "SCSI+2      0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_SCSI+3; rval=ctrl_rx(r); fprintf(stderr, "SCSI+3      0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_GSBWP;   rval=ctrl_rx(r); fprintf(stderr, "GSBWP       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_GSBWP+1; rval=ctrl_rx(r); fprintf(stderr, "GSBWP+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_GSBWP+2; rval=ctrl_rx(r); fprintf(stderr, "GSBWP+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_GSBWP+3; rval=ctrl_rx(r); fprintf(stderr, "GSBWP+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_GSBRP;   rval=ctrl_rx(r); fprintf(stderr, "GSBRP       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_GSBRP+1; rval=ctrl_rx(r); fprintf(stderr, "GSBRP+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_GSBRP+2; rval=ctrl_rx(r); fprintf(stderr, "GSBRP+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_GSBRP+3; rval=ctrl_rx(r); fprintf(stderr, "GSBRP+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_AIC;   rval=ctrl_rx(r); fprintf(stderr, "AIC         0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_AIC+1; rval=ctrl_rx(r); fprintf(stderr, "AIC+1       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_AIC+2; rval=ctrl_rx(r); fprintf(stderr, "AIC+2       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_AIC+3; rval=ctrl_rx(r); fprintf(stderr, "AIC+3       0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    
    r=DC1120_TIGEN;   rval=ctrl_rx(r); fprintf(stderr, "TIGEN       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_TIGEN+1; rval=ctrl_rx(r); fprintf(stderr, "TIGEN+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_TIGEN+2; rval=ctrl_rx(r); fprintf(stderr, "TIGEN+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_TIGEN+3; rval=ctrl_rx(r); fprintf(stderr, "TIGEN+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_TICTL;   rval=ctrl_rx(r); fprintf(stderr, "TICTL       0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_TICTL+1; rval=ctrl_rx(r); fprintf(stderr, "TICTL+1     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_TICTL+2; rval=ctrl_rx(r); fprintf(stderr, "TICTL+2     0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_TICTL+3; rval=ctrl_rx(r); fprintf(stderr, "TICTL+3     0x%03x : 0x%02x %08b\n",r,rval,rval);
    
    fprintf(stderr, "\n");
    r=DC1120_AC97CTL_0;   rval=ctrl_rx(r); fprintf(stderr, "AC97CTL_0   0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_AC97CTL_0+1; rval=ctrl_rx(r); fprintf(stderr, "AC97CTL_0+1 0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_AC97CTL_0+2; rval=ctrl_rx(r); fprintf(stderr, "AC97CTL_0+2 0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_AC97CTL_0+3; rval=ctrl_rx(r); fprintf(stderr, "AC97CTL_0+3 0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_AC97CTL_1;   rval=ctrl_rx(r); fprintf(stderr, "AC97CTL_1   0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_AC97CTL_1+1; rval=ctrl_rx(r); fprintf(stderr, "AC97CTL_1+1 0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_AC97CTL_1+2; rval=ctrl_rx(r); fprintf(stderr, "AC97CTL_1+2 0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_AC97CTL_1+3; rval=ctrl_rx(r); fprintf(stderr, "AC97CTL_1+3 0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_I2SCTL;   rval=ctrl_rx(r); fprintf(stderr, "I2SCTL      0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_I2SCTL+1; rval=ctrl_rx(r); fprintf(stderr, "I2SCTL+1    0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_I2SCTL+2; rval=ctrl_rx(r); fprintf(stderr, "I2SCTL+2    0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_I2SCTL+3; rval=ctrl_rx(r); fprintf(stderr, "I2SCTL+3    0x%03x : 0x%02x %08b\n",r,rval,rval);
    fprintf(stderr, "\n");
    r=DC1120_EEPROM_SZ;   rval=ctrl_rx(r); fprintf(stderr, "EEPROM_SZ   0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_EEPROM_SZ+1; rval=ctrl_rx(r); fprintf(stderr, "EEPROM_SZ+1 0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_EEPROM_SZ+2; rval=ctrl_rx(r); fprintf(stderr, "EEPROM_SZ+2 0x%03x : 0x%02x %08b\n",r,rval,rval);  
    r=DC1120_EEPROM_SZ+3; rval=ctrl_rx(r); fprintf(stderr, "EEPROM_SZ+3 0x%03x : 0x%02x %08b\n",r,rval,rval);
    
}

// 
//  TV functions
//

void tv_tuner_set_frequency(float frequencyMHz) {
    uint16_t VFRQ,VFRQ_L,VFRQ_H;
    VFRQ=(int)(16*frequencyMHz)+622;
    VFRQ_L=VFRQ&0x00FF;
    VFRQ_H=(VFRQ>>8)&0x00FF;
    sbi_select_device(0x00c2);
    sbi_write(VFRQ_H,VFRQ_L);
}


// 
//  GPIO functions
//

void gpio_dir_set(uint8_t io){
    uint8_t c;
    if (io<8){
        c = ctrl_rx(DC1120_GCTRL+2);
        c = set_bit(c,io);
        ctrl_tx(DC1120_GCTRL+2,c);
    }
    else {
        c = ctrl_rx(DC1120_GCTRL+3);
        c = set_bit(c,io-8);
        ctrl_tx(DC1120_GCTRL+3,c);
    }
}    

void gpio_dir_clear(uint8_t io){
    uint8_t c;
    if (io<8){
        c = ctrl_rx(DC1120_GCTRL+2);
        c = clear_bit(c,io);
        ctrl_tx(DC1120_GCTRL+2,c);
    }
    else {
        c = ctrl_rx(DC1120_GCTRL+3);
        c = clear_bit(c,io-8);
        ctrl_tx(DC1120_GCTRL+3,c);
    }
}  

void gpio_set(uint8_t io){
    uint8_t c;
    if (io<8){
        c = ctrl_rx(DC1120_GCTRL);
        c = set_bit(c,io);
        ctrl_tx(DC1120_GCTRL,c);
    }
    else {
        c = ctrl_rx(DC1120_GCTRL+1);
        c = set_bit(c,io-8);
        ctrl_tx(DC1120_GCTRL+1,c);
    }
}    

void gpio_clear(uint8_t io){
    uint8_t c;
    if (io<8){
        c = ctrl_rx(DC1120_GCTRL);
        c = clear_bit(c,io);
        ctrl_tx(DC1120_GCTRL,c);
    }
    else {
        c = ctrl_rx(DC1120_GCTRL+1);
        c = clear_bit(c,io-8);
        ctrl_tx(DC1120_GCTRL+1,c);
    }
}  

uint8_t gpio_read(uint8_t io){
    uint8_t c;
    if (io<8){
        c = ctrl_rx(DC1120_GCTRL);
        return read_bit(c,io);
    }
    else {
        c = ctrl_rx(DC1120_GCTRL+1);
        return read_bit(c,io-8);
    }
}  

// 
//  I2C functions
//

void i2c_start(){
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
}

void i2c_bit_tx(uint8_t b){
    if (b==0)
        gpio_clear(I2C_SDA);
    else
        gpio_set(I2C_SDA);
    gpio_set(I2C_SCL);
    gpio_clear(I2C_SCL);
}

uint8_t i2c_bit_rx(){
    uint8_t b;
    gpio_set(I2C_SCL);
    b = gpio_read(I2C_SDA);
    gpio_clear(I2C_SCL);
    return b;
}

void i2c_byte_tx(uint8_t byte){
    int8_t i;
    uint8_t b;
    for (i=7; i>=0; i--){
        b=read_bit(byte,i);
        i2c_bit_tx(b);
    }
}

uint8_t i2c_byte_rx(){
    int8_t i;
    uint8_t byte;
    uint8_t b;
    byte=0;
    for (i=7; i>=0; i--){
        b=i2c_bit_rx();
        if (b==1)
            byte=set_bit(byte,i);
    } 
    return byte;
}


uint8_t i2c_receive_ack(){
    uint8_t a;
    gpio_dir_clear(I2C_SDA);
    gpio_set(I2C_SDA);
    gpio_set(I2C_SCL);
    a = gpio_read(I2C_SDA);;
    gpio_clear(I2C_SCL);
    gpio_clear(I2C_SCL);
    gpio_dir_set(I2C_SDA);
    return a;
    
}

uint8_t i2c_receive_ack_p_tx(){
    uint8_t a;
    gpio_dir_clear(I2C_SDA);
    gpio_set(I2C_SDA);
    gpio_set(I2C_SCL);
    a = gpio_read(I2C_SDA);
    gpio_clear(I2C_SCL);
    gpio_dir_set(I2C_SDA);
    return a;
}
     
uint8_t i2c_receive_ack_p_rx(){
    uint8_t a; 
    gpio_dir_clear(I2C_SDA);
    gpio_set(I2C_SDA);
    gpio_set(I2C_SCL);
    a = gpio_read(I2C_SDA);
    gpio_clear(I2C_SCL);
    gpio_set(I2C_SDA);
    gpio_dir_clear(I2C_SDA);
    return a;
}     
 
void i2c_send_ack(){
    gpio_dir_set(I2C_SDA);
    gpio_clear(I2C_SDA);
    gpio_set(I2C_SCL);
    gpio_clear(I2C_SCL);
    gpio_set(I2C_SDA);
    gpio_dir_clear(I2C_SDA);
}

void i2c_send_ack_p(){
    gpio_dir_set(I2C_SDA);
    gpio_set(I2C_SDA);
    gpio_set(I2C_SCL);
    gpio_clear(I2C_SCL);
    gpio_dir_set(I2C_SDA);
} 
     
void i2c_stop(){
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_set(I2C_SDA);
}


// 
//  TEA5767 FM Stereo radio functions
//

char tea5767_read_registers[5];
char tea5767_write_registers[5];


void print_tea5767_read_registers(){
    fprintf(stderr,"TEA5767 read registers:  %04b %04b   %04b %04b   %04b %04b   %04b %04b   %04b %04b\n",tea5767_read_registers[4]&0xF0>>4, tea5767_read_registers[4]&0x0F, tea5767_read_registers[3]&0xF0>>4, tea5767_read_registers[3]&0x0F, tea5767_read_registers[2]&0xF0>>4, tea5767_read_registers[2]&0x0F, tea5767_read_registers[1]&0xF0>>4, tea5767_read_registers[1]&0x0F, tea5767_read_registers[0]&0xF0>>4, tea5767_read_registers[0]&0x0F);
}

void print_tea5767_write_registers(){
    fprintf(stderr,"TEA5767 write registers: %04b %04b   %04b %04b   %04b %04b   %04b %04b   %04b %04b\n",tea5767_write_registers[4]&0xF0>>4, tea5767_write_registers[4]&0x0F, tea5767_write_registers[3]&0xF0>>4, tea5767_write_registers[3]&0x0F, tea5767_write_registers[2]&0xF0>>4, tea5767_write_registers[2]&0x0F, tea5767_write_registers[1]&0xF0>>4, tea5767_write_registers[1]&0x0F, tea5767_write_registers[0]&0xF0>>4, tea5767_write_registers[0]&0x0F);
}

void tea5767_read(){
    uint8_t ack;
    i2c_start();
    i2c_byte_tx(0xc1);
    ack=i2c_receive_ack_p_rx();
    tea5767_read_registers[0]=i2c_byte_rx();
    i2c_send_ack();
    tea5767_read_registers[1]=i2c_byte_rx();
    i2c_send_ack();
    tea5767_read_registers[2]=i2c_byte_rx();
    i2c_send_ack();
    tea5767_read_registers[3]=i2c_byte_rx();
    i2c_send_ack();
    tea5767_read_registers[4]=i2c_byte_rx();
    i2c_send_ack_p(); 
    i2c_stop();
}

void tea5767_write(){
    i2c_start();
    i2c_byte_tx(0xc0);
    i2c_receive_ack();
    i2c_byte_tx(tea5767_write_registers[0]);
    i2c_receive_ack();
    i2c_byte_tx(tea5767_write_registers[1]);
    i2c_receive_ack();
    i2c_byte_tx(tea5767_write_registers[2]);
    i2c_receive_ack();
    i2c_byte_tx(tea5767_write_registers[3]);
    i2c_receive_ack();
    i2c_byte_tx(tea5767_write_registers[4]);
    i2c_receive_ack_p_tx();
    i2c_stop();
}

#define TEA5767_PLL_H_MASK 0x003F
#define TEA5767_PLL_L_MASK 0x00FF

float radio_tuner_get_frequency(){
    float frequencyMHz;
    tea5767_read();
    uint16_t PLL;
    uint8_t PLL_L,PLL_H;
    PLL_L=tea5767_read_registers[1];
    PLL_H=tea5767_read_registers[0]&TEA5767_PLL_H_MASK;
    PLL=(PLL_H<<8)|PLL_L;    
    frequencyMHz=(PLL*50.0/4.0+225.0)/1000.0;
    return frequencyMHz;
}

float radio_tuner_set_frequency(float frequencyMHz){
    uint16_t PLL;
    uint8_t PLL_L,PLL_H;
    PLL = round((frequencyMHz*1000.0-225.0)*4.0/50.0);
    PLL_L = PLL & TEA5767_PLL_L_MASK ;
    PLL_H = (PLL >> 8) & TEA5767_PLL_H_MASK ;
    tea5767_write_registers[0]=(tea5767_write_registers[0]&~TEA5767_PLL_H_MASK)|PLL_H ;
    tea5767_write_registers[1]=PLL_L ;
    tea5767_write();
}

// 
//  Audio functions
//

// AC97 Registers
// =================================
#define AC97_MASTER_VOLUME  0x02
#define AC97_MIC_VOLUME     0x0e
#define AC97_LINE_IN_VOLUME 0x10
#define AC97_CD_VOLUME      0x12
#define AC97_AUX_VOLUME     0x16
#define AC97_RECORD_SELECT  0x1a
#define AC97_RECORD_GAIN    0x1c

uint16_t ai_get_MX(uint16_t mx) {
    ctrl_tx(0x0504,mx);
    ctrl_tx(0x0500,0x008b);
    uint16_t MX_L;
    uint16_t MX_H;
    uint16_t MX;
    MX_L=ctrl_rx(0x0502);
    MX_H=ctrl_rx(0x0503);
    MX=(MX_H<<8)|(MX_L&0x00FF);
    return MX ;
}

void ai_set_MX(uint16_t mx, uint16_t value) {
    ctrl_tx(0x0504,mx);
    uint16_t MX_L=value&0x00FF;
    uint16_t MX_H=(value>>8)&0x00FF;
    ctrl_tx(0x0502,MX_L);
    ctrl_tx(0x0503,MX_H);
    ctrl_tx(0x0500,0x008c);
}

void audio_set_volume(int vol){
    if (vol > 15)
        vol=15;
    if (vol < 0 )
        vol=0;
    uint16_t LRG=vol;
    uint16_t RRG=vol;
    uint16_t RG=(LRG<<8)|RRG;
    ai_set_MX(AC97_RECORD_GAIN,RG);
}

void print_ac97_registers(){
    int r;
    uint16_t rval;
    fprintf(stderr, "\nAC97 Registers");
    fprintf(stderr, "\n==============================================\n");
    r=AC97_MASTER_VOLUME; rval=ai_get_MX(r); fprintf(stderr,  "MASTER_VOLUME   0x%02x : 0x%04x %016b\n",r,rval,rval); 
    r=AC97_MIC_VOLUME; rval=ai_get_MX(r);     fprintf(stderr, "MIC_VOLUME      0x%02x : 0x%04x %016b\n",r,rval,rval);
    r=AC97_LINE_IN_VOLUME; rval=ai_get_MX(r); fprintf(stderr, "LINE_IN_VOLUME  0x%02x : 0x%04x %016b\n",r,rval,rval); 
    r=AC97_CD_VOLUME; rval=ai_get_MX(r);     fprintf(stderr,  "CD_VOLUME       0x%02x : 0x%04x %016b\n",r,rval,rval);
    r=AC97_AUX_VOLUME; rval=ai_get_MX(r);     fprintf(stderr, "AUX_VOLUME      0x%02x : 0x%04x %016b\n",r,rval,rval);
    r=AC97_RECORD_SELECT; rval=ai_get_MX(r);  fprintf(stderr, "RECORD_SELECT   0x%02x : 0x%04x %016b\n",r,rval,rval);  
    r=AC97_RECORD_GAIN;   rval=ai_get_MX(r);  fprintf(stderr, "RECORD_GAIN     0x%02x : 0x%04x %016b\n",r,rval,rval); 
}
