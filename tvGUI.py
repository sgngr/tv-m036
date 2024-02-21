"""
================================================
A TV app for the AVerMedia AVerTV USB2.0 Plus
TV GUI module
================================================
Version:    0.1
Author:     Sinan Güngör
License:    GPL v2
"""

from tkinter import *
import tkinter as tk
from tkinter import ttk
from tkinter import font as tkFont

import os
import time
from v4l2py.device import Device, BufferType, PixelFormat
import vlc

from m036Device import *

class AppSettings(object):
    def __init__(self, parent,tvM036,tvM036Settings,streamDevice,streamer,m036,audioSources,audioControl,vlcApp):
        self.tvM036=tvM036
        self.tvM036Settings=tvM036Settings
        self.streamDevice=streamDevice
        self.streamer=streamer
        self.m036=m036
        self.audioSources=audioSources
        self.audioControl=audioControl
        self.vlcApp=vlcApp

        self.m036.video_decoder_get_video_standard()
        self.m036.video_decoder_status_video_standard()
        self.m036.video_get_capture()
        
        self.indexVideoStandard=int(self.m036.vdVideoStandard/2)
        
        self.videoSizeClass="576"
        self.set_video_size_class()
        self.videoCaptureSizeNumber=0
        
        self.returnValue = True
        self.root=Toplevel(parent)
        
        self.root.bind('<Key>', self.handle_key)
          
        p1 = PhotoImage(file='icons/tvM036.png')
        self.root.iconphoto(False,p1)  
        self.root.title("Settings")
        self.root.resizable(False,False)
                    
        self.style = ttk.Style(self.root)
        self.style.theme_use('clam')
        self.helv10 = tkFont.Font(family='Helvetica',size=10, weight='normal')
        self.helv10b = tkFont.Font(family='Helvetica',size=10, weight='bold')
        
        self.imgDefault=PhotoImage(file='icons/default.png')
        self.imgRefresh=PhotoImage(file='icons/refresh.png')  
    
        self.root.columnconfigure(0, weight=100)
     
        self.videoStandardList=["Autoswitch", "NTSC (M,J)", "PAL (B,G,H,I,N)", "PAL (M)", "PAL (Nc)", "NTSC (4.43)", "SECAM  (B, D, G, K, K1, L)"]
        
    # =============================================================================  
    
        self.frameV4l2Settings=ttk.Frame(self.root)
        self.frameV4l2Settings['relief'] = 'sunken'
        self.frameV4l2Settings['padding'] = (4,4,4,4)
        self.frameV4l2Settings.grid(row=0,column=0,padx=2,pady=2, sticky=tk.EW) 
        
        labelV4l2Settings=ttk.Label(self.frameV4l2Settings)       
        labelV4l2Settings['text']="v4l2 Settings"  
        labelV4l2Settings['font']=self.helv10b
        labelV4l2Settings['justify']="center"
        labelV4l2Settings['padding']=(152,0,150,0)
        labelV4l2Settings['background']='#1e94f1'
        labelV4l2Settings['foreground']='white'
        labelV4l2Settings.grid(row=0,column=0,columnspan=2,padx=(2,0),pady=(2,6),sticky=tk.EW) 
        
        labelV4l2Device=ttk.Label(self.frameV4l2Settings, text = "v4l2loopback device:")
        labelV4l2Device.grid(row=1,column=0,padx=5, pady=(4,0),sticky=tk.E)
        
        self.entryV4l2Device = ttk.Entry(self.frameV4l2Settings)
        self.entryV4l2Device['width']=16
        self.entryV4l2Device['font']=self.helv10
        self.entryV4l2Device['justify']='center'
        self.entryV4l2Device.bind('<Return>',self.update_gui_frame_v4l2_settings)
        self.entryV4l2Device.grid(row=1,column=1,padx=2,pady=2,sticky=tk.W)
        self.entryV4l2Device.insert(0,self.tvM036Settings.v4l2Device)
        
        labelV4l2DeviceInfo1=ttk.Label(self.frameV4l2Settings, text = "Device name:")
        labelV4l2DeviceInfo1.grid(row=2,column=0, padx=5,pady=4,sticky=tk.E)
        
        self.labelV4l2DeviceName=ttk.Label(self.frameV4l2Settings, text = "?")
        self.labelV4l2DeviceName.grid(row=2,column=1,padx=2,pady=4,sticky=tk.W)
        
        labelV4l2DeviceInfo2=ttk.Label(self.frameV4l2Settings, text = "Frame width:")
        labelV4l2DeviceInfo2.grid(row=3,column=0,padx=5,pady=4,sticky=tk.E)
        
        self.labelV4l2Width=ttk.Label(self.frameV4l2Settings, text = "?")
        self.labelV4l2Width.grid(row=3,column=1, padx=2,pady=4,sticky=tk.W)
        
        labelV4l2DeviceInfo3=ttk.Label(self.frameV4l2Settings, text = "Frame height:")
        labelV4l2DeviceInfo3.grid(row=4,column=0,padx=5,pady=4,sticky=tk.E)
        
        self.labelV4l2Height=ttk.Label(self.frameV4l2Settings, text = "?")
        self.labelV4l2Height.grid(row=4,column=1,padx=2,pady=4,sticky=tk.W)
        
        labelV4l2DeviceInfo4=ttk.Label(self.frameV4l2Settings, text = "Pixel format:")
        labelV4l2DeviceInfo4.grid(row=5,column=0,padx=5,pady=4,sticky=tk.E)
        
        self.labelV4l2Format=ttk.Label(self.frameV4l2Settings, text = "?")
        self.labelV4l2Format.grid(row=5,column=1,padx=2,pady=4,sticky=tk.W)
        
        self.frameV4l2Status=ttk.Frame(self.frameV4l2Settings)
        self.frameV4l2Status['padding']=(10,2,10,2)
        self.frameV4l2Status.grid(row=6,column=0,columnspan=2,padx=0,pady=0)
        self.frameV4l2Status.columnconfigure(0,weight=100,minsize=200)
        self.frameV4l2Status.columnconfigure(1,weight=1,minsize=26)
    
        self.labelV4l2Status=ttk.Label(self.frameV4l2Status, text =  "not adjusted!")
        self.labelV4l2Status['font']=self.helv10b
        self.labelV4l2Status['background']='white'
        self.labelV4l2Status['foreground']='red'
        self.labelV4l2Status.place(relx=0.5,rely=1.0,anchor=tk.CENTER)
        self.labelV4l2Status['padding']=(100,0,100,0)
        
        self.labelV4l2Status.grid(row=0,column=0,pady=(5,5),sticky=tk.EW)
        
        self.labelV4l2Refresh=ttk.Label(self.frameV4l2Status)       
        self.labelV4l2Refresh['image']=self.imgRefresh       
        self.labelV4l2Refresh['padding']=(5,5,0,5)       
        self.labelV4l2Refresh.bind("<Button-1>", self.set_v4l2_device)     
        self.labelV4l2Refresh.grid(row=0,column=1)
        
        self.update_gui_frame_v4l2_settings(self)
        
    # =============================================================================   
    
        self.frameVideoStandard=ttk.Frame(self.root)
        self.frameVideoStandard['relief'] = 'sunken'
        self.frameVideoStandard['padding'] = (5,5,5,5)
        self.frameVideoStandard.grid(row=1,column=0,padx=2,pady=2,sticky=tk.NSEW)
        
        labelVideoStandard=ttk.Label(self.frameVideoStandard)       
        labelVideoStandard['text']="Video Standard"  
        labelVideoStandard['font']=self.helv10b
        labelVideoStandard['justify']="center"
        labelVideoStandard['padding']=(144,0,140,0)
        labelVideoStandard['background']='#1e94f1'
        labelVideoStandard['foreground']='white'
        labelVideoStandard.grid(row=0,column=0)
        labelVideoStandard.grid(row=0,column=0,columnspan=2,padx=(2,2),pady=(2,6),sticky=tk.EW) 
        
        self.videoStandardVar=IntVar()
        self.videoStandardVar.set(self.m036.vdVideoStandard)
        self.comboboxVideoStandards = ttk.Combobox(self.frameVideoStandard)
        self.comboboxVideoStandards.grid(row=1,column=0,columnspan=2,padx=(40,40),sticky=tk.EW)
        self.comboboxVideoStandards['state'] = 'readonly'
        self.comboboxVideoStandards['justify'] = 'center'
        self.comboboxVideoStandards['font'] = self.helv10
        self.comboboxVideoStandards.bind('<<ComboboxSelected>>', self.video_standard_selected)        
        self.comboboxVideoStandards['values']=self.videoStandardList
        if self.indexVideoStandard >= 0 :
            self.comboboxVideoStandards.current(newindex=self.indexVideoStandard)
        else:
            self.comboboxVideoStandards.current(newindex=None)
        
    # =============================================================================  

        self.frameCaptureSettings=ttk.Frame(self.root)
        self.frameCaptureSettings['relief'] = 'sunken'
        self.frameCaptureSettings['padding'] = (5,5,5,5)
        self.frameCaptureSettings.grid(row=2,column=0,padx=2,pady=2,sticky=tk.NSEW)
        
        labelCaptureSettings=ttk.Label(self.frameCaptureSettings)       
        labelCaptureSettings['text']="Capture Settings"  
        labelCaptureSettings['font']=self.helv10b
        labelCaptureSettings['justify']="center"
        labelCaptureSettings['padding']=(138,0,138,0)
        labelCaptureSettings['background']='#1e94f1'
        labelCaptureSettings['foreground']='white'
        labelCaptureSettings.grid(row=0,column=0,columnspan=3,padx=(2,0),pady=(2,6),sticky=tk.EW) 
        
        labelCaptureSize=ttk.Label(self.frameCaptureSettings)
        labelCaptureSize['text']="Size:"
        labelCaptureSize.grid(row=1,column=0, padx=(0,10), sticky=tk.E)
        
        self.frameCaptureSize=ttk.Frame(self.frameCaptureSettings)
        self.frameCaptureSize['relief'] = 'sunken'
        self.frameCaptureSize['padding'] = (5,5,5,5)
        self.frameCaptureSize.grid(row=1,column=1,padx=2,pady=2,sticky=tk.NSEW)
        
        self.captureSizeVar=IntVar()
        if self.m036.videoCaptureSize.width == 720 and self.m036.videoCaptureSize.height >= 560  :
            self.captureSizeVar.set(0)
        elif self.m036.videoCaptureSize.width == 720 and self.m036.videoCaptureSize.height == 480 :
            self.captureSizeVar.set(0)    
        elif self.m036.videoCaptureSize.width == 640 and self.m036.videoCaptureSize.height == 480 :
            self.captureSizeVar.set(1) 
        elif self.m036.videoCaptureSize.width == 320 and self.m036.videoCaptureSize.height == 240 :      
            self.captureSizeVar.set(2)
        else:
            self.captureSizeVar.set(1)
        
        self.radiobuttonSize0 = ttk.Radiobutton(self.frameCaptureSize, text='720x576', variable=self.captureSizeVar, value=0, command=self.capture_size_selected)
        self.radiobuttonSize1 = ttk.Radiobutton(self.frameCaptureSize, text='640x480', variable=self.captureSizeVar, value=1, command=self.capture_size_selected)
        self.radiobuttonSize2 = ttk.Radiobutton(self.frameCaptureSize, text='320x240', variable=self.captureSizeVar, value=2, command=self.capture_size_selected)
        
        print("Video size class: ",self.videoSizeClass)
        if self.videoSizeClass == "480" :
            self.radiobuttonSize0["text"]="720x480"
        
        self.radiobuttonSize0.grid(row=0,column=1, padx=(10,0), sticky=tk.W)
        self.radiobuttonSize1.grid(row=0,column=2, padx=(10,0), sticky=tk.W)
        self.radiobuttonSize2.grid(row=0,column=3, padx=(10,0), sticky=tk.W)
        
     # ===========================       
     
        labelCaptureStart=ttk.Label(self.frameCaptureSettings)
        labelCaptureStart['text']="Start:"
        
        labelCaptureStart.grid(row=2,column=0, padx=(0,10), sticky=tk.NE)
         
        self.kCanvas=1.0 
        self.initCanvases()         
        self.setMaxCapture()    
        
        self.m036.video_get_capture()
        self.m036.video_print_capture()
        
        self.captureX=self.m036.videoCaptureStart.x
        self.captureY=self.m036.videoCaptureStart.y
        self.captureWidth=self.m036.videoCaptureSize.width
        self.captureHeight=self.m036.videoCaptureSize.height
        
        self.rect0=None 
        self.rect1=None 

        print("Capture frame: {}x{}+{}+{}".format(self.captureWidth,self.captureHeight,self.captureX,self.captureY))
        
        # =========================== 
        
        self.frameCaptureStart576=ttk.Frame(self.frameCaptureSettings)
        self.frameCaptureStart576['relief'] = 'sunken'
        self.frameCaptureStart576['padding'] = (5,5,5,5)
        self.frameCaptureStart576.grid(row=2,column=1,padx=2,pady=2,sticky=tk.NSEW)      
     
        self.frameCaptureStart576.columnconfigure(0,minsize=self.canvasWidth576)
        self.frameCaptureStart576.columnconfigure(1,minsize=30)
        self.frameCaptureStart576.rowconfigure(0,minsize=30)
        self.frameCaptureStart576.rowconfigure(1,minsize=self.canvasHeight576)
    
        self.labelX576=ttk.Label(self.frameCaptureStart576)
        self.labelX576['text']='0'
            
        self.X576 = IntVar()
        self.scaleX576=ttk.Scale(self.frameCaptureStart576, variable = self.X576, from_ = self.X0_576, to = self.X1_576)
        self.scaleX576.grid(row=0,column=0,sticky=tk.EW,pady=(15,0))
        self.scaleX576.set(self.captureX)
        self.labelX576.place(in_=self.scaleX576, bordermode='outside', x=0, y=0, anchor='s')

        self.canvas576=tk.Canvas(self.frameCaptureStart576,width=self.canvasWidth576,height=self.canvasHeight576)
        self.canvas576.grid(row=1,column=0,sticky=tk.NW)
        self.rect0=self.canvas576.create_rectangle(self.sliderLength/2, self.sliderLength/2, self.canvasWidth576-self.sliderLength/2+2, self.canvasHeight576-self.sliderLength/2+2, fill = "white")
        
        self.Y576 = IntVar()
        self.scaleY576=ttk.Scale(self.frameCaptureStart576,orient='vertical', variable=self.Y576, from_ = self.Y0_576, to = self.Y1_576 )
        self.scaleY576.grid(row=1,column=1,sticky=tk.NS,padx=(0,20))
        self.scaleY576.set(self.captureY)
    
        self.labelY576=ttk.Label(self.frameCaptureStart576)
        self.labelY576['text']='0'
        self.labelY576.place(in_=self.scaleY576, bordermode='outside', x=0, y=0, anchor='s')
        
        self.scaleX576['command']=self.capture_changed_576
        self.scaleY576['command']=self.capture_changed_576
       
       # =========================== 
        
        self.frameCaptureStart480=ttk.Frame(self.frameCaptureSettings)
        self.frameCaptureStart480['relief'] = 'sunken'
        self.frameCaptureStart480['padding'] = (5,5,5,5)
        self.frameCaptureStart480.grid(row=2,column=1,padx=2,pady=2,sticky=tk.NSEW)      
     
        self.frameCaptureStart480.columnconfigure(0,minsize=self.canvasWidth480)
        self.frameCaptureStart480.columnconfigure(1,minsize=30)
        self.frameCaptureStart480.rowconfigure(0,minsize=30)
        self.frameCaptureStart480.rowconfigure(1,minsize=self.canvasHeight480)
    
        self.labelX480=ttk.Label(self.frameCaptureStart480)
        self.labelX480['text']='0'
            
        self.X480 = IntVar()
        self.scaleX480=ttk.Scale(self.frameCaptureStart480, variable = self.X480, from_ = self.X0_480, to = self.X1_480)
        self.scaleX480.grid(row=0,column=0,sticky=tk.EW,pady=(15,0))
        self.scaleX480.set(self.captureX)
        self.labelX480.place(in_=self.scaleX480, bordermode='outside', x=0, y=0, anchor='s')

        self.canvas480=tk.Canvas(self.frameCaptureStart480,width=self.canvasWidth480,height=self.canvasHeight480)
        self.canvas480.grid(row=1,column=0,sticky=tk.NW)
        self.rect0=self.canvas480.create_rectangle(self.sliderLength/2, self.sliderLength/2, self.canvasWidth480-self.sliderLength/2+2, self.canvasHeight480-self.sliderLength/2+2, fill = "white")
        
        Y480 = IntVar()
        self.scaleY480=ttk.Scale(self.frameCaptureStart480,orient='vertical', variable=Y480, from_ = self.Y0_480, to = self.Y1_480 )
        self.scaleY480.grid(row=1,column=1,sticky=tk.NS,padx=(0,20))
        self.scaleY480.set(self.captureY)
    
        self.labelY480=ttk.Label(self.frameCaptureStart480)
        self.labelY480['text']='0'
        self.labelY480.place(in_=self.scaleY480, bordermode='outside', x=0, y=0, anchor='s')
        
        self.scaleX480['command']=self.capture_changed_480
        self.scaleY480['command']=self.capture_changed_480
             
    # =============================================================================  
    
        self.frameVideoSettings=ttk.Frame(self.root)
        self.frameVideoSettings['relief'] = 'sunken'
        self.frameVideoSettings['padding'] = (5,5,5,5)
        self.frameVideoSettings.grid(row=3,column=0,padx=2,pady=2,sticky=tk.NSEW)
        self.frameVideoSettings.columnconfigure(0, weight=5)
        self.frameVideoSettings.columnconfigure(1, weight=95)
        
        labelVideoSettings=ttk.Label(self.frameVideoSettings)       
        labelVideoSettings['text']="Video Settings"  
        labelVideoSettings['font']=self.helv10b
        labelVideoSettings['justify']="center"
        labelVideoSettings['padding']=(140,0,140,0)
        labelVideoSettings['background']='#1e94f1'
        labelVideoSettings['foreground']='white'
        labelVideoSettings.grid(row=0,column=0,columnspan=3,padx=(2,0),pady=(2,6),sticky=tk.EW) 
        
        brightness = DoubleVar()
        labelBrightness=ttk.Label(self.frameVideoSettings, text = "Brightness")
        labelBrightness.grid(row=1,column=0,padx=5,pady=2,sticky=tk.SE)
        self.scaleBrightness = Scale( self.frameVideoSettings, variable = brightness, from_ = 0, to = 1.0, resolution=0.01, orient = HORIZONTAL, command = self.brightness_changed)  
        self.scaleBrightness.grid(row=1,column=1,sticky=tk.EW)
        self.scaleBrightness.set(self.m036.colorBrightness)
        labelBrightnessDefault=ttk.Label(self.frameVideoSettings)
        labelBrightnessDefault['image']=self.imgDefault
        labelBrightnessDefault['padding']=(15,0,5,2)
        labelBrightnessDefault.bind("<Button-1>", self.default_brightness)
        labelBrightnessDefault.grid(row=1,column=2,sticky=tk.SE)
        
        contrast = DoubleVar()
        labelContrast=ttk.Label(self.frameVideoSettings, text = "Contrast")
        labelContrast.grid(row=2,column=0,padx=5,pady=2,sticky=tk.SE)
        self.scaleContrast = Scale( self.frameVideoSettings, variable = contrast, from_ = 0, to = 1.0, resolution=0.01, orient = HORIZONTAL, command = self.contrast_changed) 
        self.scaleContrast.grid(row=2,column=1,sticky=tk.EW)
        self.scaleContrast.set(self.m036.colorContrast)
        labelContrastDefault=ttk.Label(self.frameVideoSettings)
        labelContrastDefault['image']=self.imgDefault
        labelContrastDefault['padding']=(15,0,5,2)
        labelContrastDefault.bind("<Button-1>", self.default_contrast)
        labelContrastDefault.grid(row=2,column=2,sticky=tk.SE)

        hue = DoubleVar()
        labelHue=ttk.Label(self.frameVideoSettings, text = "Hue")
        labelHue.grid(row=3,column=0,padx=5,pady=2,sticky=tk.SE)
        self.scaleHue = Scale( self.frameVideoSettings, variable = hue, from_ = -0.5, to = 0.5, resolution=0.01, orient = HORIZONTAL, command = self.hue_changed)
        self.scaleHue.grid(row=3,column=1,sticky=tk.EW)
        self.scaleHue.set(self.m036.colorHue)
        labelHueDefault=ttk.Label(self.frameVideoSettings)
        labelHueDefault['image']=self.imgDefault
        labelHueDefault['padding']=(15,0,5,2)
        labelHueDefault.bind("<Button-1>", self.default_hue)
        labelHueDefault.grid(row=3,column=2,sticky=tk.SE)       
        
        saturation = DoubleVar()
        labelSaturation=ttk.Label(self.frameVideoSettings, text = "Saturation")
        labelSaturation.grid(row=4,column=0,padx=5,pady=2,sticky=tk.SE)
        self.scaleSaturation = Scale( self.frameVideoSettings, variable = saturation, from_ = 0, to = 1.0, resolution=0.01, orient = HORIZONTAL, command = self.saturation_changed)  
        self.scaleSaturation.grid(row=4,column=1,sticky=tk.EW)
        self.scaleSaturation.set(self.m036.colorSaturation)
        labelSaturationDefault=ttk.Label(self.frameVideoSettings)
        labelSaturationDefault['image']=self.imgDefault
        labelSaturationDefault['padding']=(15,0,5,2)
        labelSaturationDefault.bind("<Button-1>", self.default_saturation)
        labelSaturationDefault.grid(row=4,column=2,sticky=tk.SE)

    # =============================================================================  
    
        self.frameAudioControl=ttk.Frame(self.root)
        self.frameAudioControl['relief'] = 'sunken'
        self.frameAudioControl['padding'] = (5,5,5,5)
        self.frameAudioControl.grid(row=4,column=0,padx=2,pady=2,sticky=tk.NSEW)
   
        self.frameAudioControl.columnconfigure(0, weight=5)
        self.frameAudioControl.columnconfigure(1, weight=95)
        
        labelAudioControl=ttk.Label(self.frameAudioControl)       
        labelAudioControl['text']="Audio Control"  
        labelAudioControl['font']=self.helv10b
        labelAudioControl['justify']="center"
        labelAudioControl['padding']=(140,0,140,0)
        labelAudioControl['background']='#1e94f1'
        labelAudioControl['foreground']='white'
        labelAudioControl.grid(row=0,column=0,columnspan=2,padx=(2,0),pady=(2,6),sticky=tk.EW) 

        labelAudioSource=ttk.Label(self.frameAudioControl)
        labelAudioSource['text']="Audio source:"
        labelAudioSource.grid(row=1,column=0, padx=(0,10), pady=(10,0),sticky=tk.NE)

        self.comboboxAudioSources = ttk.Combobox(self.frameAudioControl)
        self.comboboxAudioSources.grid(row=1, column=1, columnspan=2,  padx=2, pady=2, ipady=2, sticky=tk.EW)
        self.comboboxAudioSources['state'] = 'readonly'
        self.comboboxAudioSources['justify'] = 'center'
        self.comboboxAudioSources['font'] = self.helv10
        self.comboboxAudioSources.bind('<<ComboboxSelected>>', self.audio_source_selected)        
        self.comboboxAudioSources['values']=self.audioSources.descriptionList
        if self.audioSources.selected >= 0 :
            self.comboboxAudioSources.current(newindex=self.audioSources.selected)
        else:
            self.comboboxAudioSources.current(newindex=None)

        self.sourceVolume=DoubleVar()
        self.labelSourceVolume=ttk.Label(self.frameAudioControl,text="Source volume:")
        self.labelSourceVolume.grid(row=2,column=0,padx=(0,10), pady=(20,0),sticky=tk.NE)
        self.scaleSourceVolume=tk.Scale(self.frameAudioControl, variable = self.sourceVolume, from_ = 0, to = 1.5, resolution=0.05, orient = HORIZONTAL, command = self.set_audio_source_volume)
        self.scaleSourceVolume.grid(row=2,column=1,sticky=tk.EW)

        if self.audioControl.n_channels == 2 :
            self.scaleSourceVolume.set((self.audioControl.volume[0]+self.audioControl.volume[1])/2)
        else :
            self.scaleSourceVolume.set(self.audioControl.volume)

        self.playerVolume=DoubleVar()
        self.labelPlayerVolume=ttk.Label(self.frameAudioControl,text="Player volume:")
        self.labelPlayerVolume.grid(row=3,column=0,padx=(0,10), pady=(20,0),sticky=tk.NE)
        self.scalePlayerVolume=tk.Scale(self.frameAudioControl, variable = self.playerVolume, from_ = 0, to = 1.5, resolution=0.05, orient = HORIZONTAL, command = self.set_player_volume)
        self.scalePlayerVolume.grid(row=3,column=1,sticky=tk.EW)

        self.scalePlayerVolume.set(self.vlcApp.audioPlayer.audio_get_volume()/100)

    # ============================================================================= 

        self.root.wait_visibility()
        self.root.grab_set()
        self.root.transient(parent)
        self.parent = parent   

        self.set_video_size_class()
        
        self.update_gui_frame_v4l2_settings(event=None)
        self.update_gui_frame_capture(event=None)

    # ============================================================================= 
     
    def set_video_size_class(self):
        self.m036.video_decoder_get_video_standard()
        self.m036.video_decoder_status_video_standard()
        if self.m036.vdVideoStandard==tvp5150a.VIDEO_STANDARD_NTSC_M_J :
            self.videoSizeClass="480"            
        if self.m036.vdVideoStandard==tvp5150a.VIDEO_STANDARD_PAL_B_G_H_I_N :
            self.videoSizeClass="576"      
        if self.m036.vdVideoStandard==tvp5150a.VIDEO_STANDARD_PAL_M :
            self.videoSizeClass="480"             
        if self.m036.vdVideoStandard==tvp5150a.VIDEO_STANDARD_PAL_Nc :
            self.videoSizeClass="576"
        if self.m036.vdVideoStandard==tvp5150a.VIDEO_STANDARD_NTSC :
            self.videoSizeClass="480"  
        if self.m036.vdVideoStandard==tvp5150a.VIDEO_STANDARD_SECAM :
            self.videoSizeClass="576"
    
    def update_gui_frame_capture(self,event):
        if self.videoSizeClass == "576" :
            self.radiobuttonSize0['text'] = "720x576"
            self.drawVideoFrame576()
        else:
            self.radiobuttonSize0['text'] = "720x480"
            self.drawVideoFrame480()
             
    def update_gui_frame_v4l2_settings(self,event):
        deviceID=''.join(filter(str.isdigit,self.entryV4l2Device.get()))
        if (deviceID):
            print("DeviceID",deviceID)
            v4l2Device='/dev/video{}'.format(deviceID)
            self.entryV4l2Device.delete(0,END)
            self.entryV4l2Device.insert(0,v4l2Device)
            self.streamDevice.v4l2_device=v4l2Device
            self.streamDevice.pixel_format=PixelFormat.YUYV
            self.streamDevice.frame_width = self.m036.videoCaptureSize.width 
            self.streamDevice.frame_height = self.m036.videoCaptureSize.height 
                        
            self.streamDevice.get()
            if self.streamDevice.is_got :
                print("Card:",self.streamDevice.info.card)
                print("Width:",self.streamDevice.frame_width)
                print("Height:",self.streamDevice.frame_height)
                print("Format:",self.streamDevice.pixel_format.name)
                print("Capabilities:",self.streamDevice.info.capabilities)
                
                self.labelV4l2DeviceName['text'] = self.streamDevice.info.card
                self.labelV4l2Width['text'] = self.streamDevice.frame_width
                self.labelV4l2Height['text'] = self.streamDevice.frame_height
                self.labelV4l2Format['text'] = self.streamDevice.pixel_format.name
                self.streamDevice.is_set=True
                if self.streamDevice.frame_width != self.m036.videoCaptureSize.width :
                    self.streamDevice.is_set=False
                if self.streamDevice.frame_height != self.m036.videoCaptureSize.height :
                    self.streamDevice.is_set=False
                if self.streamDevice.pixel_format != PixelFormat.YUYV :
                    self.streamDevice.is_set=False
        else:
          self.streamDevice.is_got = False 
          self.streamDevice.is_set = False  
        
        if not self.streamDevice.is_got :
            self.labelV4l2DeviceName['text'] = '?'
            self.labelV4l2Width['text'] = '?'
            self.labelV4l2Height['text'] = '?'
            self.labelV4l2Format['text'] = '?'
            self.streamDevice.is_set = False
        
        if self.streamDevice.is_set :
            self.labelV4l2Status['text']='adjusted'
            self.labelV4l2Status['foreground']='green'
            self.tvM036Settings.v4l2Device=v4l2Device
        else :
            self.labelV4l2Status['text']='not adjusted!'
            self.labelV4l2Status['foreground']='red'
                
        if self.streamDevice.is_set :
            self.vlcApp.videoPlayer.stop()
            mediaVideo=self.vlcApp.vlcInstance.media_new(self.vlcApp.videoMedia)
            self.vlcApp.videoPlayer.set_media(mediaVideo)
                
            widthCropped=self.m036.videoCaptureSize.width-self.tvM036Settings.vlcCropLeft-self.tvM036Settings.vlcCropRight
            heightCropped=self.m036.videoCaptureSize.height-self.tvM036Settings.vlcCropTop-self.tvM036Settings.vlcCropBottom
            cropGeometry="{w}x{h}+{l}+{t}".format(w=widthCropped,h=heightCropped,l=self.tvM036Settings.vlcCropLeft,t=self.tvM036Settings.vlcCropTop)

            vScale=self.tvM036Settings.guiVideoHeight/heightCropped

            self.vlcApp.videoPlayer.video_set_scale(vScale)
            self.vlcApp.videoPlayer.video_set_crop_geometry(cropGeometry)
            self.vlcApp.videoPlayer.play()
            
    def set_v4l2_device(self,event):
        
        self.streamer.terminate()
        
        self.streamDevice.frame_width=self.m036.videoCaptureSize.width
        self.streamDevice.frame_height=self.m036.videoCaptureSize.height
        self.streamDevice.pixel_format=PixelFormat.YUYV
        self.streamDevice.set() 
        self.update_gui_frame_v4l2_settings(self)    
        
        self.streamer.start(self.m036.videoCaptureSize.width,self.m036.videoCaptureSize.height)
    
    def video_standard_selected(self,event):
        
        self.indexVideoStandard=self.comboboxVideoStandards.current()
        print("Selected video standard:",self.videoStandardList[self.indexVideoStandard])
        
        self.m036.vdVideoStandard=int(self.indexVideoStandard*2)
        self.m036.vdi_set_video_standard(self.m036.vdVideoStandard)
        time.sleep(1)
        self.m036.video_decoder_status_video_standard()

        # -- Video size class ---------
        self.set_video_size_class()
 
        if self.videoSizeClass == "576" :
            self.scaleY576.set(0)
            self.Y=0
        if self.videoSizeClass == "480" :
            self.scaleY480.set(0)
            self.Y=0

        self.setMaxCapture()
        if self.videoSizeClass == "576" :
            self.frameCaptureStart480.grid_forget()
            self.drawVideoFrame576() 
            self.frameCaptureStart576.grid(row=2,column=1,sticky=tk.EW)   
        else :
            self.frameCaptureStart576.grid_forget()
            self.drawVideoFrame480()
            self.frameCaptureStart480.grid(row=2,column=1,sticky=tk.EW)

        self.tvM036Settings.m036VideoStandard=self.m036.vdVideoStandard
        print("Video standard changed:",self.m036.vdVideoStandard) 
        
        self.update_gui_frame_capture(event=None)
        self.tvM036.update_display()
        
    def capture_size_selected(self):
        
        captureSize=self.captureSizeVar.get()
        print("Capture size #",self.captureSizeVar.get())
        
        if captureSize == 0 :
            
            self.captureX=0
            self.captureY=0

            self.captureWidth=720
            if self.videoSizeClass == "576" :
                self.captureHeight=576
                self.scaleX576.set(self.captureX)
                self.scaleY576.set(self.captureY)
                self.capture_changed_576(self)
            else :
                self.captureHeight=480
                self.scaleX480.set(self.captureX)
                self.scaleY480.set(self.captureY)           
                self.capture_changed_480(self)
            
            if self.videoSizeClass == "576" :
                x0=int(self.scaleX576.get())
                y0=int(self.scaleY576.get())
            else :
                x0=int(self.scaleX480.get())
                y0=int(self.scaleY480.get())
            w=self.captureWidth
            h=self.captureHeight
            x1=x0 + w
            y1=y0 + h
    
        if captureSize == 1 :
            
            self.captureWidth=640
            self.captureHeight=480
            
            if self.captureX + self.captureWidth > 720 :
                self.captureX=720-self.captureWidth
            
            if self.videoSizeClass == "576" :
                if self.captureY + self.captureHeight > 576 :
                    self.captureY=576-self.captureHeight
                self.scaleX576.set(self.captureX)
                self.scaleY576.set(self.captureY)
                self.capture_changed_576(self)
            else :
                if self.captureY + self.captureHeight > 480 :
                    self.captureY=480-self.captureHeight
                self.scaleX480.set(self.captureX)
                self.scaleY480.set(self.captureY)           
                self.capture_changed_480(self)                   
       
            if self.videoSizeClass == "576" :
                x0=int(self.scaleX576.get())
                y0=int(self.scaleY576.get())
            else :
                x0=int(self.scaleX480.get())
                y0=int(self.scaleY480.get())
            w=self.captureWidth
            h=self.captureHeight
            x1=x0 + w
            y1=y0 + h            
            
        if captureSize == 2 :
            
            self.captureWidth=320
            self.captureHeight=240
            
            if self.captureX + self.captureWidth > 720 :
                self.captureX=720-self.captureWidth
            
            
            if self.videoSizeClass == "576" :
                if self.captureY + self.captureHeight > 576 :
                    self.captureY=576-self.captureHeight
                self.scaleX576.set(self.captureX)
                self.scaleY576.set(self.captureY)
                self.capture_changed_576(self)
            else :
                if self.captureY + self.captureHeight > 480 :
                    self.captureY=480-self.captureHeight
                self.scaleX480.set(self.captureX)
                self.scaleY480.set(self.captureY)           
                self.capture_changed_480(self)                   
       
            if self.videoSizeClass == "576" :
                x0=int(self.scaleX576.get())
                y0=int(self.scaleY576.get())
            else :
                x0=int(self.scaleX480.get())
                y0=int(self.scaleY480.get())
                
            w=self.captureWidth
            h=self.captureHeight
            x1=x0 + w
            y1=y0 + h 

        print("{}x{}+{}+{}".format(w,h,x0,y0))
    
        self.m036.video_set_capture(x0,y0,w,h)
        self.m036.video_get_capture()
          
        #---------------------------------  
        
        self.vlcApp.videoPlayer.stop()
        self.m036.vdi_stop_capturing()
    
        self.streamer.terminate()
        
        self.set_v4l2_device(event=None)

        self.streamer.start(self.captureWidth, self.captureHeight)

        self.m036.video_get_capture()
        self.m036.vdi_start_capturing()
        
        #---------------------------------  
        
        print("Capture width:",self.m036.videoCaptureSize.width) 
        print("Capture height:",self.m036.videoCaptureSize.height) 
    
        self.vlcApp.videoPlayer.play()
        self.set_v4l2_device(event=None)
    
    # =============================================================================
    
    def initCanvases(self):
        self.sliderLength=30
        w=self.kCanvas*240 
        h=self.kCanvas*162
        self.canvasWidth576=w+self.sliderLength
        self.canvasHeight576=h+self.sliderLength
        h=self.kCanvas*135
        self.canvasWidth480=w+self.sliderLength
        self.canvasHeight480=h+self.sliderLength
        self.rect1_576=None
        self.rect1_480=None

    def setMaxCapture(self):    
        self.X0_576=0
        self.X1_576=720
        self.Y0_576=0
        self.Y1_576=576
        self.deltaX576=self.X1_576-self.X0_576
        self.deltaY576=self.Y1_576-self.Y0_576
        self.X0_480=0
        self.X1_480=720
        self.Y0_480=0
        self.Y1_480=480
        self.deltaX480=self.X1_480-self.X0_480
        self.deltaY480=self.Y1_480-self.Y0_480
    
    def toCanvasX576(self, X):
        x = ( (self.scaleX576.winfo_width() - self.sliderLength) / self.deltaX576) * (X - self.X0_576) + self.sliderLength / 2 
        return x
    def toCanvasY576(self, Y):
        y = ( (self.scaleY576.winfo_height() - self.sliderLength) / self.deltaY576)  * (Y - self.Y0_576) + self.sliderLength / 2
        return y
    
    def toCanvasX480(self, X):
        x = ( (self.scaleX480.winfo_width() - self.sliderLength) / self.deltaX480) * (X - self.X0_480) + self.sliderLength / 2 
        return x
    def toCanvasY480(self, Y):
        y = ( (self.scaleY480.winfo_height() - self.sliderLength) / self.deltaY480)  * (Y - self.Y0_480) + self.sliderLength / 2
        return y  
    

    def showScaleValues(self,event):
        if self.videoSizeClass == "576" :
            X=self.scaleX576.get()
            Y=self.scaleY576.get()
    
            self.labelX576['text']="{}".format(int(X))
            self.labelY576['text']="{}".format(int(Y))
            
            x=self.toCanvasX576(X)
            half_width = self.labelX576.winfo_width() / 2
            if x + half_width > self.scaleX576.winfo_width():
                x = self.scaleX576.winfo_width() - half_width
            elif x - half_width < 0:
                x = half_width
            self.labelX576.place_configure(x=x)
            
            x=self.scaleY576.winfo_width() + self.labelY576.winfo_width()/2 + 4
            y = self.toCanvasY576(float(Y))  + self.sliderLength/2 
            half_heigth = self.labelY576.winfo_height() / 2
            y=y-half_heigth+2
            self.labelY576.place_configure(x=x,y=y)  
        else:
            X=self.scaleX480.get()
            Y=self.scaleY480.get()
            self.labelX480['text']="{}".format(int(X))
            self.labelY480['text']="{}".format(int(Y))
            
            x=self.toCanvasX480(X)
            half_width = self.labelX480.winfo_width() / 2
            if x + half_width > self.scaleX480.winfo_width():
                x = self.scaleX480.winfo_width() - half_width
            elif x - half_width < 0:
                x = half_width
            self.labelX480.place_configure(x=x)
            
            x=self.scaleY480.winfo_width() + self.labelY480.winfo_width()/2 + 4
            y = self.toCanvasY480(float(Y))  + self.sliderLength/2 
            half_heigth = self.labelY480.winfo_height() / 2
            y=y-half_heigth+2
            self.labelY480.place_configure(x=x,y=y)  

    def drawVideoFrame576(self):
        self.showScaleValues(self)
        X=self.scaleX576.get()
        Y=self.scaleY576.get()        
        X1=X+self.captureWidth
        Y1=Y+self.captureHeight            
        x0=self.toCanvasX576(X)
        y0=self.toCanvasY576(Y)
        x1=self.toCanvasX576(X1)
        y1=self.toCanvasY576(Y1)        
        
        self.labelX576['text']="{}".format(int(X))
        self.labelY576['text']="{}".format(int(Y))        
    
        if self.rect1_576:
            self.canvas576.delete(self.rect1_576)
        self.rect1_576=self.canvas576.create_rectangle(x0, y0, x1, y1, fill = "red")

    def drawVideoFrame480(self):
        self.showScaleValues(self)
        X=self.scaleX480.get()
        Y=self.scaleY480.get()
        X1=X+self.captureWidth
        Y1=Y+self.captureHeight
        x0=self.toCanvasX480(X)
        y0=self.toCanvasY480(Y)
        x1=self.toCanvasX480(X1)
        y1=self.toCanvasY480(Y1)        
        
        self.labelX480['text']="{}".format(int(X))
        self.labelY480['text']="{}".format(int(Y))
        
        if self.rect1_480:
            self.canvas480.delete(self.rect1_480)
        self.rect1_480=self.canvas480.create_rectangle(x0, y0, x1, y1, fill = "red")
        
    def capture_changed_576 (self,event):
        self.X576=int(self.scaleX576.get())
        self.Y576=int(self.scaleY576.get())
        if self.X576 + self.captureWidth > self.X1_576 :
            self.scaleX576['command']=self.dummy_callback
            self.X576=self.X1_576 - self.captureWidth
            self.scaleX576.set(self.X576)
            self.scaleX576['command']=self.capture_changed_576
        if self.Y576 + self.captureHeight > self.Y1_576 :
            self.scaleY576['command']=self.dummy_callback
            self.Y576=self.Y1_576 - self.captureHeight
            self.scaleY576.set(self.Y576)
            self.scaleY576['command']=self.capture_changed_576
        self.drawVideoFrame576()
        
        x0=int(self.X576)
        y0=int(self.Y576)
        x1=int(self.X576) + self.captureWidth
        y1=int(self.Y576) + self.captureHeight    
        w=x1-x0
        h=y1-y0
        print("{}x{}+{}+{}".format(w,h,x0,y0))
        self.m036.video_set_capture(x0,y0,w,h)
        self.m036.video_get_capture()
        
    def capture_changed_480 (self,event):
        self.X480=self.scaleX480.get()
        self.Y480=self.scaleY480.get()
        if self.X480 + self.captureWidth > self.X1_480 :
            self.scaleX480['command']=self.dummy_callback
            self.X480=self.X1_480 - self.captureWidth
            self.scaleX480.set(self.X480)
            self.scaleX480['command']=self.capture_changed_480
        if self.Y480 + self.captureHeight > self.Y1_480 :
            self.scaleY480['command']=self.dummy_callback
            self.Y480=self.Y1_480 - self.captureHeight
            self.scaleY480.set(self.Y480)
            self.scaleY480['command']=self.capture_changed_480
        self.drawVideoFrame480()
        
        x0=int(self.X480)
        y0=int(self.Y480)
        x1=int(self.X480) + self.captureWidth
        y1=int(self.Y480) + self.captureHeight
        w=x1-x0
        h=y1-y0
        print("{}x{}+{}+{}".format(w,h,x0,y0))
        self.m036.video_set_capture(x0,y0,w,h)
        self.m036.video_get_capture()
    
    def dummy_callback(self,event):
        pass
    
    # =============================================================================     
    
    def brightness_changed(self,event):
        self.m036.colorBrightness=self.scaleBrightness.get()
        self.m036.video_decoder_set_brightness(self.m036.colorBrightness)
    def default_brightness(self,event):
        self.m036.colorBrightness=self.m036.colorBrightness0
        self.m036.video_decoder_set_brightness(self.m036.colorBrightness)
        self.scaleBrightness.set(self.m036.colorBrightness)
        
    def contrast_changed(self,event):
        self.m036.colorContrast=self.scaleContrast.get()
        self.m036.video_decoder_set_contrast(self.m036.colorContrast)
    def default_contrast(self,event):
        self.m036.colorContrast=self.m036.colorContrast0
        self.m036.video_decoder_set_contrast(self.m036.colorContrast)
        self.scaleContrast.set(self.m036.colorContrast)    
        
    def hue_changed(self,event):
        self.m036.colorHue=self.scaleHue.get()
        self.m036.video_decoder_set_hue(self.m036.colorHue)
    def default_hue(self,event):
        self.m036.colorHue=self.m036.colorHue0
        self.m036.video_decoder_set_hue(self.m036.colorHue)
        self.scaleHue.set(self.m036.colorHue)
        
    def saturation_changed(self,event):
        self.m036.colorSaturation=self.scaleSaturation.get()
        self.m036.video_decoder_set_saturation(self.m036.colorSaturation)
    def default_saturation(self,event):
        self.m036.colorSaturation=self.m036.colorSaturation0
        self.m036.video_decoder_set_saturation(self.m036.colorSaturation)
        self.scaleSaturation.set(self.m036.colorSaturation)

    # =============================================================================
    
    def set_audio_source_volume(self,event):
        sourceVolume=self.scaleSourceVolume.get()
        print("Source volume:",sourceVolume)
        self.audioControl.set_volume(sourceVolume)
        self.tvM036Settings.audioSourceVolume=sourceVolume
        
    def set_player_volume(self,event):
        playerVolume=int(self.scalePlayerVolume.get()*100)
        print("Player volume:",playerVolume)
        self.vlcApp.audioPlayer.audio_set_volume(playerVolume)
        self.tvM036Settings.playerVolume=playerVolume

    def audio_source_selected(self,event):
        print(self.comboboxAudioSources.current())
        audioSourceName=self.audioSources.nameList[self.comboboxAudioSources.current()]
        self.audioControl.get_source(audioSourceName)
        if self.audioControl.audioSource :
            self.audioControl.set_volume(0.25)
            self.audioControl.unmute()
            self.audioControl.get_volume()
            self.tvM036Settings.audioSource=audioSourceName
        if self.audioControl.n_channels == 2 :
            self.scaleSourceVolume.set((self.audioControl.volume[0]+self.audioControl.volume[1])/2)
        else :
            self.scaleSourceVolume.set(self.audioControl.volume)
        self.tvM036Settings.audioSourceVolume=self.scaleSourceVolume.get()
        self.audioControl.print_volume()
        audioMedia='pulse://'+audioSourceName
        self.vlcApp.set_audio_media(audioMedia)
        self.vlcApp.audioPlayer.play()

    # =============================================================================   
        
    def handle_key(self, event):
        k = event.keysym
        print("Key: {k}".format(k=k))
        if k == 'Escape':
            self.root.grab_release()
            self.root.destroy()  

