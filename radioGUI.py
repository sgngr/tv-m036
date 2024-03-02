"""
================================================
A TV app for the AVerMedia AVerTV USB2.0 Plus
Radio GUI module
================================================
Version:    0.1
Author:     Sinan Güngör
License:    GPL v2
"""

from tkinter import *
import tkinter as tk
from tkinter import ttk
from tkinter import font as tkFont

#==================================================================================

from PIL import Image, ImageTk  # import the tkinter modules before PIL!

class ImageUtils():
    def RBGAImage(self,img):
        return Image.open(img).convert("RGBA")

    def set_opacity(self,mask,size,rgb,opacity_step):
        img = self.RBGAImage(mask)
        img = img.resize(size, Image.Resampling.LANCZOS)
        data = img.getdata()
        newData = []
        for item in data:
            opacity_scale=0.2+0.8*opacity_step/15
            newData.append((*rgb,int(opacity_scale*item[3]/1)) )
        img.putdata(newData)
        return img

imageUtils = ImageUtils()

#==================================================================================

from radioStations import *

class dialogStationAdd(object):
    def __init__(self, parent):
        # The "return value" of the dialog,
        self.stationName = None

        self.root=Toplevel(parent)
        self.root.bind('<Key>', self.handle_key)  
        p1 = PhotoImage(file='icons/radioM036.png')
        self.root.iconphoto(False,p1)  
        self.root.title("Add station")  
        
        self.style = ttk.Style(self.root)
        self.style.theme_use('clam')
        helv10 = tkFont.Font(family='Helvetica',size=10, weight='normal')
        helv10b = tkFont.Font(family='Helvetica',size=10, weight='bold')
        
        self.frameStationAdd=ttk.Frame(self.root)
        self.frameStationAdd['relief'] = 'sunken'
        self.frameStationAdd['padding']=(10,5,10,10) 
        self.frameStationAdd.grid(padx=5,pady=5)
         
        self.labelStatitonName = ttk.Label(self.frameStationAdd, text="Station name:")
        self.labelStatitonName['font']=helv10
        self.labelStatitonName.grid(row=0,pady=0,sticky=tk.W)
        
        self.entryStationName = ttk.Entry(self.frameStationAdd)
        self.entryStationName['width']=24
        self.entryStationName['font']=helv10
        self.entryStationName['justify']='center'
        self.entryStationName.grid(row=1,pady=12,sticky=tk.EW)
        
        self.addButton = ttk.Button(self.frameStationAdd, text="Add", command=self.Add)
        self.addButton.grid(row=2,pady=0, sticky=tk.E+tk.S)

        self.root.wait_visibility()
        self.root.grab_set()
        self.root.transient(parent)
        
        self.parent = parent

    def handle_key(self, event):
        k = event.keysym
        # print("Key: {}".format(k))
        if k == 'Escape':
            self.root.grab_release()
            self.root.destroy()  

    def Add(self):
        self.stationName = self.entryStationName.get()
        self.root.grab_release()
        self.root.destroy()

#==================================================================================

