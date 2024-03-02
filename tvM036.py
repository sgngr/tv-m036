#!/usr/bin/env python
"""
================================================
A TV app for the AVerMedia AVerTV USB2.0 Plus
Main module
================================================
Version:    0.1
Author:     Sinan Güngör
License:    GPL v2
"""

import sys
import usb1 as usb

#===============================================================================
from m036Device import *
m036 = M036Device()
m036.find()
if m036.usbDev == None :
    print ("AVerTV USB2.0 Plus not found!") 
    exit()
print ("AVerTV USB2.0 Plus found!") 

m036.open() 
m036.gpio_led(True)
m036.init_device()
m036.rc_flush()

print("----------------------------------------------------------------")

#===============================================================================
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

m036.operatingMode=tvM036Settings.m036OperatingMode
m036.audioSource=tvM036Settings.m036AudioSource
m036.videoSource=tvM036Settings.m036VideoSource

frameComposite=Frame(Position(tvM036Settings.m036CompositeCaptureStartX,tvM036Settings.m036CompositeCaptureStartY),Position(tvM036Settings.m036CompositeCaptureEndX,tvM036Settings.m036CompositeCaptureEndY))

frameTv=Frame(Position(tvM036Settings.m036TvCaptureStartX,tvM036Settings.m036TvCaptureStartY),Position(tvM036Settings.m036TvCaptureEndX,tvM036Settings.m036TvCaptureEndY))

frameSVideo=Frame(Position(tvM036Settings.m036SVideoCaptureStartX,tvM036Settings.m036SVideoCaptureStartY),Position(tvM036Settings.m036SVideoCaptureEndX,tvM036Settings.m036SVideoCaptureEndY))

m036.vdVideoStandardComposite = tvM036Settings.m036CompositeVideoStandard
m036.vdVideoStandardTv = tvM036Settings.m036TvVideoStandard
m036.vdVideoStandardSVideo = tvM036Settings.m036SVideoVideoStandard
    
m036.vdCaptureFrameComposite=frameComposite
m036.vdCaptureFrameTv=frameTv
m036.vdCaptureFrameSVideo=frameSVideo

#===============================================================================

from tvChannels import *

tvChannels = TvChannels()
tvChannel = TvChannel()

tvChannels.read()
tvChannels.print()

print("----------------------------------------------------------------")
    
#===============================================================================

from m036AudioControl import *

if tvM036Settings.audioSource == None :
    audioControl=AudioControl('Unknown')
else :
    audioControl=AudioControl(tvM036Settings.audioSource)

if audioControl.audioSource == None :
    print("Audio source isn't set!")
if audioControl.audioSource :
    print("Audio source is set.")
    
audioSources=AudioSourceList()  
# print(audioSources.nameList)
# print(audioSources.descriptionList)

if audioControl.audioSource :
    audioSources.select_by_name(audioControl.sourceName)
    
# audioSources.print()

print("----------------------------------------------------------------")

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

args=parse_args()
operatingMode=None
if args.radio:
    operatingMode=RADIO
if args.tv:
    operatingMode=TV    
if args.cvbs:
    operatingMode=CVBS
if args.s_video:
    operatingMode=S_VIDEO
    
if operatingMode!=None:
    m036.set_operating_mode(operatingMode)

#===============================================================================

from m036Stream import *

streamDevice=StreamDevice(tvM036Settings.v4l2Device)
streamer=Streamer(tvM036Settings.streamer,streamDevice.v4l2Device)

if m036.operatingMode == CVBS or m036.operatingMode == S_VIDEO :
    m036.audio_select_source(AUDIO_SOURCE_AUX)
if m036.operatingMode == TV :
    m036.audio_select_source(AUDIO_SOURCE_TV_TUNER)
if m036.operatingMode == RADIO :
    m036.audio_select_source(AUDIO_SOURCE_RADIO_TUNER)

if m036.operatingMode == CVBS :    
    m036.video_select_source(VIDEO_SOURCE_COMPOSITE)

if m036.operatingMode == S_VIDEO :    
    m036.video_select_source(VIDEO_SOURCE_S_VIDEO)

if m036.operatingMode == TV :
    tvChannel=tvChannels.channels[tvChannels.channel]
    m036.set_tv_tuner(tvChannel.frequencyMHz)
    m036.video_select_source(VIDEO_SOURCE_TV)

