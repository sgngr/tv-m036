 //
 //  This code generated from a wireshark USB capture file:
 //     python pcap2c.py m036-1.45.0-Init.pcap 1.45.0 | grep '! ' | cut -c2-
 //
 
     // Get Device Descriptor: Length=18  Type=0x01  Index=0x00
     fprintf(stderr, "Get device descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x01, 0x00, buf, 18);
 
     // Get Configuration Descriptor: Length=9  Type=0x02  Index=0x00
     fprintf(stderr, "Get configuration descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x02, 0x00, buf, 9);
 
     // Get Configuration Descriptor: Length=251  Type=0x02  Index=0x00
     fprintf(stderr, "Get configuration descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x02, 0x00, buf, 251);
 
     // Get Device Descriptor: Length=18  Type=0x01  Index=0x00
     fprintf(stderr, "Get device descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x01, 0x00, buf, 18);
 
     // Get Configuration Descriptor: Length=251  Type=0x02  Index=0x00
     fprintf(stderr, "Get configuration descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x02, 0x00, buf, 251);
 
     fprintf(stderr, "Getting configuration ...\n");
     r = libusb_get_configuration(devh,&current_config);
     if (r != 0) {
        fprintf(stderr, "!! Getting configuration failed with error %d\n", r);
     }
     fprintf(stderr,"   Configuration %d is active\n",current_config);
 
     config=1;
     if ( current_config != config ) {
        fprintf(stderr, "Setting configuration %d ...\n",config);
        r = libusb_set_configuration(devh,config);
        if (r != 0) {
            fprintf(stderr, "!! Setting configuration %d failed with error %d\n", config, r);
        }
     }
 
     // Get Device Descriptor: Length=64  Type=0x01  Index=0x00
     fprintf(stderr, "Get device descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x01, 0x00, buf, 64);
 
     // Get Device Descriptor: Length=18  Type=0x01  Index=0x00
     fprintf(stderr, "Get device descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x01, 0x00, buf, 18);
 
     // Get Configuration Descriptor: Length=251  Type=0x02  Index=0x00
     fprintf(stderr, "Get configuration descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x02, 0x00, buf, 251);
 
     fprintf(stderr, "Getting configuration ...\n");
     r = libusb_get_configuration(devh,&current_config);
     if (r != 0) {
        fprintf(stderr, "!! Getting configuration failed with error %d\n", r);
     }
     fprintf(stderr,"   Configuration %d is active\n",current_config);
 
     config=1;
     if ( current_config != config ) {
        fprintf(stderr, "Setting configuration %d ...\n",config);
        r = libusb_set_configuration(devh,config);
        if (r != 0) {
            fprintf(stderr, "!! Setting configuration %d failed with error %d\n", config, r);
        }
     }
 
     // Get Device Descriptor: Length=18  Type=0x01  Index=0x00
     fprintf(stderr, "Get device descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x01, 0x00, buf, 18);
 
     // Get Configuration Descriptor: Length=9  Type=0x02  Index=0x00
     fprintf(stderr, "Get configuration descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x02, 0x00, buf, 9);
 
     // Get Configuration Descriptor: Length=255  Type=0x02  Index=0x00
     fprintf(stderr, "Get configuration descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x02, 0x00, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x00
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x00, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x02
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x02, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x00
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x00, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x02
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x02, buf, 255);
 
     // Get Device Descriptor: Length=18  Type=0x01  Index=0x00
     fprintf(stderr, "Get device descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x01, 0x00, buf, 18);
 
     // Get Configuration Descriptor: Length=9  Type=0x02  Index=0x00
     fprintf(stderr, "Get configuration descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x02, 0x00, buf, 9);
 
     // Get Configuration Descriptor: Length=251  Type=0x02  Index=0x00
     fprintf(stderr, "Get configuration descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x02, 0x00, buf, 251);
 
     fprintf(stderr, "Select interface ...\n");
     r = libusb_set_interface_alt_setting(devh, 0, 0);
     if (r != 0)
        fprintf(stderr, "!! Select interface (0,0) failed with error %d\n", r);
     else
        fprintf(stderr,"   Interface %d, Setting %d is active\n",0,0);
 
 
     // r = libusb_set_interface_alt_setting(devh, 2, 0);
 
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x00
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x00, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x02
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x02, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x00
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x00, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x02
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x02, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x00
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x00, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x02
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x02, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x00
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x00, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x02
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x02, buf, 255);
 
     fprintf(stderr, "Select interface ...\n");
     r = libusb_set_interface_alt_setting(devh, 0, 0);
     if (r != 0)
        fprintf(stderr, "!! Select interface (0,0) failed with error %d\n", r);
     else
        fprintf(stderr,"   Interface %d, Setting %d is active\n",0,0);
 
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0002,0x00ef);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0066);
     ctrl_tx(0x0000,0x0067);
     ctrl_tx(0x0000,0x0066);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0065);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0065);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0065);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0065);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0065);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0065);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0065);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0000,0x0065);
     ctrl_tx(0x0000,0x0061);
     c = ctrl_rx(0x0000); // 129
 //  Request in: 129   CONTROL response data: 61
     c = ctrl_rx(0x0002); // 131
 //  Request in: 131   CONTROL response data: ef
     ctrl_tx(0x0002,0x00ef);
     ctrl_tx(0x0000,0x0061);
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
     ctrl_tx(0x0005,0x0000);
     ctrl_tx(0x0007,0x0002);
     ctrl_tx(0x000d,0x0000);
     ctrl_tx(0x000f,0x0002);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0300,0x0012);
     ctrl_tx(0x0350,0x002d);
     ctrl_tx(0x0351,0x0001);
     ctrl_tx(0x0352,0x0000);
     ctrl_tx(0x0353,0x0000);
     ctrl_tx(0x0300,0x0080);
     ctrl_tx(0x0018,0x0010);
     ctrl_tx(0x0019,0x0000);
     ctrl_tx(0x0202,0x001e);
     ctrl_tx(0x0110,0x0050);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0019);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0050);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x0009);
     ctrl_tx(0x0117,0x0001);
     c = ctrl_rx(0x0100); // 191
 //  Request in: 191   CONTROL response data: 00
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x007f);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0001);
     c = ctrl_rx(0x0201); // 203
 //  Request in: 203   CONTROL response data: 04
     ctrl_tx(0x0208,0x0080);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 209
 //  Request in: 209   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 211
 //  Request in: 211   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 213
 //  Request in: 213   CONTROL response data: 51
     ctrl_tx(0x0208,0x0081);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 219
 //  Request in: 219   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 221
 //  Request in: 221   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 223
 //  Request in: 223   CONTROL response data: 50
     ctrl_tx(0x0203,0x00a0);
     ctrl_tx(0x0208,0x003c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 231
 //  Request in: 231   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 233
 //  Request in: 233   CONTROL response data: 79
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
     ctrl_tx(0x0005,0x0000);
     ctrl_tx(0x0007,0x0002);
     ctrl_tx(0x000d,0x0000);
     ctrl_tx(0x000f,0x0002);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0300,0x0012);
     ctrl_tx(0x0350,0x002d);
     ctrl_tx(0x0351,0x0001);
     ctrl_tx(0x0352,0x0000);
     ctrl_tx(0x0353,0x0000);
     ctrl_tx(0x0300,0x0080);
     ctrl_tx(0x0018,0x0010);
     ctrl_tx(0x0019,0x0000);
     ctrl_tx(0x0202,0x001e);
     ctrl_tx(0x0110,0x0050);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0019);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0050);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x0009);
     ctrl_tx(0x0117,0x0001);
     c = ctrl_rx(0x0100); // 289
 //  Request in: 289   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 299
 //  Request in: 299   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 307
 //  Request in: 307   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 315
 //  Request in: 315   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 317
 //  Request in: 317   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 325
 //  Request in: 325   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 327
 //  Request in: 327   CONTROL response data: 04
     ctrl_tx(0x0500,0x0094);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0506,0x0001);
     ctrl_tx(0x0507,0x0000);
     c = ctrl_rx(0x0100); // 337
 //  Request in: 337   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 341
 //  Request in: 341   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 351
 //  Request in: 351   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 359
 //  Request in: 359   CONTROL response data: 04
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 367
 //  Request in: 367   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 369
 //  Request in: 369   CONTROL response data: 88
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 383
 //  Request in: 383   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 385
 //  Request in: 385   CONTROL response data: 80
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 399
 //  Request in: 399   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 401
 //  Request in: 401   CONTROL response data: 88
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 415
 //  Request in: 415   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 417
 //  Request in: 417   CONTROL response data: 88
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0008);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001a);
     ctrl_tx(0x0502,0x0004);
     ctrl_tx(0x0503,0x0004);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
 // Unknown request in the capture 443, Request 3 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x00
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x00, buf, 255);
 
     // Get String Descriptor: Length=255  Type=0x03  Index=0x02
     fprintf(stderr, "Get string descriptor ...\n");
     r = libusb_get_descriptor(devh, 0x03, 0x02, buf, 255);
 
     // r = libusb_set_interface_alt_setting(devh, 2, 0);
 
     // buf[0]=0
     // r = libusb_control_transfer(devh,0x21,1,0x0100,769,buf,1,1000);
     // r = libusb_control_transfer(devh,0xa1,130,0x0200,769,buf,2,1000);
 //  Request in: 453   CONTROL response data: 0000
     // r = libusb_control_transfer(devh,0xa1,131,0x0200,769,buf,2,1000);
 //  Request in: 455   CONTROL response data: 001f
     // r = libusb_control_transfer(devh,0xa1,132,0x0200,769,buf,2,1000);
 //  Request in: 457   CONTROL response data: 000a
     // r = libusb_control_transfer(devh,0xa1,129,0x0200,769,buf,2,1000);
 //  Request in: 459   CONTROL response data: 0000
     // buf[0]=128
     // buf[1]=15
     // r = libusb_control_transfer(devh,0x21,1,0x0200,769,buf,2,1000);
     // r = libusb_control_transfer(devh,0xa1,130,0x0402,769,buf,1,1000);
     // r = libusb_control_transfer(devh,0xa1,129,0x0100,769,buf,1,1000);
 //  Request in: 465   CONTROL response data: 00
     // buf[0]=129
     // buf[1]=15
     // r = libusb_control_transfer(devh,0x21,1,0x0200,769,buf,2,1000);
