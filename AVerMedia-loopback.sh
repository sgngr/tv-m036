#!/bin/bash
sudo modprobe -rf v4l2loopback
sudo modprobe v4l2loopback exclusive_caps=0,0 video_nr=0,1 card_label="AVerMedia AVerTV USB 2.0 Plus","AVerMedia AVerTV USB 2.0"
sleep 0.1 
v4l2-ctl  --list-devices
# v4l2-ctl -d /dev/video0 -D
# v4l2-ctl -d /dev/video0 -L