#===============================================================================

class DialogChannelRemove(object):
    def __init__(self, parent,tvChannels):
        self.yesNo = 'No'
        self.root=Toplevel(parent)
        self.root.bind('<Key>', self.key)  
        p1 = PhotoImage(file='icons/tvM036.png')
        self.root.iconphoto(False,p1)  
        self.root.title("Remove channel")
        self.root.resizable(False,False)
      
        self.style = ttk.Style(self.root)
        self.style.theme_use('clam')

        self.helv10b = tkFont.Font(family='Helvetica',size=10, weight='bold')
        
        self.frameChannelRemove=ttk.Frame(self.root)
        self.frameChannelRemove['padding']=(10,10,10,8)
        self.frameChannelRemove['relief'] = 'sunken'
        self.frameChannelRemove['width'] = 302
        self.frameChannelRemove.grid(padx=5, pady=5,sticky=tk.W+tk.N+tk.E+tk.S)
        
        self.frameChannelRemove.columnconfigure(0, minsize=141)
        self.frameChannelRemove.columnconfigure(1, minsize=141)
        
        msg="Are you sure to remove the channel"
        self.labelQuestion1 = ttk.Label(self.frameChannelRemove, text=msg)
        self.labelQuestion1['padding']=(5,5,5,0)
        self.labelQuestion1['font']=self.helv10b
        self.labelQuestion1.grid(row=0,columnspan=2)
        
        msg="{fName} : {freq:6.2f} MHz : {name}" 
        msg=msg.format(fName=tvChannels.channels[tvChannels.channel].frequencyName,freq=tvChannels.channels[tvChannels.channel].frequencyMHz,name=tvChannels.channels[tvChannels.channel].name)
        
        self.labelQuestion2 = ttk.Label(self.frameChannelRemove, text=msg)
        self.labelQuestion2['padding']=(5,0,5,5)
        self.labelQuestion2['font']=self.helv10b
        self.labelQuestion2.grid(row=1,columnspan=2)                
               
        self.buttonYes = ttk.Button(self.frameChannelRemove, text="Yes", command=self.Yes)
        self.buttonYes.focus()
        self.buttonYes.grid(row=2,column=0, padx=10, pady=5, sticky=tk.E)
        
        self.buttonNo = ttk.Button(self.frameChannelRemove, text="No", command=self.No)
        self.buttonNo.grid(row=2,column=1, padx=10, sticky=tk.W)

        self.root.wait_visibility()
        self.root.grab_set()
        self.root.transient(parent)
        self.parent = parent

    def key(self,event):
        k = event.keysym
        print("Key: {k}".format(k=k))
        if k == 'Escape':
            self.root.grab_release()
            self.root.destroy()  

    def Yes(self):
        self.yesNo = "Yes"
        self.root.grab_release()
        self.root.destroy()

    def No(self):
        self.yesNo = "No"
        self.root.grab_release()
        self.root.destroy()