m036.video_decoder_status_video_standard()

if  operatingMode != RADIO :
    streamer.terminate()
    streamer.start(m036.videoCaptureSize.width,m036.videoCaptureSize.height)
    time.sleep(0.5)
    
#===============================================================================

from m036Vlc import *

vlcApp = VlcApp(None,None)
if audioControl.audioSource :
    audioSourceName=audioControl.sourceName
    audioMedia='pulse://'+audioSourceName
    vlcApp.set_audio_media(audioMedia)

playerVolume=tvM036Settings.audioPlayerVolume
print("Player volume:",playerVolume)
vlcApp.audioPlayer.audio_set_volume(playerVolume)  
vlcApp.audioPlayer.play()

videoMedia='v4l2://'+tvM036Settings.v4l2Device
vlcApp.set_video_media(videoMedia)

aspectRatio="{w}:{h}".format(w=16,h=9)
vlcApp.videoPlayer.video_set_aspect_ratio(aspectRatio)

widthCropped=m036.videoCaptureSize.width-tvM036Settings.vlcCropLeft-tvM036Settings.vlcCropRight
heightCropped=m036.videoCaptureSize.height-tvM036Settings.vlcCropTop-tvM036Settings.vlcCropBottom
cropGeometry="{w}x{h}+{l}+{t}".format(w=widthCropped,h=heightCropped,l=tvM036Settings.vlcCropLeft,t=tvM036Settings.vlcCropTop)

vScale=tvM036Settings.guiVideoHeight/heightCropped

vlcApp.videoPlayer.video_set_scale(vScale)
vlcApp.videoPlayer.video_set_crop_geometry(cropGeometry)

print("Video scale: {s:.3f}".format(s=vlcApp.videoPlayer.video_get_scale()))
print("Video aspect ratio: {r}".format(r=vlcApp.videoPlayer.video_get_aspect_ratio()))
print("Crop geometry:",vlcApp.videoPlayer.video_get_crop_geometry())

#===============================================================================

from tkinter import *
import tkinter as tk
from tkinter import ttk
from tkinter import font as tkFont

#===============================================================================
# AVerMedia RM-FR Remote Control
RM_FR_Key_Codes = {
    "RC_POWER":0x0200,
    "RC_TV_TM":0x0201,
    "RC_202":0x0202,
    "RC_TELETEXT":0x0203,
    "RC_SOURCE":0x0204,
    "RC_1":0x0205,
    "RC_2":0x0206,
    "RC_3":0x0207,
    "RC_AUDIO":0x0208,
    "RC_4":0x0209,
    "RC_5":0x020a,
    "RC_6":0x020b,
    "RC_FULL_SCREEN":0x020c,
    "RC_7":0x020d,
    "RC_8":0x020e,
    "RC_9":0x020f,
    "RC_16CH_PREV":0x0210,
    "RC_0":0x0211,
    "RC_DISPLAY":0x0212,
    "RC_CH_RTN":0x0213,
    "RC_MUTE":0x0214,
    "RC_AUTO_SCAN":0x0215,
    "RC_216":0x0216,
    "RC_SNAPSHOT":0x0217,
    "RC_PLAY":0x0218,
    "RC_STOP":0x0219,
    "RC_TIME_SHIFT":0x021a,
    "RC_PAUSE":0x021b,
    "RC_YELLOW":0x021c,
    "RC_RED":0x021d,
    "RC_VOL_DOWN":0x021e,
    "RC_VOL_UP":0x021f,
    "RC_BLUE":0x0300,
    "RC_GREEN":0x0301,
    "RC_CH_DOWN":0x0302,
    "RC_CH_UP":0x0303
    }

def radio_remote_control():
    keycode=m036.rc_read()
    if keycode==RM_FR_Key_Codes["RC_POWER"]:
        print("RC Power")
        radioM036.quit(event=None)
    if keycode==RM_FR_Key_Codes["RC_MUTE"]:
        print("RC Mute")
        radioM036.mute_unmute(event=None)
    if keycode==RM_FR_Key_Codes["RC_VOL_UP"]:
        print("RC Volume up")
        radioM036.volume_up(event=None)   
    if keycode==RM_FR_Key_Codes["RC_VOL_DOWN"]:
        print("RC Volume down")
        radioM036.volume_down(event=None)   
    if keycode==RM_FR_Key_Codes["RC_CH_UP"]:
        print("RC Channel up")
        radioM036.station_next(event=None)   
    if keycode==RM_FR_Key_Codes["RC_CH_DOWN"]:
        print("RC Channel down")
        radioM036.station_prev(event=None)  
        
    radioM036.after(1500,radio_remote_control)


