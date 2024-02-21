# ==================================================
# A TV app for the AVerMedia AVerTV USB2.0 Plus
# Generate C code from USB capture files
# ==================================================
# Version:    0.1
# Author:     Sinan Güngör
# License:    GPL v2

def toByteArray(strHex):
    return bytearray([ int(x,16) for x in strHex.split(':')])

#=======================================================================

import sys
import pyshark

captureFile = sys.argv[1]
captureInterface=sys.argv[2]
captureFilter='usb.dst=="'+captureInterface+'" or usb.src=="'+captureInterface+'"' 

cmd="{} {} {}".format(sys.argv[0],sys.argv[1],sys.argv[2])
print('! //')
print('! //  This code generated from a wireshark USB capture file:')
print('! //     python',cmd,'| grep \'! \' | cut -c2-')
print('! //')

print ("* Capture File = {}".format(captureFile))
print ("* Capture Filter = {}".format(captureFilter))

captures = pyshark.FileCapture(captureFile, display_filter=captureFilter)

interface=0

for iCapture, capture in enumerate(captures):
    captureNumber=capture.number
    print("* Capture number:", captureNumber, "===========================================================")
    usb=capture.layers[0]
    usb_transfer_type=usb.transfer_type
    usb_data_len=usb.data_len
    usb_endpoint_address=usb.endpoint_address
    
    if usb.src == "host":
        data=capture.layers[1]
        data_usb_bmrequesttype=data.usb_bmrequesttype
        print("* Request type:", data_usb_bmrequesttype)
    
        if data_usb_bmrequesttype == '0x80':
            
            data_usb_setup_brequest=data.usb_setup_brequest
            
            if data_usb_setup_brequest == '6' :
                
                data_usb_descriptorindex=data.usb_descriptorindex
                data_usb_bdescriptortype=data.usb_bdescriptortype
                data_usb_setup_wlength=data.usb_setup_wlength
                data_usb_languageid=data.usb_languageid
                
                print("* Get Descriptor From Device ===================")
                print("*  Descriptor index: ",data_usb_descriptorindex)
                print("*  Descriptor type: ",data_usb_bdescriptortype)
                print("*  Length: ",data_usb_setup_wlength)
                
                if data_usb_bdescriptortype == "0x01" :
                    print("*   GET DESCRIPTOR request DEVICE")
                    print('! \n')
                    print('!     // Get Device Descriptor: Length={}  Type={}  Index={}'.format(data_usb_setup_wlength,data_usb_bdescriptortype,data.usb_descriptorindex))
                    print('!     fprintf(stderr, "Get device descriptor ...\\n");')
                    print('!     r = libusb_get_descriptor(devh, {}, {}, buf, {});'.format(data_usb_bdescriptortype,data.usb_descriptorindex,data_usb_setup_wlength))
                    
                if data_usb_bdescriptortype == "0x02" :
                    print("*   GET DESCRIPTOR request CONFIGURATION")
                    print('! \n')
                    print('!     // Get Configuration Descriptor: Length={}  Type={}  Index={}'.format(data_usb_setup_wlength,data_usb_bdescriptortype,data.usb_descriptorindex))
                    print('!     fprintf(stderr, "Get configuration descriptor ...\\n");')
                    print('!     r = libusb_get_descriptor(devh, {}, {}, buf, {});'.format(data_usb_bdescriptortype,data.usb_descriptorindex,data_usb_setup_wlength))            
                    
                if data_usb_bdescriptortype == "0x03" :
                    print("*   GET DESCRIPTOR request STRING")
                    print('! \n')
                    print('!     // Get String Descriptor: Length={}  Type={}  Index={}'.format(data_usb_setup_wlength,data_usb_bdescriptortype,data.usb_descriptorindex))
                    print('!     fprintf(stderr, "Get string descriptor ...\\n");')
                    print('!     r = libusb_get_descriptor(devh, {}, {}, buf, {});'.format(data_usb_bdescriptortype,data.usb_descriptorindex,data_usb_setup_wlength)) 

            if data_usb_setup_brequest == '8':
                data_usb_setup_wvalue=data.usb_setup_wvalue
                data_usb_setup_windex=data.usb_setup_windex
                data_usb_setup_wlength=data.usb_setup_wlength
                print("*   GET CONFIGURATION request")

        elif data_usb_bmrequesttype == '0x40' :
            data_usb_setup_brequest=data.usb_setup_brequest
            data_usb_setup_wvalue=data.usb_setup_wvalue
            data_usb_setup_windex=data.usb_setup_windex
            data_usb_setup_wlength=data.usb_setup_wlength
                    
            if interface != 2:
                print("*   URB_CONTROL out") 
                if data_usb_setup_wlength == '0' : 
                    print('!     ctrl_tx(0x{i:04x},0x{v:04x});'.format(i=int(data_usb_setup_windex),v=int(data_usb_setup_wvalue,16)))
                    # print('!     r = libusb_control_transfer(devh,{},{},{},{},buf,{},1000);'.format(data_usb_bmrequesttype,data_usb_setup_brequest,data_usb_setup_wvalue,data_usb_setup_windex,data_usb_setup_wlength))
                else:
                    print('!     r = libusb_control_transfer(devh,{},{},{},{},buf,{},1000);'.format(data_usb_bmrequesttype,data_usb_setup_brequest,data_usb_setup_wvalue,data_usb_setup_windex,data_usb_setup_wlength))
            else:
                print("*   URB_CONTROL out") 
                if data_usb_setup_wlength == '0' : 
                    print('!     ctrl_tx(0x{i:04x},0x{v:04x});'.format(i=int(data_usb_setup_windex),v=int(data_usb_setup_wvalue,16)))
                    # print('!     r = libusb_control_transfer(devh,{},{},{},{},buf,{},1000);'.format(data_usb_bmrequesttype,data_usb_setup_brequest,data_usb_setup_wvalue,data_usb_setup_windex,data_usb_setup_wlength))
                else:
                    print('!     r = libusb_control_transfer(devh,{},{},{},{},buf,{},1000);'.format(data_usb_bmrequesttype,data_usb_setup_brequest,data_usb_setup_wvalue,data_usb_setup_windex,data_usb_setup_wlength))
                
        elif data_usb_bmrequesttype == '0xc0' :
            data_usb_setup_brequest=data.usb_setup_brequest
            data_usb_setup_wvalue=data.usb_setup_wvalue
            data_usb_setup_windex=data.usb_setup_windex
            data_usb_setup_wlength=data.usb_setup_wlength
            if interface != 2:
                print("*   URB_CONTROL in")
                if data_usb_setup_wlength == '1':
                    print('!     c = ctrl_rx(0x{i:04x}); // {c}'.format(i=int(data_usb_setup_windex),c=captureNumber))
                    # print('!     r = libusb_control_transfer(devh,{},{},{},{},buf,{},1000);'.format(data_usb_bmrequesttype,data_usb_setup_brequest,data_usb_setup_wvalue,data_usb_setup_windex,data_usb_setup_wlength))
                else:
                    print('!     r = libusb_control_transfer(devh,{},{},{},{},buf,{},1000);'.format(data_usb_bmrequesttype,data_usb_setup_brequest,data_usb_setup_wvalue,data_usb_setup_windex,data_usb_setup_wlength))
            else:
                print("*   URB_CONTROL in")
                if data_usb_setup_wlength == '1':
                    print('!     c = ctrl_rx(0x{i:04x}); // {c}'.format(i=int(data_usb_setup_windex),c=captureNumber))
                    # print('!     r = libusb_control_transfer(devh,{},{},{},{},buf,{},1000);'.format(data_usb_bmrequesttype,data_usb_setup_brequest,data_usb_setup_wvalue,data_usb_setup_windex,data_usb_setup_wlength))
                else:
                    print('!     r = libusb_control_transfer(devh,{},{},{},{},buf,{},1000);'.format(data_usb_bmrequesttype,data_usb_setup_brequest,data_usb_setup_wvalue,data_usb_setup_windex,data_usb_setup_wlength)) 

        elif data_usb_bmrequesttype == '0x01' :
            print("*  Select Interface =============================")
            data_usb_bmrequesttype=data.usb_bmrequesttype
            data_usb_setup_brequest=data.usb_setup_brequest 
            data_usb_balternatesetting=data.usb_balternatesetting
            data_usb_setup_winterface=data.usb_setup_winterface
            data_usb_setup_wlength=data.usb_setup_wlength
            print("*  Interface: ",data_usb_setup_winterface)
            print("*  Internate setting: ",data_usb_balternatesetting)
            print("*   SET INTERFACE request")
            interface=int(data_usb_setup_winterface) 
            
            
            if interface == 2:
                print('! ') 
                print('!     // r = libusb_set_interface_alt_setting(devh, {}, {});'.format(data_usb_setup_winterface,data_usb_balternatesetting))
                print('! ')
            else:
                print('! ')  
                print('!     fprintf(stderr, "Select interface ...\\n");')
                print('!     r = libusb_set_interface_alt_setting(devh, {}, {});'.format(data_usb_setup_winterface,data_usb_balternatesetting)) 
                print('!     if (r != 0)')
                print('!        fprintf(stderr, "!! Select interface ({},{}) failed with error %d\\n", r);'.format(data_usb_setup_winterface,data_usb_balternatesetting))
                print('!     else')
                print('!        fprintf(stderr,"   Interface %d, Setting %d is active\\n",{},{});'.format(data_usb_setup_winterface,data_usb_balternatesetting))
                print('! ')        
            
        elif data_usb_bmrequesttype == '0x00' :
            
            data_usb_setup_brequest=data.usb_setup_brequest 
            
            print("*  Request: ",data_usb_setup_brequest)
            
            if data_usb_setup_brequest == '9':
                print("*  Set configuration =============================")
                data_usb_bconfigurationvalue=data.usb_bconfigurationvalue
                data_usb_setup_windex=data.usb_setup_windex
                data_usb_setup_wlength=data.usb_setup_wlength
                print("*  Configuration: ",data_usb_bconfigurationvalue)
                print("*   SET CONFIGURATION request")
                
                print('! ')  
                print('!     fprintf(stderr, "Getting configuration ...\\n");')
                print('!     r = libusb_get_configuration(devh,&current_config);')
                print('!     if (r != 0) {')
                print('!        fprintf(stderr, "!! Getting configuration failed with error %d\\n", r);')
                print('!     }')
                print('!     fprintf(stderr,"   Configuration %d is active\\n",current_config);')
                print('! ') 
                print('!     config={};'.format(data_usb_bconfigurationvalue))
                print('!     if ( current_config != config ) {')
                print('!        fprintf(stderr, "Setting configuration %d ...\\n",config);')
                print('!        r = libusb_set_configuration(devh,config);')
                print('!        if (r != 0) {')
                print('!            fprintf(stderr, "!! Setting configuration %d failed with error %d\\n", config, r);')
                print('!        }')         
                print('!     }')
                
            
            elif data_usb_setup_brequest == 3:
                print("*  Set feature ===================================")
                data.usb_setup_wfeatureselector=data.usb_setup_wfeatureselector
                data_usb_setup_windex=data.usb_setup_windex
                data_usb_setup_wlength=data.usb_setup_wlength
                print("*  Feature selector: ",data.usb_setup_wfeatureselector)
                print("*   SET FEATURE request")
                print("\n* Unimplemented request in the capture {} !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!".format(captureNumber))
                print("\n! // Unimplemented request in the capture {} !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!".format(captureNumber))
                
            else:
                print("\n* Unknown request in the capture {}, Request {} !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!".format(captureNumber,data_usb_setup_brequest))
                print("\n! // Unknown request in the capture {}, Request {} !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!".format(captureNumber,data_usb_setup_brequest))
                
        elif data_usb_bmrequesttype == '0x21' : 

            data_usb_setup_brequest=data.usb_setup_brequest
            data_usb_setup_wvalue=data.usb_setup_wvalue
            data_usb_setup_windex=data.usb_setup_windex
            data_usb_setup_wlength=data.usb_setup_wlength
            data_usb_data_fragment=data.usb_data_fragment
            print("*  Request type: ",data_usb_bmrequesttype)
            print("*  Request: ",data_usb_setup_brequest)
            print("*  Value: ",data_usb_setup_wvalue)
            print("*  Index: ",data_usb_setup_windex)
            print("*  Length: ",data_usb_setup_wlength)
            print("*  Data Fragment: ",data_usb_data_fragment)
            print("*   URB_CONTROL out")
            
            data=toByteArray(data_usb_data_fragment)
        
            for i  in range(len(data)):
                print('!     // buf[{}]={}'.format(i,data[i]))
            
            print('!     // r = libusb_control_transfer(devh,{},{},{},{},buf,{},1000);'.format(data_usb_bmrequesttype,data_usb_setup_brequest,data_usb_setup_wvalue,data_usb_setup_windex,data_usb_setup_wlength))
            
            # print("\n* Unknown request type in the capture {} !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!".format(captureNumber))

        elif data_usb_bmrequesttype == '0xa1' :
            data_usb_setup_brequest=data.usb_setup_brequest 
            data_usb_setup_wvalue=data.usb_setup_wvalue       
            data_usb_setup_windex=data.usb_setup_windex 
            data_usb_setup_wlength=data.usb_setup_wlength 
            print("*  Request type: ",data_usb_bmrequesttype)
            print("*  Request: ",data_usb_setup_brequest)
            print("*  Value: ",data_usb_setup_wvalue)
            print("*  Index: ",data_usb_setup_windex)
            print("*  Length: ",data_usb_setup_wlength)
            
            print("*   URB_CONTROL in")
            print('!     // r = libusb_control_transfer(devh,{},{},{},{},buf,{},1000);'.format(data_usb_bmrequesttype,data_usb_setup_brequest,data_usb_setup_wvalue,data_usb_setup_windex,data_usb_setup_wlength))
                
        else :    
            print("\n* Unknown request type in the capture {} !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!".format(captureNumber))
            print("\n! // Unknown request type in the capture {} !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!".format(captureNumber))

    if usb.dst == "host":
        usb_request_in=usb.request_in
        print("* Request in:", usb_request_in)
        if int(usb.data_len) > 0 : 
            data=capture.DATA
            for fieldName in data.field_names:
                print ("*  ", fieldName, data.get_field_value(fieldName).showname)
                if fieldName == 'usb_control_response':
                    print("! //  Request in:", usb_request_in, " ", data.get_field_value(fieldName).showname )