from tvChannels import TvChannel 

class ChannelSettings(object):
    def __init__(self, parent, tvM036, tvChannels, m036, frequencyDict):
        self.tvM036=tvM036              
        self.tvChannels=tvChannels
        self.tvChannel=tvChannels.channels[tvChannels.channel]
        self.m036=m036
        self.frequencyDict=frequencyDict
        
        self.frequencyName=self.tvChannel.frequencyName      
        self.frequencyMHz=self.tvChannel.frequencyMHz   

        self.tvM036.update_display()
#       ==================================================== 
                            
        self.root=Toplevel(parent,padx=4,pady=4)
        self.root.bind('<Key>', self.key)
        p1 = PhotoImage(file='icons/tvM036.png')
        self.root.iconphoto(False,p1)  
        self.root.title("TV Channel Settings") 
        self.root.resizable(False,False)
        
        self.root.rowconfigure(2,minsize=4)
            
        self.style = ttk.Style(self.root)
        self.style.theme_use('clam')    
    
        self.helv10 = tkFont.Font(family='Helvetica',size=10, weight='normal')
    
        self.imgChannelPrev=PhotoImage(file='icons/media-skip-backward.png')
        self.imgDefault=PhotoImage(file='icons/default.png')
        self.imgChannelNext=PhotoImage(file='icons/media-skip-forward.png')
        self.imgChannelRemove=PhotoImage(file='icons/list-remove.png')
        self.imgChannelAdd=PhotoImage(file='icons/list-add.png')
        self.imgChecked=PhotoImage(file='icons/checkmark.png')
        self.imgStop=PhotoImage(file='icons/stop.png')
 
