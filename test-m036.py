#!/usr/bin/env python
"""
================================================
A TV app for the AVerMedia AVerTV USB2.0 Plus
Test m036Device
================================================
Version:    0.1
Author:     Sinan Güngör
License:    GPL v2
"""
#===============================================================================
import argparse

def parse_args():
    parser = argparse.ArgumentParser()
    group = parser.add_mutually_exclusive_group()
    group.add_argument('-r', '-radio','--radio', action='store_true', help='Play radio')
    group.add_argument('-t','-tv','--tv',  action='store_true', help='Play television')
    group.add_argument('-c','-cvbs','--cvbs',  action='store_true', help='Play video from composite video input')
    group.add_argument('-s','-s-video','--s-video',  action='store_true', help='Play video from s-video input')
    return parser.parse_args()

operatingMode=parse_args()

if not operatingMode.radio and not operatingMode.tv and not operatingMode.cvbs and not operatingMode.s_video:
    operatingMode.tv=True

#===============================================================================
def run_file(path):
    return exec(open(path).read());
#===============================================================================

from m036Device import *
m036 = M036Device()
i2c=I2C(m036)

m036.find()
if m036.usbDev == None :
    print ("AVerTV USB2.0 Plus not found!") 
    exit()
print ("AVerTV USB2.0 Plus found!") 

m036.open()

m036.gpio_dir_set(dc1120.LED)
m036.gpio_led(True)
m036.init_device()

print("----------------------------------------------------------------")

from m036Settings import *

tvM036Settings=Settings()
fileSettings=tvM036Settings.fileSettings

isFile = os.path.isfile(fileSettings)
if isFile:
    tvM036Settings.read(fileSettings)
else:
    tvM036Settings.write(fileSettings) 

tvM036Settings.print()
print("----------------------------------------------------------------")

#===============================================================================

m036.audio_mute()
m036.audio_unmute()

i2c=I2C(m036)
tea5767=TEA5767(i2c)

#===============================================================================
from m036Stream import *

streamDevice=StreamDevice(tvM036Settings.v4l2Device)
streamer=Streamer(tvM036Settings.streamer,streamDevice.v4l2Device)

#===============================================================================

if operatingMode.radio :
    print("Setting operation mode: Radio")
    frequencyDictRadio = {
    "Radio 1" : 87.95,
    "Radio 2" : 89.8,
    "Radio 3" : 91.2,
    "Radio 4" : 94.5,
    "Radio 5" : 94.7,
    "Radio 6" : 100.5
    }

    global iRadio
    radios=list(frequencyDictRadio)
    nRadio=len(radios)
    iRadio=1

    m036.ctrl_tx(0x0002,0x0078);
    m036.ctrl_tx(0x0003,0x0083);
    
    m036.ctrl_tx(0x0000,0x0060);
    m036.ctrl_tx(0x0001,0x0002);
    
    # ---------------------------------------------------
    tea5767.SNC_on()
    tea5767.HCC_on()
    tea5767.soft_mute_on()
    tea5767.DTC_on()
    # ---------------------------------------------------
    tea5767.set_frequency(frequencyDictRadio[radios[iRadio]])
    tea5767.print_write_registers()
    tea5767.print_read_registers()
    # ---------------------------------------------------
    
    m036.audio_select_source(AUDIO_SOURCE_RADIO_TUNER)
    m036.print_audio_codec_registers()

#===============================================================================

if operatingMode.tv :
    print("Setting operation mode: Tv")
    frequencyDictTv = {
    "Tv 1" : 495.25,
    "Tv 2" : 551.25,
    "Tv 3" : 559.25,
    "Tv 4" : 639.25,
    "Tv 5" : 655.25
    }
    global iTv
    tvs=list(frequencyDictTv)
    nTv=len(tvs)
    iTv=0
    
    m036.set_tv_tuner(frequencyDictTv[tvs[iTv]])
    
    m036.video_select_source(VIDEO_SOURCE_TV)
    m036.video_set_capture(0,0,720,576)
    m036.video_get_capture()
    m036.video_print_capture()

    m036.audio_select_source(AUDIO_SOURCE_TV_TUNER)
    streamer.start(720,576)   
    time.sleep(0.1)
#===============================================================================

if operatingMode.cvbs :
    print("Setting operation mode: CVBS")
    m036.init_device()
    m036.video_select_source(VIDEO_SOURCE_COMPOSITE)
    m036.video_set_capture(0,0,720,576)
    m036.audio_select_source(AUDIO_SOURCE_AUX)
    streamer.start(720,576)
    time.sleep(0.1)

#===============================================================================

if operatingMode.s_video :
    print("Setting operation mode: S-Video")
    m036.init_device()
    m036.video_select_source(VIDEO_SOURCE_S_VIDEO)
    m036.video_set_capture(0,0,720,576)
    m036.audio_select_source(AUDIO_SOURCE_AUX)
    streamer.start(720,576)
    time.sleep(0.1)
    
#===============================================================================

from m036AudioControl import *

audioSource=None

# to list audio sources:
#  pactl list short sources 