class dialogStationRemove(object):
    def __init__(self, parent,radioStation):
        # The "return value" of the dialog,
        self.yesNo = 'No'

        self.root=Toplevel(parent)          
        self.root.bind('<Key>', self.handle_key)  
        p1 = PhotoImage(file='icons/radioM036.png')
        self.root.iconphoto(False,p1)  
        self.root.title("Remove station")    
                    
        self.style = ttk.Style(self.root)
        self.style.theme_use('clam')
        
        helv10b = tkFont.Font(family='Helvetica',size=10, weight='bold')
        
        self.frameStationRemove=ttk.Frame(self.root)
        self.frameStationRemove['padding']=(10,10,10,8)
        self.frameStationRemove['relief'] = 'sunken'
        self.frameStationRemove['width'] = 302
        self.frameStationRemove.grid(padx=5, pady=5,sticky=tk.W+tk.N+tk.E+tk.S)
        
        self.frameStationRemove.columnconfigure(0, minsize=141)
        self.frameStationRemove.columnconfigure(1, minsize=141)
        
        msg="Are you sure to remove the station"
        self.labelQuestion1 = ttk.Label(self.frameStationRemove, text=msg)
        self.labelQuestion1['padding']=(5,5,5,0)
        self.labelQuestion1['font']=helv10b
        self.labelQuestion1.grid(row=0,columnspan=2)

        msg="{freq:6.2f} MHz : {name} ?".format(freq=radioStation.frequencyMHz,name=radioStation.name)
        self.labelQuestion2 = ttk.Label(self.frameStationRemove, text=msg)
        self.labelQuestion2['padding']=(5,0,5,5)
        self.labelQuestion2['font']=helv10b
        self.labelQuestion2.grid(row=1,columnspan=2)                
               
        self.buttonYes = ttk.Button(self.frameStationRemove, text="Yes", command=self.Yes)
        self.buttonYes.focus()
        self.buttonYes.grid(row=2,column=0, padx=10, pady=5, sticky=tk.E)
        
        self.buttonNo = ttk.Button(self.frameStationRemove, text="No", command=self.No)
        self.buttonNo.grid(row=2,column=1, padx=10, sticky=tk.W)

        self.root.wait_visibility()
        self.root.grab_set()
        self.root.transient(parent)
        
        self.parent = parent

    def handle_key(self, event):
        k = event.keysym
        # print("Key: {}".format(k))
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

#===============================================================================
import time