#       ==================================================== 
 
        self.frameMain0 = ttk.Frame(self.root)
        self.frameMain0['relief'] = 'groove'  # flat, groove, raised, ridge, solid, or sunken
        self.frameMain0['padding']=(6,6,6,6)
        self.frameMain0.grid(row=0,sticky=tk.N+tk.E+tk.S+tk.W)
        
        self.frameMain0.columnconfigure(0,minsize=108)
        self.frameMain0.columnconfigure(2,minsize=108)
        
        self.comboboxChannel = ttk.Combobox(self.frameMain0)
        self.comboboxChannel.grid(column=0, row=0, columnspan=3, padx=2, pady=2, ipady=2, sticky=tk.NS+tk.EW)
        self.comboboxChannel['state'] = 'readonly'
        self.comboboxChannel['justify'] = 'center'
        self.comboboxChannel['font'] = self.helv10
        self.comboboxChannel.bind('<<ComboboxSelected>>', self.channel_changed)
       
        frequencyMHz = DoubleVar()
        self.scaleFrequency = Scale( self.frameMain0, variable = frequencyMHz, from_ = -20, to = 20, resolution=1, orient = HORIZONTAL, showvalue=False, command = self.frequency_changed)  
        self.scaleFrequency.grid(row=2,column=0,columnspan=3,sticky=tk.EW)
        self.scaleFrequency.set(0)
    
        self.channelPrevLabel=ttk.Label(self.frameMain0)
        self.channelPrevLabel['image']=self.imgChannelPrev
        self.channelPrevLabel.bind("<Button-1>", self.channel_prev)
        self.channelPrevLabel.grid(row=3,column=0,sticky=tk.W)
        self.channelPrevLabel['padding']=(2,0,0,0)

        labelChannelDefault=ttk.Label(self.frameMain0)
        labelChannelDefault['image']=self.imgDefault
        labelChannelDefault['padding']=(15,0,15,0)
        labelChannelDefault.bind("<Button-1>", self.channel_default)
        labelChannelDefault.grid(row=3,column=1,sticky=tk.SE)
        
        self.channelNextLabel=ttk.Label(self.frameMain0)
        self.channelNextLabel['image']=self.imgChannelNext
        self.channelNextLabel.bind("<Button-1>", self.channel_next)
        self.channelNextLabel.grid(row=3,column=2,sticky=tk.E)
        self.channelNextLabel['padding']=(0,0,2,0)
        
        self.labelChannelFrequency=ttk.Label(self.frameMain0)
        self.labelChannelFrequency['text']="***.** MHz"
        self.labelChannelFrequency.grid(row=4,column=0,columnspan=3,pady=10)
        self.labelChannelFrequency['font'] = self.helv10
        
        self.entryChannelName = ttk.Entry(self.frameMain0)
        self.entryChannelName['width']=24
        self.entryChannelName['font']=self.helv10
        self.entryChannelName['justify']='center'
        self.entryChannelName.grid(row=5,columnspan=3,pady=2,sticky=tk.EW)
        self.entryChannelName.insert(0,self.tvChannels.channels[self.tvChannels.channel].name)