# audioSource='alsa_input.usb-AVerMedia_AVerTV_USB_2.0_Plus-01.analog-stereo'
audioSource='alsa_input.usb-AVerMedia_AVerTV_USB_2.0_Plus-01.pro-input-0'

if audioSource == None :
    audioControl=AudioControl('Unknown')
else :
    audioControl=AudioControl(audioSource)

if audioControl.audioSource == None :
    print("Audio source isn't set!")
if audioControl.audioSource :
    print("Audio source is set.")
    
audioSources=AudioSourceList()  
print(audioSources.nameList)
print(audioSources.descriptionList)

if audioControl.audioSource :
    audioSources.select_by_name(audioControl.sourceName)

audioSources.print()
print("Selected",audioSources.selected)
print("Index selected",audioSources.indexSelected)

#===============================================================================

from m036Vlc import *

vlcApp = VlcApp(None,None)
if audioControl.audioSource :
    audioSourceName=audioControl.sourceName
    audioMedia='pulse://'+audioSourceName
    vlcApp.set_audio_media(audioMedia)

playerVolume=100
print("Player volume:",playerVolume)
vlcApp.audioPlayer.audio_set_volume(playerVolume)  
vlcApp.audioPlayer.play()

if not operatingMode.radio:
    videoMedia='v4l2:///dev/video0'
    vlcApp.set_video_media(videoMedia)
    vlcApp.videoPlayer.video_set_aspect_ratio('16:9')
    vlcApp.videoPlayer.video_set_scale(0.5)

#===============================================================================

import tkinter as tk

def key_handler(event=None):
    global iRadio
    global iTv
    if event:
        print(event.keysym)
    if event and event.keysym in ('q', 'Q', 'Escape'):
        delete()
    if event and event.keysym in ('Up'):
        audioControl.get_volume()
        audioControl.print_volume()
        playerVolume= vlcApp.audioPlayer.audio_get_volume()
        playerVolume+=10
        if playerVolume>200:
            playerVolume=200
        print("Player volume",playerVolume)
        vlcApp.audioPlayer.audio_set_volume(playerVolume)   
    if event and event.keysym in ('Down'):
        audioControl.get_volume()
        audioControl.print_volume()
        playerVolume= vlcApp.audioPlayer.audio_get_volume()
        playerVolume-=10
        if playerVolume<0:
            playerVolume=0
        print("Player volume",playerVolume)
        vlcApp.audioPlayer.audio_set_volume(playerVolume)       
        
    if event and event.keysym in ('Left'):
        if operatingMode.radio :
            iRadio-=1
            if iRadio<0 :
                iRadio=nRadio-1
            print(radios[iRadio])
            labelRadio['text']="{f:.2f} MHz : {r}".format(f=frequencyDictRadio[radios[iRadio]] , r=radios[iRadio])
            tea5767.set_frequency(frequencyDictRadio[radios[iRadio]])
            tea5767.print_write_registers()
            tea5767.print_read_registers()
        if operatingMode.tv :
            iTv-=1
            if iTv<0 :
                iTv=nTv-1
            print(tvs[iTv])  
            m036.set_tv_tuner(frequencyDictTv[tvs[iTv]])
            
    if event and event.keysym in ('Right'): 
        if operatingMode.radio :
            iRadio+=1
            if iRadio > nRadio-1 :
                iRadio=0
            print(radios[iRadio])
            labelRadio['text']="{f:.2f} MHz : {r}".format(f=frequencyDictRadio[radios[iRadio]] , r=radios[iRadio])
            tea5767.set_frequency(frequencyDictRadio[radios[iRadio]])
            tea5767.print_write_registers()
            tea5767.print_read_registers()
        if operatingMode.tv :
            iTv+=1
            if iTv > nTv-1 :
                iTv=0
            print(tvs[iTv])
            m036.set_tv_tuner(frequencyDictTv[tvs[iTv]])
            
    if event and event.keysym in ('a'): 
        m036.print_audio_codec_registers()
        
def delete():
    streamer.terminate()
    m036.gpio_led(False)
    m036.close()        
    quit() 

root = tk.Tk()
root.bind('<Key>', key_handler)

if not operatingMode.radio:  
    root.title('tvM036')
    canvas = tk.Canvas(root, width=288*16/9, height=288,bg='black')  
    canvas.grid(row=0,column=0,sticky=tk.EW)
    h = canvas.winfo_id()
    if not operatingMode.radio:
        vlcApp.videoPlayer.play()
        vlcApp.videoPlayer.set_xwindow(h)
else :
    root.title('radioM036')
    root.columnconfigure(0, minsize=200)
    labelRadio=tk.Label(root,text="")
    labelRadio['text']="{f:.2f} MHz : {r}".format(f=frequencyDictRadio[radios[iRadio]] , r=radios[iRadio])
    labelRadio.grid(row=0,column=0,sticky=tk.EW,pady=(8,4))

root.wait_visibility()
root.resizable(False,False)
root.protocol("WM_DELETE_WINDOW", delete)
root.mainloop()

#===============================================================================