class RadioM036(ttk.Frame):
    def __init__(self,master=None,**kwargs):
        
        self.radioStations = kwargs['radioStations']
        self.tea5767=kwargs['tea5767']
        self.m036=kwargs['m036']
        self.audioSources=kwargs['audioSources']
        self.audioControl=kwargs['audioControl']
        self.vlcApp=kwargs['vlcApp']
        self.tvM036Settings=kwargs['tvM036Settings']
        
        ttk.Frame.__init__(self,master)
        self.grid(padx=2,pady=2)
        
        self.master.bind('<Key>', self.handle_key)
        self.master.protocol("WM_DELETE_WINDOW", self.delete)
        p = PhotoImage(file='icons/radioM036.png')
        self.master.iconphoto(False,p)
        
        self.style = ttk.Style(self)
        self.style.theme_use('clam')
        
        self.displayColor = '#1e94f1'
        self.master.title('AVerMedia radioM036')
        
        self.ctrlPanelUp=True
        self.radioStation=RadioStation()
        self.radioStation.copy_of(self.radioStations.stations[self.radioStations.station])
        self.valuesPlaylist=None
        self.stations2valuesPlaylist()
        self.frequencyMHz=self.radioStation.frequencyMHz
        self.frequencyMHz_min=87.5
        self.frequencyMHz_max=108.0
        self.deltaFrequencyMHz=0.05
        self.paused=False
        self.volume=7
        
        self.create_widgets()
        
        self.frameControl.grid_remove()
        self.frameAudioControl.grid_remove()
        
    def handle_key(self, event):
        k = event.keysym
        # print("Key: {}".format(k))
        if k == 'q' or k == 'Q':
            self.quit(event)
            
        if k == 'Right' : 
            self.station_next(event=None)
        if k == 'Left' : 
            self.station_prev(event=None)
        if k == 'Up' : 
            self.volume_up(event=None)
        if k == 'Down' : 
            self.volume_down(event=None)    
    
    def create_widgets(self):
        self.frameApp = ttk.Frame(self)
        self.frameApp['relief'] = 'raised'  
        self.frameApp['padding']=(4,4,4,4)
        self.frameApp.grid()

        s = ttk.Style()
        s.configure('My.TFrame', background=self.displayColor)
        s.configure('My.TLabel', background=self.displayColor,foreground="white")

        self.frameDisplay = ttk.Frame(self.frameApp)
        self.frameDisplay['padding']=(10,15,10,5)
        self.frameDisplay['relief'] = 'sunken'
        self.frameDisplay['style'] = 'My.TFrame'
        self.frameDisplay.grid(row=0,sticky=tk.EW)
        self.frameDisplay.columnconfigure(0, minsize=290)
        
        helv36b = tkFont.Font(family='Helvetica',size=36, weight='bold')
        helv12b = tkFont.Font(family='Helvetica',size=12, weight='bold')
        self.frameDisplay.labelMHz=ttk.Label(self.frameDisplay,text="{f:0.2f} MHz".format(f=self.radioStation.frequencyMHz))
        self.frameDisplay.labelMHz['font']=helv36b
        self.frameDisplay.labelMHz['style'] = 'My.TLabel'
        self.frameDisplay.labelMHz.grid(row=0, column=0, columnspan=3)
        
        self.frameDisplay.labelStation=ttk.Label(self.frameDisplay,text=self.radioStation.name)
        self.frameDisplay.labelStation['font']=helv12b
        self.frameDisplay.labelStation['style']='My.TLabel'
        self.frameDisplay.labelStation.grid(row=1, column=0, columnspan=3)
        
        img=imageUtils.set_opacity("icons/antenna.png",(16,16),(255,255,255),  self.tea5767.get_signal_level())
        self.imgStationSignal=ImageTk.PhotoImage(img)    
        self.frameDisplay.labelStationSignal=ttk.Label(self.frameDisplay,background=self.displayColor)
        self.frameDisplay.labelStationSignal['image']=self.imgStationSignal
        self.frameDisplay.labelStationSignal.grid(row=2,column=0,sticky=tk.W)
            
        img=imageUtils.set_opacity("icons/audio-volume.png",(16,16),(255,255,255),self.m036.audio_get_gain())
        self.imgAudioVolume=ImageTk.PhotoImage(img) 
        self.frameDisplay.labelAudioVolume=ttk.Label(self.frameDisplay,background=self.displayColor)
        self.frameDisplay.labelAudioVolume['image']=self.imgAudioVolume
        self.frameDisplay.labelAudioVolume.grid(row=2,column=2,sticky=tk.E)   
   
        #----------------------------------------------------------------------------------------- 
        
        self.frameButton = ttk.Frame(self.frameApp)
        self.frameButton['relief'] = 'raised'
        self.frameButton['padding']=(0,5,0,5)
        self.frameButton.grid(row=1,column=0,sticky=tk.EW,pady=(2,0))
        
        self.frameButton.columnconfigure(0,minsize=20)
        self.frameButton.columnconfigure(3,weight=50)
        self.frameButton.columnconfigure(7,weight=50)
        self.frameButton.columnconfigure(10,minsize=20)

        self.imgStationPrev=PhotoImage(file='icons/media-skip-backward.png')
        self.frameButton.stationPrevLabel=ttk.Label(self.frameButton)
        self.frameButton.stationPrevLabel['image']=self.imgStationPrev
        self.frameButton.stationPrevLabel['padding']=(0,0,5,0)
        self.frameButton.stationPrevLabel.bind("<Button-1>", self.station_prev)        
        self.frameButton.stationPrevLabel.grid(row=0,column=1)

        self.imgStationNext=PhotoImage(file='icons/media-skip-forward.png')
        self.frameButton.stationNextLabel=ttk.Label(self.frameButton)
        self.frameButton.stationNextLabel['image']=self.imgStationNext
        self.frameButton.stationNextLabel['padding']=(5,0,20,0)
        self.frameButton.stationNextLabel.bind("<Button-1>", self.station_next)
        self.frameButton.stationNextLabel.grid(row=0,column=2,sticky=tk.E)

        self.imgVolDown=PhotoImage(file='icons/go-down.png')
        self.frameButton.volDownLabel=ttk.Label(self.frameButton)
        self.frameButton.volDownLabel['image']=self.imgVolDown
        self.frameButton.volDownLabel['padding']=(20,0,5,0)
        self.frameButton.volDownLabel.bind("<Button-1>", self.volume_down)
        self.frameButton.volDownLabel.grid(row=0,column=4)

        self.imgVolUp=PhotoImage(file='icons/go-up.png')
        self.frameButton.volUpLabel=ttk.Label(self.frameButton)
        self.frameButton.volUpLabel['image']=self.imgVolUp
        self.frameButton.volUpLabel['padding']=(5,0,5,0)
        self.frameButton.volUpLabel.bind("<Button-1>", self.volume_up)
        self.frameButton.volUpLabel.grid(row=0,column=5)

        self.imgPause=PhotoImage(file='icons/media-playback-pause.png')
        self.imgStart=PhotoImage(file='icons/media-playback-start.png')
        
        self.frameButton.labelMuteUnmute=ttk.Label(self.frameButton)
        self.frameButton.labelMuteUnmute['image']=self.imgPause
        self.frameButton.labelMuteUnmute['padding']=(5,0,20,0)
        self.frameButton.labelMuteUnmute.bind("<Button-1>", self.mute_unmute)
        self.frameButton.labelMuteUnmute.grid(row=0,column=6)

        self.imgGoBottom=PhotoImage(file='icons/go-bottom.png')
        self.imgGoTop=PhotoImage(file='icons/go-top.png')
        
        self.frameButton.controlUpDownLabel=ttk.Label(self.frameButton)
        self.frameButton.controlUpDownLabel['image']=self.imgGoBottom
        self.frameButton.controlUpDownLabel['padding']=(20,0,5,0)
        self.frameButton.controlUpDownLabel.bind("<Button-1>", self.controlPanel_upDown)
        self.frameButton.controlUpDownLabel.grid(row=0,column=8)
        
        self.imgShutdown=PhotoImage(file='icons/system-shutdown.png')
        self.frameButton.quitLabel=ttk.Label(self.frameButton)
        self.frameButton.quitLabel['image']=self.imgShutdown
        self.frameButton.quitLabel['padding']=(5,0,0,0)
        self.frameButton.quitLabel.bind("<Button-1>", self.quit)
        self.frameButton.quitLabel.grid(row=0,column=9)
        
        #-----------------------------------------------------------------------------------------
   
        self.frameControl = ttk.Frame(self.frameApp)
        self.frameControl['relief'] = 'sunken'
        self.frameControl['padding']=(20,5,20,5)
        self.frameControl.grid(row=2,sticky=tk.N+tk.E+tk.S+tk.W,pady=(3,0))
        
        self.frameControl.columnconfigure(0, weight=1)
        self.frameControl.columnconfigure(1, weight=1)
        self.frameControl.columnconfigure(2, weight=1)
                
        helv10 = tkFont.Font(family='Helvetica',size=10, weight='normal')
        
        self.frameControl.comboboxStation = ttk.Combobox(self.frameControl)
        self.frameControl.comboboxStation.grid(column=0, row=0, columnspan=3, padx=2, pady=4, ipady=3, sticky=tk.NS+tk.EW)
        self.frameControl.comboboxStation['values']=self.valuesPlaylist
        self.frameControl.comboboxStation['state'] = 'readonly'
        self.frameControl.comboboxStation['justify'] = 'center'
        self.frameControl.comboboxStation['font'] = helv10
        
        self.frameControl.comboboxStation.set(self.valuesPlaylist[self.radioStations.station])
        self.frameControl.comboboxStation.bind('<<ComboboxSelected>>', self.station_changed)
        
        self.frameControl.stationPrevLabel=ttk.Label(self.frameControl)
        self.frameControl.stationPrevLabel['image']=self.imgStationPrev
        self.frameControl.stationPrevLabel.bind("<Button-1>", self.station_prev)
        self.frameControl.stationPrevLabel.grid(row=1,column=0,sticky=tk.E)
        self.frameControl.stationPrevLabel['padding']=(0,10,0,0)

        self.frameControl.stationNextLabel=ttk.Label(self.frameControl)
        self.frameControl.stationNextLabel['image']=self.imgStationNext
        self.frameControl.stationNextLabel.bind("<Button-1>", self.station_next)
        self.frameControl.stationNextLabel.grid(row=1,column=2,sticky=tk.W)
        self.frameControl.stationNextLabel['padding']=(0,10,0,0)
                
        self.imgStationRemove=PhotoImage(file='icons/list-remove.png')
        self.frameControl.stationRemoveLabel=ttk.Label(self.frameControl)
        self.frameControl.stationRemoveLabel['image']=self.imgStationRemove
        self.frameControl.stationRemoveLabel.bind("<Button-1>", self.popupDialogStationRemove)
        self.frameControl.stationRemoveLabel.grid(row=2,column=1)
        self.frameControl.stationRemoveLabel['padding']=(0,0,0,10)



        self.labelTuneFreq=ttk.Label()
        self.labelTuneFreq['text']="{freq:.2f} MHz".format(freq=self.radioStation.frequencyMHz)

        self.tuneFreq=DoubleVar()
        self.scaleFreq=tk.Scale(self.frameControl, variable = self.tuneFreq, from_=self.frequencyMHz_min, to = self.frequencyMHz_max, resolution=0.05, orient = HORIZONTAL, command = self.freq_tuned, showvalue=0)
        self.scaleFreq.grid(row=3,column=0,columnspan=4,sticky=tk.EW,padx=(15,15),pady=(20,0))
        self.tuneFreq.set(self.frequencyMHz) 
        self.labelTuneFreq.place(in_=self.scaleFreq, bordermode='outside', x=0, y=0, anchor='s')
        
         
        self.imgFreqDown=PhotoImage(file='icons/media-seek-backward.png')
        self.frameControl.freqDownLabel=ttk.Label(self.frameControl)
        self.frameControl.freqDownLabel['image']=self.imgFreqDown
        self.frameControl.freqDownLabel.bind("<Button-1>", self.freq_down)
        self.frameControl.freqDownLabel.grid(row=4,column=0,sticky=tk.E)

        self.imgFreqUp=PhotoImage(file='icons/media-seek-forward.png')
        self.frameControl.freqUpLabel=ttk.Label(self.frameControl)
        self.frameControl.freqUpLabel['image']=self.imgFreqUp
        self.frameControl.freqUpLabel.bind("<Button-1>", self.freq_up)
        self.frameControl.freqUpLabel.grid(row=4,column=2,sticky=tk.W)

        self.imgStationAdd=PhotoImage(file='icons/list-add.png')
        self.frameControl.stationAddLabel=ttk.Label(self.frameControl)
        self.frameControl.stationAddLabel['image']=self.imgStationAdd
        self.frameControl.stationAddLabel['padding']=(0,0,0,10)
        self.frameControl.stationAddLabel.bind("<Button-1>", self.popupDialogStationAdd)
        self.frameControl.stationAddLabel.grid(row=5,column=1)  
        
        #-----------------------------------------------------------------------------------------
         
        self.frameAudioControl = ttk.Frame(self.frameApp)
        self.frameAudioControl['relief'] = 'sunken'
        self.frameAudioControl['padding']=(10,5,10,5)
        self.frameAudioControl.grid(row=3,sticky=tk.N+tk.E+tk.S+tk.W,pady=(3,0))
   
        self.frameAudioControl.columnconfigure(0, weight=5)
        self.frameAudioControl.columnconfigure(1, weight=95)
        
        labelAudioSource=ttk.Label(self.frameAudioControl)
        labelAudioSource['text']="Audio source:"
        labelAudioSource.grid(row=1,column=0, padx=(0,10), pady=(15,0),sticky=tk.NE)

        self.comboboxAudioSources = ttk.Combobox(self.frameAudioControl)
        self.comboboxAudioSources.grid(row=1, column=1, columnspan=2, padx=2, pady=4, ipady=3, sticky=tk.NS+tk.EW)
        self.comboboxAudioSources['state'] = 'readonly'
        self.comboboxAudioSources['justify'] = 'center'
        self.comboboxAudioSources['font'] = helv10
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
    def X_to_x(self,X,dX,X0,dx,x0):
        x = dx / dX  *  (X - X0) + x0
        return x    
    def showvalue_scale_freq(self):
        X=self.tuneFreq.get()
        self.labelTuneFreq['text']="{f:.2f} MHz".format(f=X)
        self.sliderLength=30
        if self.scaleFreq.winfo_width() < 10 :
            w=260
        else:
            w=self.scaleFreq.winfo_width()
        dX= (self.frequencyMHz_max-self.frequencyMHz_min)
        X0=self.frequencyMHz_min
        dx=w-self.sliderLength
        x0=self.sliderLength/2
        x = self.X_to_x(X,dX,X0,dx,x0)
        self.labelTuneFreq.place_configure(x=x)
    
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
   
    def controlPanel_upDown(self,event):
        self.station_changed(event=None)
        if self.ctrlPanelUp:
            self.showvalue_scale_freq()
            self.frameControl.grid(row=2,sticky=tk.N+tk.E+tk.S+tk.W)
            self.frameAudioControl.grid(row=3,sticky=tk.N+tk.E+tk.S+tk.W,pady=(3,0))
            self.frameButton.controlUpDownLabel['image']=self.imgGoTop
            self.ctrlPanelUp=False
        else:
            self.frameControl.grid_remove()
            self.frameAudioControl.grid_remove()
            self.frameButton.controlUpDownLabel['image']=self.imgGoBottom
            self.ctrlPanelUp=True
   
    def stations2valuesPlaylist(self):
        self.valuesPlaylist = ["" for i in range(len(self.radioStations.stations))] 
        for i in range(len(self.radioStations.stations)):
            item="{freq:6.2f} MHz : {name}"
            self.valuesPlaylist[i]=item.format(freq=self.radioStations.stations[i].frequencyMHz,name=self.radioStations.stations[i].name)
   
    def station_changed(self,event):
        print("Station changed!")
        print("Current station {}".format(self.frameControl.comboboxStation.get()))
        self.radioStations.station=self.frameControl.comboboxStation.current()
        self.radioStation.copy_of(self.radioStations.stations[self.radioStations.station])
        self.frequencyMHz=self.radioStation.frequencyMHz
        self.frameDisplay.labelMHz['text']="{f:0.2f} MHz".format(f=self.radioStation.frequencyMHz)
        self.frameDisplay.labelStation['text']=self.radioStation.name
        self.frameControl.comboboxStation.set(self.valuesPlaylist[self.radioStations.station])
        self.station_play(self)
        img=imageUtils.set_opacity("icons/antenna.png",(16,16),(255,255,255),self.tea5767.get_signal_level())
        self.imgStationSignal=ImageTk.PhotoImage(img)    
        self.frameDisplay.labelStationSignal['image']=self.imgStationSignal
        self.tuneFreq.set(self.frequencyMHz)
        self.showvalue_scale_freq()
        self.tea5767.print_write_registers()
        self.tea5767.print_read_registers()
   
    def station_play(self,event):
        self.tea5767.set_frequency(self.radioStation.frequencyMHz)
        self.tuneFreq.set(self.radioStation.frequencyMHz)
        
    def station_next(self,event):
        self.radioStations.station+=1
        if self.radioStations.station > self.radioStations.nStation-1 :
            self.radioStations.station=0
        self.radioStation.copy_of(self.radioStations.stations[self.radioStations.station])
        self.frequencyMHz=self.radioStation.frequencyMHz
        self.frameDisplay.labelMHz['text']="{f:0.2f} MHz".format(f=self.radioStation.frequencyMHz)
        self.frameDisplay.labelStation['text']=self.radioStation.name
        self.frameControl.comboboxStation.set(self.valuesPlaylist[self.radioStations.station])
        self.station_play(self)
        img=imageUtils.set_opacity("icons/antenna.png",(16,16),(255,255,255),self.tea5767.get_signal_level())
        self.imgStationSignal=ImageTk.PhotoImage(img)    
        self.frameDisplay.labelStationSignal['image']=self.imgStationSignal
        self.tuneFreq.set(self.frequencyMHz)
        self.showvalue_scale_freq()
        self.tea5767.print_write_registers()
        self.tea5767.print_read_registers()
        
    def station_prev(self,event):
        self.radioStations.station-=1
        if self.radioStations.station < 0 :
            self.radioStations.station=self.radioStations.nStation-1
        self.radioStation.copy_of(self.radioStations.stations[self.radioStations.station])    
        self.frequencyMHz=self.radioStation.frequencyMHz
        self.frameDisplay.labelMHz['text']="{f:0.2f} MHz".format(f=self.radioStation.frequencyMHz)
        self.frameDisplay.labelStation['text']=self.radioStation.name  
        self.frameControl.comboboxStation.set(self.valuesPlaylist[self.radioStations.station])
        self.station_play(self)  
        img=imageUtils.set_opacity("icons/antenna.png",(16,16),(255,255,255),self.tea5767.get_signal_level())
        self.imgStationSignal=ImageTk.PhotoImage(img)    
        self.frameDisplay.labelStationSignal['image']=self.imgStationSignal
        self.tuneFreq.set(self.frequencyMHz)
        self.showvalue_scale_freq()
        self.tea5767.print_write_registers()
        self.tea5767.print_read_registers()
   
    def volume_up(self,event):
        self.volume+=1
        if self.volume > 15 :
            self.volume=15
        self.m036.audio_set_volume(self.volume)
        img=imageUtils.set_opacity("icons/audio-volume.png",(16,16),(255,255,255),self.volume)
        self.imgAudioVolume=ImageTk.PhotoImage(img)    
        self.frameDisplay.labelAudioVolume['image']=self.imgAudioVolume
        
    def volume_down(self,event):  
        self.volume-=1
        if self.volume < 0 :
            self.volume=0
        self.m036.audio_set_volume(self.volume)
        img=imageUtils.set_opacity("icons/audio-volume.png",(16,16),(255,255,255),self.volume)
        self.imgAudioVolume=ImageTk.PhotoImage(img)    
        self.frameDisplay.labelAudioVolume['image']=self.imgAudioVolume 
        
    def mute_unmute(self,event):
        if self.paused:
            self.m036.audio_unmute()
            self.frameButton.labelMuteUnmute['image']=self.imgPause
            img=imageUtils.set_opacity("icons/audio-volume.png",(16,16),(255,255,255),self.volume)
            self.imgAudioVolume=ImageTk.PhotoImage(img)    
            self.frameDisplay.labelAudioVolume['image']=self.imgAudioVolume 
            self.paused=False
        else:
            self.m036.audio_mute()
            self.frameButton.labelMuteUnmute['image']=self.imgStart
            img=imageUtils.set_opacity("icons/audio-volume.png",(16,16),(255,255,255),0)
            self.imgAudioVolume=ImageTk.PhotoImage(img)    
            self.frameDisplay.labelAudioVolume['image']=self.imgAudioVolume 
            self.paused=True
   
    def radio_frequency_limits(self,bandLimits):
        if bandLimits == 0 :
            self.frequencyMHz_min=87.5
            self.frequencyMHz_max=108.0
        else:
            self.frequencyMHz_min=76.0
            self.frequencyMHz_max=91.0
   
    def freq_tuned(self,event):
        self.frequencyMHz = float(self.tuneFreq.get())
        if self.frequencyMHz < self.frequencyMHz_min:
            self.frequencyMHz=self.frequencyMHz_min
        self.radioStation.frequencyMHz=self.frequencyMHz
        self.radioStation.name="..."
        self.frameDisplay.labelMHz['text']="{f:0.2f} MHz".format(f=self.radioStation.frequencyMHz)
        self.frameDisplay.labelStation['text']=self.radioStation.name      
        self.station_play(self)
        img=imageUtils.set_opacity("icons/antenna.png",(16,16),(255,255,255),self.tea5767.get_signal_level())
        self.imgStationSignal=ImageTk.PhotoImage(img)    
        self.frameDisplay.labelStationSignal['image']=self.imgStationSignal
        self.showvalue_scale_freq()
   
    def freq_down (self,event):
        print ("Frequency down")
        self.frequencyMHz -= self.deltaFrequencyMHz
        if self.frequencyMHz < self.frequencyMHz_min:
            self.frequencyMHz=self.frequencyMHz_min
        self.radioStation.frequencyMHz=self.frequencyMHz
        self.radioStation.name="..."
        self.frameDisplay.labelMHz['text']="{f:0.2f} MHz".format(f=self.radioStation.frequencyMHz)
        self.frameDisplay.labelStation['text']=self.radioStation.name 
        
        self.station_play(self)
        img=imageUtils.set_opacity("icons/antenna.png",(16,16),(255,255,255),self.tea5767.get_signal_level())
        self.imgStationSignal=ImageTk.PhotoImage(img)    
        self.frameDisplay.labelStationSignal['image']=self.imgStationSignal
        self.tuneFreq.set(self.frequencyMHz)
        self.showvalue_scale_freq()
        
    def freq_up(self,event):
        print ("Frequency up") 
        self.frequencyMHz += self.deltaFrequencyMHz
        if self.frequencyMHz > self.frequencyMHz_max:
            self.frequencyMHz=self.frequencyMHz_max
        self.radioStation.frequencyMHz=self.frequencyMHz
        self.radioStation.name="..."
        self.frameDisplay.labelMHz['text']="{f:0.2f} MHz".format(f=self.radioStation.frequencyMHz)
        self.frameDisplay.labelStation['text']=self.radioStation.name         
        self.station_play(self)
        img=imageUtils.set_opacity("icons/antenna.png",(16,16),(255,255,255),self.tea5767.get_signal_level())
        self.imgStationSignal=ImageTk.PhotoImage(img)    
        self.frameDisplay.labelStationSignal['image']=self.imgStationSignal
        self.tuneFreq.set(self.frequencyMHz)
        self.showvalue_scale_freq()
   
    def popupDialogStationAdd(self,event):
        d = dialogStationAdd(self.master)
        print("'Station Add' dialog is opened, waiting to respond")
        self.master.wait_window(d.root)
        
        if d.stationName :
            print("Station will be added:")
            newStation=RadioStation()
            newStation.frequencyMHz=self.frequencyMHz
            newStation.name=d.stationName
            print(' Station frequency: {f}'.format(f=newStation.frequencyMHz)) 
            print('      Station name: {sn}'.format(sn=newStation.name)) 
            self.radioStations.add_station(newStation)            
            self.radioStation.copy_of(newStation)
            self.stations2valuesPlaylist()
            self.frameControl.comboboxStation['values']=self.valuesPlaylist
            self.frameControl.comboboxStation.set(self.valuesPlaylist[self.radioStations.station]) 
            self.frameDisplay.labelMHz['text']="{f:0.2f} MHz".format(f=self.radioStation.frequencyMHz)
            self.frameDisplay.labelStation['text']=self.radioStation.name 
            self.station_play(self)  
            self.radioStations.write()

    def popupDialogStationRemove(self,event):
        d = dialogStationRemove(self.master,self.radioStation)
        print("'Station Remove' dialog is opened, waiting to respond")
        self.master.wait_window(d.root)
        print('Yes/No: {yn}'.format(yn=d.yesNo)) 
        if d.yesNo == 'Yes' :
            if self.radioStations.nStation > 1 :
                del self.radioStations.stations[self.radioStations.station]
                if self.radioStations.station == self.radioStations.nStation-1:
                    self.radioStations.station = self.radioStations.station -1
                self.radioStations.nStation=len(self.radioStations.stations)
                self.radioStation.copy_of(self.radioStations.stations[self.radioStations.station]) 
            self.stations2valuesPlaylist()
            self.frameControl.comboboxStation['values']=self.valuesPlaylist
            self.frameControl.comboboxStation.set(self.valuesPlaylist[self.radioStations.station])             
            self.frameDisplay.labelMHz['text']="{f:0.2f} MHz".format(f=self.radioStation.frequencyMHz)
            self.frameDisplay.labelStation['text']=self.radioStation.name  
            self.station_play(self)  
            self.radioStations.write()

    def delete(self):
        self.quit(self)
        
    def quit(self,event):
        self.m036.print_audio_codec_registers()
        self.m036.audio_mute()
        self.m036.close()
        self.radioStations.write()
        self.tvM036Settings.write(self.tvM036Settings.fileSettings)
        quit()