#       ====================================================        

        self.frameMain1 = ttk.Frame(self.root)
        self.frameMain1['relief'] = 'groove'  # flat, groove, raised, ridge, solid, or sunken
        self.frameMain1['padding']=(6,6,6,6)
        self.frameMain1.grid(row=1,sticky=tk.N+tk.E+tk.S+tk.W)
        
        self.frameMain1.columnconfigure(0,minsize=108)
        self.frameMain1.columnconfigure(2,minsize=108)
        
        self.valuesFrequencyList = ["" for i in range(len(self.frequencyDict))] 
        i=0
        for frequencyName in self.frequencyDict:
            item=" {fName} : {freq:6.2f} MHz" 
            self.valuesFrequencyList[i]=item.format(fName=frequencyName,freq=self.frequencyDict[frequencyName])
            i += 1

        self.comboboxFrequency = ttk.Combobox(self.frameMain1)
        self.comboboxFrequency.grid(column=0, row=0, columnspan=3, padx=2, pady=2, ipady=2, sticky=tk.NS+tk.EW)
        self.comboboxFrequency['state'] = 'readonly'
        self.comboboxFrequency['justify'] = 'center'
        self.comboboxFrequency['font'] = self.helv10
        self.comboboxFrequency.bind('<<ComboboxSelected>>', self.frequency_selected)        
        self.comboboxFrequency['values']=self.valuesFrequencyList

        self.scaleFrequency1 = Scale(self.frameMain1, variable = frequencyMHz, from_ = -20, to = 20, resolution=1, orient = HORIZONTAL, showvalue=False, command = self.frequency_changed1)  
        self.scaleFrequency1.grid(row=2,column=0,columnspan=3,sticky=tk.EW)
        self.scaleFrequency1.set(0)
    
        self.labelPrevFrequency=ttk.Label(self.frameMain1)
        self.labelPrevFrequency['image']=self.imgChannelPrev
        self.labelPrevFrequency.bind("<Button-1>", self.frequency_prev)
        self.labelPrevFrequency.grid(row=3,column=0,sticky=tk.W)
        self.labelPrevFrequency['padding']=(2,0,0,0)

        labelFrequencyDefault=ttk.Label(self.frameMain1)
        labelFrequencyDefault['image']=self.imgDefault
        labelFrequencyDefault['padding']=(15,0,15,0)
        labelFrequencyDefault.bind("<Button-1>", self.frequency_default)
        labelFrequencyDefault.grid(row=3,column=1,sticky=tk.SE)

        self.labelNextFrequency=ttk.Label(self.frameMain1)
        self.labelNextFrequency['image']=self.imgChannelNext
        self.labelNextFrequency.bind("<Button-1>", self.frequency_next)
        self.labelNextFrequency.grid(row=3,column=2,sticky=tk.E)
        self.labelNextFrequency['padding']=(0,0,2,0)
        
        self.labelFrequency=ttk.Label(self.frameMain1)
        self.labelFrequency['text']="***.** MHz"
        self.labelFrequency.grid(row=4,column=0,columnspan=3,pady=10)
        self.labelFrequency['font'] = self.helv10
        
        self.entryChannelName1 = ttk.Entry(self.frameMain1)
        self.entryChannelName1['width']=24
        self.entryChannelName1['font']=self.helv10
        self.entryChannelName1['justify']='center'
        self.entryChannelName1.grid(row=5,columnspan=3,pady=2,sticky=tk.EW)
        self.entryChannelName1.insert(0,"")
 
