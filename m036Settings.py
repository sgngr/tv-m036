"""
================================================
A TV app for the AVerMedia AVerTV USB2.0 Plus
Application settings module
================================================
Version:    0.1
Author:     Sinan Güngör
License:    GPL v2
"""

import os
import platform
import xml.etree.ElementTree as ET
        
class Settings():
    def __init__(self):
        self.fileSettings="tvM036-settings.xml"    
        self.guiVideoHeight=640
        self.guiVideoAspectRatio=16/9
        self.vlcCropLeft=10
        self.vlcCropTop=8
        self.vlcCropRight=0
        self.vlcCropBottom=0
        self.v4l2Device='/dev/video0'
        self.streamer='./m036-streamer'
        self.audioSource=None
        self.audioSourceVolume=0.25
        self.audioPlayerVolume=50
        self.m036OperatingMode=0
        self.m036AudioSource=0
        self.m036VideoSource=0
        self.m036TvVideoStandard=0
        self.m036TvCaptureStartX=0
        self.m036TvCaptureStartY=0
        self.m036TvCaptureEndX=1280
        self.m036TvCaptureEndY=240
        self.m036CompositeVideoStandard=0
        self.m036CompositeCaptureStartX=0
        self.m036CompositeCaptureStartY=0
        self.m036CompositeCaptureEndX=1280
        self.m036CompositeCaptureEndY=240
        self.m036SVideoVideoStandard=0
        self.m036SVideoCaptureStartX=0
        self.m036SVideoCaptureStartY=0
        self.m036SVideoCaptureEndX=1280
        self.m036SVideoCaptureEndY=240

        if os.path.exists(self.fileSettings):
            self.read(self.fileSettings)
        
    def read (self,file):
        tree=ET.parse(file)
        root=tree.getroot()
        self.v4l2Device=root.find('v4l2_device').text  
        self.audioSource=root.find('audio_source').text
        if self.audioSource=='None' :
            self.audioSource=None
        self.audioSourceVolume=float(root.find('audio_source_volume').text) 
        self.audioPlayerVolume=int(root.find('audio_player_volume').text)
        
        self.m036OperatingMode=int(root.find('m036_operating_mode').text)

        self.m036AudioSource=int(root.find('m036_audio_source').text)
        self.m036VideoSource=int(root.find('m036_video_source').text) 
 
        self.m036TvVideoStandard=int(root.find('m036_tv_video_standard').text)
        self.m036TvCaptureStartX=int(root.find('m036_tv_capture_start_x').text)
        self.m036TvCaptureStartY=int(root.find('m036_tv_capture_start_y').text)
        self.m036TvCaptureEndX=int(root.find('m036_tv_capture_end_x').text)
        self.m036TvCaptureEndY=int(root.find('m036_tv_capture_end_y').text)
        
        self.m036SVideoVideoStandard=int(root.find('m036_svideo_video_standard').text)
        self.m036SVideoCaptureStartX=int(root.find('m036_svideo_capture_start_x').text)
        self.m036SVideoCaptureStartY=int(root.find('m036_svideo_capture_start_y').text)
        self.m036SVideoCaptureEndX=int(root.find('m036_svideo_capture_end_x').text)
        self.m036SVideoCaptureEndY=int(root.find('m036_svideo_capture_end_y').text)

        self.m036CompositeVideoStandard=int(root.find('m036_composite_video_standard').text)
        self.m036CompositeCaptureStartX=int(root.find('m036_composite_capture_start_x').text)
        self.m036CompositeCaptureStartY=int(root.find('m036_composite_capture_start_y').text)
        self.m036CompositeCaptureEndX=int(root.find('m036_composite_capture_end_x').text)
        self.m036CompositeCaptureEndY=int(root.find('m036_composite_capture_end_y').text)
        
    def write(self,file):
        root = ET.Element("settings")
        r=ET.SubElement(root,"v4l2_device").text="{}".format(self.v4l2Device)
        r=ET.SubElement(root,"audio_source").text="{}".format(self.audioSource)
        r=ET.SubElement(root,"audio_source_volume").text="{v:.2f}".format(v=self.audioSourceVolume)
        r=ET.SubElement(root,"audio_player_volume").text="{v}".format(v=self.audioPlayerVolume)
        
        r=ET.SubElement(root,"m036_operating_mode").text="{}".format(self.m036OperatingMode)
        
        r=ET.SubElement(root,"m036_audio_source").text="{}".format(self.m036AudioSource)
        r=ET.SubElement(root,"m036_video_source").text="{}".format(self.m036VideoSource)
        
        r=ET.SubElement(root,"m036_tv_video_standard").text="{}".format(self.m036TvVideoStandard)
        r=ET.SubElement(root,"m036_tv_capture_start_x").text="{}".format(self.m036TvCaptureStartX)
        r=ET.SubElement(root,"m036_tv_capture_start_y").text="{}".format(self.m036TvCaptureStartY)        
        r=ET.SubElement(root,"m036_tv_capture_end_x").text="{}".format(self.m036TvCaptureEndX)
        r=ET.SubElement(root,"m036_tv_capture_end_y").text="{}".format(self.m036TvCaptureEndY)
        
        r=ET.SubElement(root,"m036_composite_video_standard").text="{}".format(self.m036CompositeVideoStandard)
        r=ET.SubElement(root,"m036_composite_capture_start_x").text="{}".format(self.m036CompositeCaptureStartX)
        r=ET.SubElement(root,"m036_composite_capture_start_y").text="{}".format(self.m036CompositeCaptureStartY)        
        r=ET.SubElement(root,"m036_composite_capture_end_x").text="{}".format(self.m036CompositeCaptureEndX)
        r=ET.SubElement(root,"m036_composite_capture_end_y").text="{}".format(self.m036CompositeCaptureEndY)

        r=ET.SubElement(root,"m036_svideo_video_standard").text="{}".format(self.m036SVideoVideoStandard)
        r=ET.SubElement(root,"m036_svideo_capture_start_x").text="{}".format(self.m036SVideoCaptureStartX)
        r=ET.SubElement(root,"m036_svideo_capture_start_y").text="{}".format(self.m036SVideoCaptureStartY)        
        r=ET.SubElement(root,"m036_svideo_capture_end_x").text="{}".format(self.m036SVideoCaptureEndX)
        r=ET.SubElement(root,"m036_svideo_capture_end_y").text="{}".format(self.m036SVideoCaptureEndY)
        
        tree = ET.ElementTree(root)
        tree.write(file,encoding="utf-8", xml_declaration=True)
        from shutil import which
        if which('xml') :
            cmd="xml format {file} > {file}.1".format(file=self.fileSettings)
            print(cmd)
            os.system(cmd)
            cmd="mv {file}.1 {file} ".format(file=self.fileSettings)
            print(cmd)
            os.system(cmd)

    def print(self):
        print("Application Settings:")
        print(" v4l2 loopback device:",self.v4l2Device)
        print(" Audio player source:",self.audioSource)
        print(" Audio source volume:","{v:.2f}".format(v=self.audioSourceVolume))
        print(" Audio player volume:","{v}".format(v=self.audioPlayerVolume))
        print(" Operating mode:",self.m036OperatingMode)
        print(" Audio source:",self.m036AudioSource)
        print(" Video source:",self.m036VideoSource)
        print(" TV Video standard:",self.m036TvVideoStandard)
        print(" TV capture start X:",self.m036TvCaptureStartX)
        print(" TV capture start Y:",self.m036TvCaptureStartY)
        print(" TV capture end X:",self.m036TvCaptureEndX)
        print(" TV capture end Y:",self.m036TvCaptureEndY)
        print(" S-Video Video standard:",self.m036SVideoVideoStandard)
        print(" S-Video capture start X:",self.m036SVideoCaptureStartX)
        print(" S-Video capture start Y:",self.m036SVideoCaptureStartY)
        print(" S-Video capture end X:",self.m036SVideoCaptureEndX)
        print(" S-Video capture end Y:",self.m036SVideoCaptureEndY)
        print(" Composite Video standard:",self.m036CompositeVideoStandard)
        print(" Composite capture start X:",self.m036CompositeCaptureStartX)
        print(" Composite capture start Y:",self.m036CompositeCaptureStartY)
        print(" Composite capture end X:",self.m036CompositeCaptureEndX)
        print(" Composite capture end Y:",self.m036CompositeCaptureEndY)