def tv_remote_control():
    keycode=m036.rc_read()
    if keycode==RM_FR_Key_Codes["RC_POWER"]:
        print("RC Power")
        tvM036.quit(event=None)
    if keycode==RM_FR_Key_Codes["RC_MUTE"]:
        print("RC Mute")
        tvM036.mute_unmute(event=None)
    if keycode==RM_FR_Key_Codes["RC_VOL_UP"]:
        print("RC Volume up")
        tvM036.volume_up(event=None)   
    if keycode==RM_FR_Key_Codes["RC_VOL_DOWN"]:
        print("RC Volume down")
        tvM036.volume_down(event=None)   
    if keycode==RM_FR_Key_Codes["RC_CH_UP"]:
        print("RC Channel up")
        tvM036.channel_next(event=None)   
    if keycode==RM_FR_Key_Codes["RC_CH_DOWN"]:
        print("RC Channel down")
        tvM036.channel_prev(event=None)  
    if keycode==RM_FR_Key_Codes["RC_PLAY"]:
        print("RC Play")
        tvM036.play_pause(event=None)  
    if keycode==RM_FR_Key_Codes["RC_PAUSE"]:
        print("RC Pause")
        tvM036.play_pause(event=None)      
    if keycode==RM_FR_Key_Codes["RC_STOP"]:
        print("RC Stop")
        tvM036.play_pause(event=None)
    if keycode==RM_FR_Key_Codes["RC_SOURCE"]:
        print("RC Source")
        tvM036.source_changed(event=None)   
        
    tvM036.after(1500,tv_remote_control)


#===============================================================================

if  operatingMode != RADIO :
    
    from tvGUI import *
    
    tvM036 = TvM036(tvM036Settings=tvM036Settings,
                    tvChannels=tvChannels,
                    vlcApp=vlcApp,
                    m036=m036,
                    frequencyDict=frequencyDict,
                    streamer=streamer,
                    audioSources=audioSources,
                    audioControl=audioControl,
                    streamDevice=streamDevice
                    )
    
    if m036.videoSource != VIDEO_SOURCE_TV :
        tvM036.frameTVchannel.grid_remove()
    tvM036.update_display()
    vlcApp.videoPlayer.play()
    vlcApp.audioPlayer.play()
    tvM036.master.wait_visibility()
    tvM036.master.resizable(False,False)
    tv_remote_control()
    tvM036.mainloop()

else :
    
    from radioStations import *

    radioStations = RadioStations()
    radioStation = RadioStation()
    radioStations.read()    
    radioStations.print()
    
    
    m036.gpio_write_directions(0,dc1120.PORT0_MASK,0x78)
    m036.gpio_write_directions(1,dc1120.PORT1_MASK,0x83)
    m036.gpio_write_outputs(0,dc1120.PORT0_MASK,0x60)
    m036.gpio_write_outputs(1,dc1120.PORT1_MASK,0x02)
    m036.audio_select_source(AUDIO_SOURCE_RADIO_TUNER)
    
    i2c=I2C(m036)
    tea5767=TEA5767(i2c)
    
    tea5767.SNC_on()
    tea5767.HCC_on()
    tea5767.soft_mute_on()
    tea5767.DTC_on()
    
    radioStation=radioStations.stations[radioStations.station]
    tea5767.set_frequency(radioStation.frequencyMHz)
            
    from radioGUI import *
    
    radioM036 = RadioM036(radioStations=radioStations,
                          tea5767=tea5767,
                          m036=m036,
                          audioSources=audioSources,
                          audioControl=audioControl,
                          vlcApp=vlcApp,
                          tvM036Settings=tvM036Settings)
    
    vlcApp.audioPlayer.play()

    radioM036.master.wait_visibility()
    
    radioM036.master.resizable(False,False)
    
    radio_remote_control()
    
    radioM036.mainloop()

#===============================================================================