#       ====================================================     

        self.frameAction0 = ttk.Frame(self.root)
        self.frameAction0['relief'] = 'groove'
        self.frameAction0['padding']=(6,6,6,6)
        self.frameAction0.grid(row=3,sticky=tk.N+tk.E+tk.S+tk.W)
        
        self.frameAction0.columnconfigure(0,minsize=180)
        
        self.labelChannelRemove=ttk.Label(self.frameAction0)
        self.labelChannelRemove['image']=self.imgChannelRemove
        self.labelChannelRemove.bind("<Button-1>", self.channel_remove)
        self.labelChannelRemove.grid(row=0,column=1)
        self.labelChannelRemove['padding']=(5,0,5,0)
        
        self.labelChannelAdd=ttk.Label(self.frameAction0)
        self.labelChannelAdd['image']=self.imgChannelAdd
        self.labelChannelAdd.bind("<Button-1>", self.setGUI1)
        self.labelChannelAdd.grid(row=0,column=2)
        self.labelChannelAdd['padding']=(5,0,5,0)
        
        self.labelChannelUpdate0=ttk.Label(self.frameAction0)
        self.labelChannelUpdate0['image']=self.imgChecked
        self.labelChannelUpdate0.bind("<Button-1>", self.channel_update)
        self.labelChannelUpdate0.grid(row=0,column=3)
        self.labelChannelUpdate0['padding']=(5,0,5,0)     

#       ====================================================      

        self.frameAction1 = ttk.Frame(self.root)
        self.frameAction1['relief'] = 'groove'
        self.frameAction1['padding']=(6,6,6,6)
        self.frameAction1.grid(row=4,sticky=tk.N+tk.E+tk.S+tk.W)
        
        self.frameAction1.columnconfigure(0,minsize=212)
        
        self.labelChannelUpdate1=ttk.Label(self.frameAction1)
        self.labelChannelUpdate1['image']=self.imgChecked
        self.labelChannelUpdate1.bind("<Button-1>", self.channel_add)
        self.labelChannelUpdate1.grid(row=0,column=1)
        self.labelChannelUpdate1['padding']=(5,0,5,0)
        
        self.labelCancel=ttk.Label(self.frameAction1)
        self.labelCancel['image']=self.imgStop
        self.labelCancel.bind("<Button-1>", self.setGUI0)
        self.labelCancel.grid(row=0,column=2)
        self.labelCancel['padding']=(5,0,5,0)
        
#       ====================================================       

        self.setGUI0(self)
        
        self.root.wait_visibility()
        self.root.grab_set()
        self.root.transient(parent)
        self.parent = parent
        
#   =============================================================

    def setGUI0 (self,event):
        self.frameMain1.grid_forget()
        self.frameAction1.grid_forget()
        self.frameMain0.grid(row=0,sticky=tk.N+tk.E+tk.S+tk.W)
        self.frameAction0.grid(row=3,sticky=tk.N+tk.E+tk.S+tk.W)
        self.updateGUI0(self)
    
    def setGUI1 (self,event):
        self.frameMain0.grid_forget()
        self.frameAction0.grid_forget()
        self.frameMain1.grid(row=0,sticky=tk.N+tk.E+tk.S+tk.W)
        self.frameAction1.grid(row=4,sticky=tk.N+tk.E+tk.S+tk.W)        
        self.scaleFrequency1.set(0)
        self.entryChannelName1.delete(0, END)
        self.frequencyMHz=self.frequencyDict[self.frequencyName]
        self.updateGUI1(self)
   
    def updateGUI0(self,event):
        self.valuesChannellist = ["" for i in range(len(self.tvChannels.channels))] 
        for i in range(len(self.tvChannels.channels)):
            item=" {fName} : {freq:6.2f} MHz : {name} " 
            self.valuesChannellist[i]=item.format(fName=self.tvChannels.channels[i].frequencyName,freq=self.tvChannels.channels[i].frequencyMHz,name=self.tvChannels.channels[i].name)
        self.comboboxChannel['values']=self.valuesChannellist
        self.comboboxChannel.set(self.valuesChannellist[self.tvChannels.channel])
        
        self.labelChannelFrequency['text']="{:.2f} MHz".format(self.frequencyMHz)
        
        self.tvM036.update_display()
        
    def updateGUI1(self,event):
        valueFrequency=" {fName} : {freq:6.2f} MHz".format(fName=self.frequencyName,freq=self.frequencyDict[self.frequencyName]) 
        self.comboboxFrequency.set(valueFrequency)
        self.labelFrequency['text']="{:.2f} MHz".format(self.frequencyMHz)        

#   ========================================================

    def channel_changed(self,event):
        print("Channel changed!") 
        print("Current station {}".format(self.comboboxChannel.current()))
        self.tvChannels.channel=self.comboboxChannel.current()
        self.tvChannel=self.tvChannels.channels[self.tvChannels.channel]
        
        self.frequencyName=self.tvChannel.frequencyName
        self.frequencyMHz=self.tvChannel.frequencyMHz
        
        
        self.scaleFrequency.set((self.frequencyMHz-self.frequencyDict[self.frequencyName])/0.25)
        
        
        self.updateGUI0(self)
        self.entryChannelName.delete(0, END)
        self.entryChannelName.insert(0,self.tvChannels.channels[self.tvChannels.channel].name)
        
        self.tvM036.set_tv_channel(self.tvChannel)
        print(self.frequencyName, self.frequencyMHz)
        
    def channel_prev(self,event):
        print("Previous channel")
        self.tvChannels.channel-=1
        if self.tvChannels.channel < 0 :
            self.tvChannels.channel=self.tvChannels.nChannel-1
        self.tvChannel=self.tvChannels.channels[self.tvChannels.channel]
 
        self.frequencyName=self.tvChannel.frequencyName
        self.frequencyMHz=self.tvChannel.frequencyMHz

        self.scaleFrequency.set((self.frequencyMHz-self.frequencyDict[self.frequencyName])/0.25)
        
        self.entryChannelName.delete(0, END)
        self.entryChannelName.insert(0,self.tvChannels.channels[self.tvChannels.channel].name)
        self.updateGUI0(self)

        self.tvM036.set_tv_channel(self.tvChannel)
        print(self.frequencyName, self.frequencyMHz)

    def channel_next(self,event):
        print("Next channel")
        self.tvChannels.channel+=1
        if self.tvChannels.channel > self.tvChannels.nChannel-1 : 
            self.tvChannels.channel=0
        self.tvChannel=self.tvChannels.channels[self.tvChannels.channel] 

        self.frequencyName=self.tvChannel.frequencyName
        self.frequencyMHz=self.tvChannel.frequencyMHz

        self.scaleFrequency.set((self.frequencyMHz-self.frequencyDict[self.frequencyName])/0.25)

        self.entryChannelName.delete(0, END)
        self.entryChannelName.insert(0,self.tvChannels.channels[self.tvChannels.channel].name)
        self.updateGUI0(self)
    
        self.tvM036.set_tv_channel(self.tvChannel)
        print(self.frequencyName, self.frequencyMHz)

    def channel_default(self,event):
        print("Channel default")
        self.tvChannel=self.tvChannels.channels[self.tvChannels.channel]
        self.frequencyName=self.tvChannel.frequencyName
        self.frequencyMHz=self.tvChannel.frequencyMHz
        self.scaleFrequency.set((self.frequencyMHz-self.frequencyDict[self.frequencyName])/0.25)
        self.updateGUI0(self)

        self.tvM036.set_tv_channel(self.tvChannel)
        print(self.frequencyName, self.frequencyMHz)   
    
    def frequency_changed(self,event):
        print("Frequency changed")
        tvChannel=self.tvChannels.channels[self.tvChannels.channel]
        self.frequencyMHz=self.frequencyDict[self.frequencyName]+0.25*self.scaleFrequency.get()
        self.updateGUI0(self)
        
        print("TV tuner frequency: {f} MHz".format(f=self.frequencyMHz))
        # self.tvM036.set_tv_tuner(self.frequencyMHz)
        self.m036.set_tv_tuner(self.frequencyMHz)
        
    def channel_update(self,event):
        print("Channel update")
        self.tvChannels.channel=self.comboboxChannel.current()        
        self.tvChannel.frequencyName=self.frequencyName
        self.tvChannel.frequencyMHz=self.frequencyMHz
        self.tvChannel.name=self.entryChannelName.get()

        self.tvChannels.update_channel(self.tvChannels.channel,self.tvChannel)
        self.updateGUI0(self)
        self.tvChannels.print()
        
    def channel_add(self,event):
        print("Channel add")
        newTvChannel=TvChannel()
        newTvChannel.frequencyName=self.frequencyName
        newTvChannel.frequencyMHz=self.frequencyMHz
        newTvChannel.name=self.entryChannelName1.get()
        
        self.tvChannels.add_channel(newTvChannel)
        
        self.tvChannel=self.tvChannels.channels[self.tvChannels.channel]
        
        self.entryChannelName.delete(0, END)
        self.entryChannelName.insert(0,self.tvChannel.name)
        self.setGUI0(self)

    def channel_remove(self, event):
        print("Channel remove!")
        d = DialogChannelRemove(self.root,self.tvChannels)
        print("'Channel Remove' dialog is opened, waiting to respond")
        self.root.wait_window(d.root)
        print('End of wait_window, back in MainWindow code')
        print('got data: {yn}'.format(yn=d.yesNo)) 
        if d.yesNo == 'Yes':
            if self.tvChannels.nChannel > 1 :
                self.tvChannels.remove_channel(self.tvChannels.channel)
            self.tvChannel=self.tvChannels.channels[self.tvChannels.channel]
            self.entryChannelName.delete(0, END)
            self.entryChannelName.insert(0,self.tvChannels.channels[self.tvChannels.channel].name)
            self.updateGUI0(self)
            self.tvM036.set_tv_channel(self.tvChannel)
            self.frequencyName=self.tvChannel.frequencyName      
            self.frequencyMHz=self.tvChannel.frequencyMHz  
        
