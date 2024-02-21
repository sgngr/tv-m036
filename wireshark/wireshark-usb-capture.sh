#!/bin/bash
# Check whether your kernel was compiled with USBMON support
grep CONFIG_USB_MON /boot/config-`uname -r`
# Load usbmon kernel module
sudo modprobe usbmon
echo '- Check whether usbmon, has loaded properly'
lsmod | grep -i usbmon

echo 'To give regular users privileges, make the usbmonX device(s) readable:'
sudo setfacl -m u:$USER:r /dev/usbmon*
ls -l /dev/usbmon*

## list of interfaces 
# tshark  -D
## capture interface usbmon1
# dumpcap -i usbmon1
