# tvM036
**A TV app for the AVerMedia AVerTV USB2.0 Plus**

---

![ScreenShot](http://burabizim.org.tr/tvM036/Screenshot-tvM036.png) 


tvM036 is a Linux app for the AVerMedia AVerTV USB2.0 Plus (USB Id: 07ca:0036). The python module `m036Device`  provides classes of functions to control the hardware. The main controller of the device - Syntek DC1120 video controller - is an ancestor of Syntek STK11xx series video imaging controllers and has similar registers with this series of controllers. 

## Requirements

- Device access
    
    The udev rule allowing non-root users to access the device:

    `SUBSYSTEM=="usb", ATTR{idVendor}=="07ca", ATTR{idProduct}=="0036", MODE="0666"`

- v4l2loopback kernel module

    Loading kernel module for the video device /dev/video0:
    
    `sudo modprobe v4l2loopback exclusive_caps=0 video_nr=0 card_label="AVerMedia AVerTV USB 2.0 Plus"`

- VLC media player
    
    It is used to play audio and video stream. VLC developments packages are also to be installed.
    
- Python >= 3.7
   
    It is recommended that using a virtual environment and installing the required modules with the command
   
    `pip install -r requirements.txt`
    
## Usage

<pre>
    Usage: tvM036.py [-h] [-r | -t | -c | -s]

    Options:
    -h, --help                  Show this help message and exit
    -r, -radio, --radio         Play radio
    -t, -tv, --tv               Play television
    -c, -cvbs, --cvbs           Play video from composite video input
    -s, -s-video, --s-video     Play video from s-video input                         
</pre>

## Notes

- Compiling the streamer
    
    `gcc -lusb-1.0 m036-streamer.c -o m036-streamer`

- Audio control

    OS provides an audio driver. Select audio source at first run.
    
- TV system 

    The device is for reception of analog television signals. In the `tvChannels' module, a frequency dictinoary is given for PAL B/G TV standard.
    It needs to be modified for other TV standards.

- Channel scanner

    Use `tvM036-channel-scanner` to create and modify channel list.

## Tips
    
- In case of poor or unexpected image quality, unplugging the USB connector during video streaming may result in a hard reset of the device.