#   ========================================================
        
    def frequency_selected(self,event): 
    
        self.frequencyName=list(self.frequencyDict.keys())[self.comboboxFrequency.current()]
        print(self.frequencyName)
        self.frequencyMHz=self.frequencyDict[self.frequencyName]
        self.scaleFrequency1.set(0)
        self.updateGUI1(self)
        
        self.m036.set_tv_tuner(self.frequencyMHz)

    def frequency_prev(self,event):
        iFreq=self.comboboxFrequency.current()
        iFreq=iFreq-1
        if iFreq < 0 :
            iFreq=len(self.frequencyDict)-1
        self.frequencyName=list(self.frequencyDict.keys())[iFreq]
        self.frequencyMHz=self.frequencyDict[self.frequencyName]
        self.scaleFrequency1.set(0)
        self.updateGUI1(self)
        
        self.m036.set_tv_tuner(self.frequencyMHz)
    
    def frequency_next(self,event):
        iFreq=self.comboboxFrequency.current()
        iFreq=iFreq+1
        if iFreq == len(self.frequencyDict) :
            iFreq=0
        self.frequencyName=list(self.frequencyDict.keys())[iFreq]
        self.frequencyMHz=self.frequencyDict[self.frequencyName]
        self.scaleFrequency1.set(0)
        self.updateGUI1(self) 
        
        self.m036.set_tv_tuner(self.frequencyMHz)
    
    def frequency_default(self,event):
        self.frequencyMHz=self.frequencyDict[self.frequencyName]
        self.scaleFrequency1.set(0)
        self.updateGUI1(self) 
        
        self.m036.set_tv_tuner(self.frequencyMHz)
    
    def frequency_changed1(self,event):
        print("Frequency changed")
        self.frequencyMHz=self.frequencyDict[self.frequencyName]+0.25*self.scaleFrequency.get()
        self.updateGUI1(self)
        print("TV tuner frequency: {f} MHz".format(f=self.frequencyMHz))

        self.m036.set_tv_tuner(self.frequencyMHz)
   
    def cancel (self, event):    
        self.setGUI0()
        
#   ========================================================

    def key(self, event):
        k = event.keysym
        if k == 'Escape':
            self.root.grab_release()
            self.root.destroy()
   
#===============================================================================

class TvM036(ttk.Frame):
    def __init__(self,master=None,**kwargs):
        self.tvM036Settings=kwargs['tvM036Settings']
        self.tvChannels=kwargs['tvChannels']
        self.vlcApp=kwargs['vlcApp']
        self.m036=kwargs['m036']
        self.frequencyDict=kwargs['frequencyDict']
        self.streamDevice=kwargs['streamDevice']
        self.streamer=kwargs['streamer']
        self.audioSources=kwargs['audioSources']
        self.audioControl=kwargs['audioControl']
        
        self.paused=False
        
        ttk.Frame.__init__(self, master)
        self.grid(padx=1,pady=1)
        
        self.master.bind('<Key>', self.handle_key)
        self.master.protocol("WM_DELETE_WINDOW", self.delete)
        
        self.style = ttk.Style(self)
        self.style.theme_use('clam')
        
        self.displayColor = '#1e94f1'
        self.master.title('AVerMedia tvM036')
    
        self.master.height=self.tvM036Settings.guiVideoHeight
        self.videoCanvasWindowID=None
        self.videoCanvasHeight=self.tvM036Settings.guiVideoHeight
        self.videoCanvasWidth=int(self.tvM036Settings.guiVideoHeight*self.tvM036Settings.guiVideoAspectRatio)-1*(self.tvM036Settings.vlcCropLeft+self.tvM036Settings.vlcCropRight)
                
        print('GUI video size:',self.videoCanvasWidth,'x',self.videoCanvasHeight)
        
        self.master.attributes('-topmost',1)
        p1 = PhotoImage(file='icons/tvM036.png')
        self.master.iconphoto(False,p1)
        self.master.resizable(False,False)
        
        self.tvChannel=self.tvChannels.channels[self.tvChannels.channel]
        
        self.create_widgets()
        self.master.wait_visibility()
        
        
        
        
    def handle_key(self, event):
        k = event.keysym
        print("Key: {k}".format(k=k))
        if k == 'q' or k == 'Q':
            self.quit(self)
        if k == 'Right' : 
            if self.m036.operatingMode == TV :
                self.channel_next(event=None)
        if k == 'Left' : 
            if self.m036.operatingMode == TV :
                self.channel_prev(event=None)
        if k == 'Up' : 
            self.volume_up(event=None)
        if k == 'Down' : 
            self.volume_down(event=None)

    def create_widgets(self):
        
        self.frameApp = ttk.Frame(self)
        self.frameApp['relief'] = 'raised'  
        self.frameApp['padding']=(5,5,5,5)
        self.frameApp.grid()
        
        self.videoCanvas = tk.Canvas(self.frameApp,width=self.videoCanvasWidth,height=self.videoCanvasHeight,bg='black')
        self.videoCanvas.grid(row=0,column=0,sticky=tk.EW)
        self.videoCanvasWindowID = self.videoCanvas.winfo_id()
        self.vlcApp.videoPlayer.set_xwindow(self.videoCanvasWindowID)
        
        #-----------------------------------------------------------------------------------------     
        
        self.frameControl = ttk.Frame(self.frameApp)
        self.frameControl['relief'] = 'raised'
        self.frameControl['padding']=(0,0,10,0)
        self.frameControl.grid(row=2,sticky=tk.EW)
        
        s = ttk.Style()
        s.configure('My.TFrame', background=self.displayColor)
        s.configure('My.TLabel', background=self.displayColor,foreground="white")
        
        #===============================================================================

        self.frameDisplay = ttk.Frame(self.frameControl)
        self.frameDisplay['padding']=(0,2,0,2)
        self.frameDisplay['relief'] = 'raised'
        self.frameDisplay['style'] = 'My.TFrame'
        self.frameDisplay.grid(row=0,column=0,sticky=tk.EW)
        self.frameDisplay.columnconfigure(0, minsize=400)
        
        helv12b = tkFont.Font(family='Helvetica',size=12, weight='bold')
        self.frameDisplay.labelChannel=ttk.Label(self.frameDisplay,text=self.tvChannels.channels[self.tvChannels.channel].name)
        self.frameDisplay.labelChannel['font']=helv12b
        self.frameDisplay.labelChannel['style']='My.TLabel'
        self.frameDisplay.labelChannel.grid(row=0, column=0)

        # -----------------------

        self.frameTVchannel = ttk.Frame(self.frameControl)
        self.frameTVchannel['padding']=(8,1,4,0)
        self.frameTVchannel.grid(row=0,column=1,sticky=tk.EW,padx=5,ipady=2)
        
        self.imgChannelPrev=PhotoImage(file='icons/media-skip-backward.png')
        self.frameTVchannel.channelPrevLabel=ttk.Label(self.frameTVchannel)
        self.frameTVchannel.channelPrevLabel['image']=self.imgChannelPrev
        self.frameTVchannel.channelPrevLabel['padding']=(5,5,5,0)
        self.frameTVchannel.channelPrevLabel.bind("<Button-1>", self.channel_prev)        
        self.frameTVchannel.channelPrevLabel.grid(row=0,column=1)
       
        self.imgChannelNext=PhotoImage(file='icons/media-skip-forward.png')
        self.frameTVchannel.channelNextLabel=ttk.Label(self.frameTVchannel)
        self.frameTVchannel.channelNextLabel['image']=self.imgChannelNext
        self.frameTVchannel.channelNextLabel['padding']=(5,5,5,0)
        self.frameTVchannel.channelNextLabel.bind("<Button-1>", self.channel_next)
        self.frameTVchannel.channelNextLabel.grid(row=0,column=2,sticky=tk.E)
        
        self.imgGoBottom=PhotoImage(file='icons/go-bottom.png')
        self.imgGoTop=PhotoImage(file='icons/go-top.png')
        
        self.frameTVchannel.controlUpDownLabel=ttk.Label(self.frameTVchannel)
        self.frameTVchannel.controlUpDownLabel['image']=self.imgGoBottom
        self.frameTVchannel.controlUpDownLabel['padding']=(5,5,5,0)
        self.frameTVchannel.controlUpDownLabel.bind("<Button-1>", self.channelSettings)
        self.frameTVchannel.controlUpDownLabel.grid(row=0,column=6)
        
        self.frameControl.columnconfigure(3, weight=100)
        
        #-----------------------
    
        self.frameAudio = ttk.Frame(self.frameControl)
        self.frameAudio['padding']=(0,2,0,2)
        self.frameAudio.grid(row=0,column=4,sticky=tk.E)

        self.imgVolDown=PhotoImage(file='icons/go-down.png')
        self.frameAudio.volDownLabel=ttk.Label(self.frameAudio)
        self.frameAudio.volDownLabel['image']=self.imgVolDown
        self.frameAudio.volDownLabel['padding']=(5,0,5,0)
        self.frameAudio.volDownLabel.bind("<Button-1>", self.volume_down)
        self.frameAudio.volDownLabel.grid(row=0,column=3)

        self.imgVolUp=PhotoImage(file='icons/go-up.png')
        self.frameAudio.volUpLabel=ttk.Label(self.frameAudio)
        self.frameAudio.volUpLabel['image']=self.imgVolUp
        self.frameAudio.volUpLabel['padding']=(5,0,5,0)
        self.frameAudio.volUpLabel.bind("<Button-1>", self.volume_up)
        self.frameAudio.volUpLabel.grid(row=0,column=4)
        
        #-----------------------
        
        self.imgPause=PhotoImage(file='icons/media-playback-pause.png')
        self.imgStart=PhotoImage(file='icons/media-playback-start.png')
        
        self.labelPlayPause=ttk.Label(self.frameControl)
        self.labelPlayPause['image']=self.imgPause
        self.labelPlayPause['padding']=(5,0,5,0)
        self.labelPlayPause.bind("<Button-1>", self.playPause)
        self.labelPlayPause.grid(row=0,column=6)
        
        self.frameControl.columnconfigure(7, minsize=10)
        
        self.imgSettings=PhotoImage(file='icons/applications-system.png')       
        self.labelSettings=ttk.Label(self.frameControl)       
        self.labelSettings['image']=self.imgSettings       
        self.labelSettings['padding']=(5,0,5,0)       
        self.labelSettings.bind("<Button-1>", self.dialogSettings)       
        self.labelSettings.grid(row=0,column=8) 
        
        self.imgSource=PhotoImage(file='icons/media-source.png')       
        self.labelSource=ttk.Label(self.frameControl)       
        self.labelSource['image']=self.imgSource     
        self.labelSource['padding']=(5,0,5,0)       
        self.labelSource.bind("<Button-1>", self.source_changed)       
        self.labelSource.grid(row=0,column=9)       
       
        self.imgShutdown=PhotoImage(file='icons/system-shutdown.png')
        self.labelQuit=ttk.Label(self.frameControl)
        self.labelQuit['image']=self.imgShutdown
        self.labelQuit['text']="Çık"
        self.labelQuit['padding']=(0,0,0,0)
        self.labelQuit.bind("<Button-1>", self.quit)
        self.labelQuit.grid(row=0,column=10,sticky=tk.E)

    def display_frameTVchannel(self):
        self.frameTVchannel.grid(row=0,column=1,sticky=tk.EW,padx=5,ipady=2)

    def set_tv_channel (self,tvChannel):
        self.vlcApp.videoPlayer.pause()
        self.m036.vdi_stop_capturing()
        self.m036.set_tv_tuner(tvChannel.frequencyMHz)
        self.m036.vdi_start_capturing()
        self.vlcApp.videoPlayer.play()
        self.update_display()
                
    def channel_next(self,event):
        self.tvChannels.channel+=1
        if self.tvChannels.channel > self.tvChannels.nChannel-1 : 
            self.tvChannels.channel=0
        tvChannel=self.tvChannels.channels[self.tvChannels.channel]  
        self.set_tv_channel(tvChannel)
    
    def channel_prev(self,event):  
        self.tvChannels.channel-=1
        if self.tvChannels.channel < 0 :
            self.tvChannels.channel=self.tvChannels.nChannel-1
        tvChannel=self.tvChannels.channels[self.tvChannels.channel]
        self.set_tv_channel(tvChannel)
        
    def source_changed(self, event):
        self.vlcApp.videoPlayer.stop()
        self.streamer.terminate()
        time.sleep(1)

        if self.m036.operatingMode == TV :
            # Composite
            self.frameTVchannel.grid_remove()
            self.m036.set_operating_mode(CVBS)
        elif self.m036.operatingMode == CVBS :
            # S-Video
            self.frameTVchannel.grid_remove()
            self.m036.set_operating_mode(S_VIDEO)
        elif self.m036.operatingMode == S_VIDEO :
            # Tv
            self.display_frameTVchannel()
            self.m036.set_operating_mode(TV)
            
        self.m036.vdi_get_capture_frame()
    
        self.streamDevice.frame_width=self.m036.videoCaptureSize.width
        self.streamDevice.frame_height=self.m036.videoCaptureSize.height
        self.streamDevice.pixel_format=PixelFormat.YUYV
        
        self.streamDevice.set()
        if self.streamDevice.is_set == False :
            print("Stream device can't set!")
        
        q=0
        while self.streamDevice.is_set == False and q < 5 :
            time.sleep(1)
            self.streamDevice.set()
            if self.streamDevice.is_set == False :
                print("Stream device can't set!")
            q+=1
            
        print("Stream device is set, self.streamer will start!")
        self.streamer.start(self.m036.videoCaptureSize.width,self.m036.videoCaptureSize.height)
        
        videoMedia='v4l2://'+self.tvM036Settings.v4l2Device
        self.vlcApp.set_video_media(videoMedia)
        self.vlcApp.videoPlayer.set_xwindow(self.videoCanvasWindowID)
        time.sleep(1)
        
        # player scale and crop
        widthCropped=self.m036.videoCaptureSize.width-self.tvM036Settings.vlcCropLeft-self.tvM036Settings.vlcCropRight
        heightCropped=self.m036.videoCaptureSize.height-self.tvM036Settings.vlcCropTop-self.tvM036Settings.vlcCropBottom
        cropGeometry="{w}x{h}+{l}+{t}".format(w=widthCropped,h=heightCropped,l=self.tvM036Settings.vlcCropLeft,t=self.tvM036Settings.vlcCropTop)
        print("Crop Geometry:",cropGeometry)
        vScale=self.tvM036Settings.guiVideoHeight/heightCropped
        self.vlcApp.videoPlayer.video_set_scale(vScale)
        self.vlcApp.videoPlayer.video_set_crop_geometry(cropGeometry)
        self.vlcApp.videoPlayer.play()
        
        self.tvM036Settings.m036VideoSource=self.m036.videoSource    

        self.update_display()

    def playPause(self,event):
        
        if self.paused:
            self.labelPlayPause['image']=self.imgPause
            self.m036.vdi_start_capturing()
            self.audioControl.unmute()
            self.paused=False
        else:
            self.labelPlayPause['image']=self.imgStart
            self.m036.vdi_stop_capturing()
            self.audioControl.mute()
            self.paused=True        

    def channelSettings(self,event):
        d = ChannelSettings(self.master, self, self.tvChannels, self.m036, self.frequencyDict)
        print("'Channel Settings' dialog is opened, waiting to respond")
        self.master.wait_window(d.root)
        
    def dialogSettings(self,event):
        fileSettings=self.tvM036Settings.fileSettings
        self.tvM036Settings.read(fileSettings)
        
        if self.tvM036Settings.audioSource == None :
            self.audioControl.get_source('Unknown')
        else :
            self.audioControl.get_source(self.tvM036Settings.audioSource)
        
        if self.audioControl.audioSource:
            audioMedia='pulse://'+self.audioControl.sourceName
            self.vlcApp.set_audio_media(audioMedia)
            self.vlcApp.audioPlayer.play()
        
        d = AppSettings(self.master,self,self.tvM036Settings,self.streamDevice,self.streamer,self.m036,self.audioSources,self.audioControl,self.vlcApp)

        d.drawVideoFrame576()
        d.drawVideoFrame480()
        print("Video size class: ", d.videoSizeClass) 
        if d.videoSizeClass == "576" :
            d.frameCaptureStart480.grid_forget()
        else :
            d.frameCaptureStart576.grid_forget() 

        print("'Settings' dialog is opened, waiting to respond")
        self.master.wait_window(d.root)
        
        self.update_display()
        self.tvM036Settings.write(fileSettings)
        
    def update_display(self):
        print("Updating display:")
        print("  Video source:",list_video_sources[self.m036.videoSource])
        self.m036.video_decoder_get_video_standard()
        self.m036.video_decoder_status_video_standard()
        print("  Video standard",list_video_standards[self.m036.vdVideoStandard])
        
        txtVideoStandard="PAL"
        if self.m036.vdVideoStandard == tvp5150a.VIDEO_STANDARD_NTSC_M_J or self.m036.vdVideoStandard ==  tvp5150a.VIDEO_STANDARD_NTSC :
            txtVideoStandard="NTSC"
        if self.m036.vdVideoStandard == tvp5150a.VIDEO_STANDARD_SECAM :
            txtVideoStandard="SECAM"
        
        if self.m036.videoSource == VIDEO_SOURCE_COMPOSITE :
            displayText="CVBS:"
            displayText+=txtVideoStandard
            self.frameDisplay.labelChannel['text']=displayText
            
        if self.m036.videoSource == VIDEO_SOURCE_S_VIDEO :
            displayText="S-Video:"
            displayText+=txtVideoStandard    
            self.frameDisplay.labelChannel['text']=displayText
            
        if self.m036.videoSource == VIDEO_SOURCE_TV :    
            self.frameDisplay.labelChannel['text']="{fName} : {freq:.2f} MHz : {name}".format(fName=self.tvChannels.channels[self.tvChannels.channel].frequencyName,freq=self.tvChannels.channels[self.tvChannels.channel].frequencyMHz,name=self.tvChannels.channels[self.tvChannels.channel].name)
        
        print("Display updated:", self.frameDisplay.labelChannel['text'])
       
    def volume_up(self,event):
        playerVolume=self.vlcApp.audioPlayer.audio_get_volume()
        playerVolume+=5
        if playerVolume > 150 :
            playerVolume = 150
        print("Player volume:",playerVolume)
        self.vlcApp.audioPlayer.audio_set_volume(playerVolume)

    def volume_down(self,event):  
        playerVolume=self.vlcApp.audioPlayer.audio_get_volume()
        playerVolume-=5
        if playerVolume < 0 :
            playerVolume = 0
        print("Player volume:",playerVolume)
        self.vlcApp.audioPlayer.audio_set_volume(playerVolume)    
        
    def delete(self):
        self.quit(self)
        
    def quit(self,event):
        self.tvChannels.write()
        
        self.tvM036Settings.audioPlayerVolume=self.vlcApp.audioPlayer.audio_get_volume()
        
        self.tvM036Settings.m036OperatingMode=self.m036.operatingMode
        self.tvM036Settings.m036AudioSource=self.m036.audioSource
        self.tvM036Settings.m036VideoSource=self.m036.videoSource

        self.tvM036Settings.m036CompositeVideoStandard=self.m036.vdVideoStandardComposite
        self.tvM036Settings.m036TvVideoStandard=self.m036.vdVideoStandardTv
        self.tvM036Settings.m036SVideoVideoStandard=self.m036.vdVideoStandardSVideo

        self.tvM036Settings.m036TvCaptureStartX=self.m036.vdCaptureFrameTv.start.x
        self.tvM036Settings.m036TvCaptureStartY=self.m036.vdCaptureFrameTv.start.y
        self.tvM036Settings.m036TvCaptureEndX=self.m036.vdCaptureFrameTv.end.x
        self.tvM036Settings.m036TvCaptureEndY=self.m036.vdCaptureFrameTv.end.y
        
        self.tvM036Settings.m036SVideoCaptureStartX=self.m036.vdCaptureFrameSVideo.start.x
        self.tvM036Settings.m036SVideoCaptureStartY=self.m036.vdCaptureFrameSVideo.start.y
        self.tvM036Settings.m036SVideoCaptureEndX=self.m036.vdCaptureFrameSVideo.end.x
        self.tvM036Settings.m036SVideoCaptureEndY=self.m036.vdCaptureFrameSVideo.end.y
        
        self.tvM036Settings.m036CompositeCaptureStartX=self.m036.vdCaptureFrameComposite.start.x
        self.tvM036Settings.m036CompositeCaptureStartY=self.m036.vdCaptureFrameComposite.start.y
        self.tvM036Settings.m036CompositeCaptureEndX=self.m036.vdCaptureFrameComposite.end.x
        self.tvM036Settings.m036CompositeCaptureEndY=self.m036.vdCaptureFrameComposite.end.y
        
        self.tvM036Settings.print()                  
        
        self.tvM036Settings.write(self.tvM036Settings.fileSettings)
        self.m036.audio_mute()
        self.streamer.terminate()  
        self.m036.gpio_led(False)
        self.m036.close()
        quit()   
 
#===============================================================================
