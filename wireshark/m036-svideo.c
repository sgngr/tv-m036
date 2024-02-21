 //~
 //~ This code is rewritten to use some subroutine functions:
 //~    python convert-functions.py m036-svideo-0.c
 //~
 //
 //  This code generated from a wireshark USB capture file:
 //     python pcap2c.py m036-1.45.0-S-Video.pcap 1.45.0 | grep '! ' | cut -c2-
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

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 15
//~   //  Request in: 15   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 21
//~   //  Request in: 21   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 23
//~   //  Request in: 23   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 25
//~   //  Request in: 25   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 33
//~   //  Request in: 33   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 39
//~   //  Request in: 39   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 41
//~   //  Request in: 41   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 49
//~   //  Request in: 49   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 55
//~   //  Request in: 55   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 57
//~   //  Request in: 57   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 65
//~   //  Request in: 65   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 71
//~   //  Request in: 71   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 73
//~   //  Request in: 73   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 75
//~   //  Request in: 75   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 83
//~   //  Request in: 83   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 89
//~   //  Request in: 89   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 91
//~   //  Request in: 91   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 93
//~   //  Request in: 93   CONTROL response data: 08
     c = sbi_read(0x0008);

//~       ctrl_tx(0x0203,0x00a0);
     sbi_select_device(0x00a0);

//~       ctrl_tx(0x0208,0x003c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 101
//~   //  Request in: 101   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 103
//~   //  Request in: 103   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 105
//~   //  Request in: 105   CONTROL response data: 79
     c = sbi_read(0x003c);

//~       ctrl_tx(0x0203,0x00a0);
     sbi_select_device(0x00a0);

//~       ctrl_tx(0x0208,0x003d);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 113
//~   //  Request in: 113   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 115
//~   //  Request in: 115   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 117
//~   //  Request in: 117   CONTROL response data: 17
     c = sbi_read(0x003d);

//~       ctrl_tx(0x0203,0x00a0);
     sbi_select_device(0x00a0);

//~       ctrl_tx(0x0208,0x003e);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 125
//~   //  Request in: 125   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 127
//~   //  Request in: 127   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 129
//~   //  Request in: 129   CONTROL response data: 08
     c = sbi_read(0x003e);

//~       ctrl_tx(0x0203,0x00a0);
     sbi_select_device(0x00a0);

//~       ctrl_tx(0x0208,0x003f);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 137
//~   //  Request in: 137   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 139
//~   //  Request in: 139   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 141
//~   //  Request in: 141   CONTROL response data: 07
     c = sbi_read(0x003f);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0001);
//~       ctrl_tx(0x0503,0x0001);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0101);
     c = ctrl_rx(0x0000); // 151
 //  Request in: 151   CONTROL response data: 64
     c = ctrl_rx(0x0002); // 153
 //  Request in: 153   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 209
 //  Request in: 209   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 219
//~   //  Request in: 219   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 227
//~   //  Request in: 227   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 235
//~   //  Request in: 235   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 243
//~   //  Request in: 243   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 245
//~   //  Request in: 245   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 247
 //  Request in: 247   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0104,0x0000);
     ctrl_tx(0x0105,0x0000);
     ctrl_tx(0x0106,0x0000);
 
     fprintf(stderr, "Select interface ...\n");
     r = libusb_set_interface_alt_setting(devh, 0, 0);
     if (r != 0)
        fprintf(stderr, "!! Select interface (0,0) failed with error %d\n", r);
     else
        fprintf(stderr,"   Interface %d, Setting %d is active\n",0,0);
 
     ctrl_tx(0x0500,0x0094);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0506,0x0001);
     ctrl_tx(0x0507,0x0000);
     c = ctrl_rx(0x0100); // 271
 //  Request in: 271   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 275
 //  Request in: 275   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 285
//~   //  Request in: 285   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 293
//~   //  Request in: 293   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 347
 //  Request in: 347   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 357
//~   //  Request in: 357   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 365
//~   //  Request in: 365   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 367
//~   //  Request in: 367   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 375
//~   //  Request in: 375   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 383
//~   //  Request in: 383   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 385
//~   //  Request in: 385   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 387
 //  Request in: 387   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0100); // 395
 //  Request in: 395   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 399
 //  Request in: 399   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 409
//~   //  Request in: 409   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 411
//~   //  Request in: 411   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 419
//~   //  Request in: 419   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0110,0x000c);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x058c);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 451
//~   //  Request in: 451   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 457
//~   //  Request in: 457   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 459
//~   //  Request in: 459   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 461
//~   //  Request in: 461   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 469
//~   //  Request in: 469   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 475
//~   //  Request in: 475   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 477
//~   //  Request in: 477   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 479
//~   //  Request in: 479   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 487
//~   //  Request in: 487   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 493
//~   //  Request in: 493   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 495
//~   //  Request in: 495   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 497
//~   //  Request in: 497   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 505
//~   //  Request in: 505   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 511
//~   //  Request in: 511   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 513
//~   //  Request in: 513   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 515
//~   //  Request in: 515   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 523
//~   //  Request in: 523   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 529
//~   //  Request in: 529   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 531
//~   //  Request in: 531   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 533
//~   //  Request in: 533   CONTROL response data: 08
     c = sbi_read(0x0008);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 543
//~   //  Request in: 543   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 551
//~   //  Request in: 551   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 553
//~   //  Request in: 553   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 561
//~   //  Request in: 561   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 563
//~   //  Request in: 563   CONTROL response data: 04
     sbi_write(0x0002,0x0049);

//~       ctrl_tx(0x0203,0x00c2);
     sbi_select_device(0x00c2);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x006e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 573
//~   //  Request in: 573   CONTROL response data: 04
     sbi_write(0x0002,0x006e);

//~       ctrl_tx(0x0204,0x00c6);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 581
//~   //  Request in: 581   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 583
//~   //  Request in: 583   CONTROL response data: 04
     sbi_write(0x00c6,0x0001);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 593
//~   //  Request in: 593   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 595
//~   //  Request in: 595   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 603
//~   //  Request in: 603   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 605
//~   //  Request in: 605   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 613
//~   //  Request in: 613   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 615
//~   //  Request in: 615   CONTROL response data: 04
     sbi_write(0x0002,0x0049);
     c = ctrl_rx(0x0100); // 617
 //  Request in: 617   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 625
//~   //  Request in: 625   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 627
//~   //  Request in: 627   CONTROL response data: 80
     w = ai_get_MX(0x0002);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0002,0x0000);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 641
//~   //  Request in: 641   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 643
//~   //  Request in: 643   CONTROL response data: 80
     w = ai_get_MX(0x001c);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0000);
     c = ctrl_rx(0x0100); // 653
 //  Request in: 653   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 657
 //  Request in: 657   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 669
//~   //  Request in: 669   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 671
//~   //  Request in: 671   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 679
//~   //  Request in: 679   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 681
//~   //  Request in: 681   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 689
//~   //  Request in: 689   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 691
//~   //  Request in: 691   CONTROL response data: 88
     w = ai_get_MX(0x0010);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0088);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0010,0x8808);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 705
//~   //  Request in: 705   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 707
//~   //  Request in: 707   CONTROL response data: 88
     w = ai_get_MX(0x0012);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0012,0x0808);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 721
//~   //  Request in: 721   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 723
//~   //  Request in: 723   CONTROL response data: 80
     w = ai_get_MX(0x000e);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x000e,0x0008);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 737
//~   //  Request in: 737   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 739
//~   //  Request in: 739   CONTROL response data: 88
     w = ai_get_MX(0x0016);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0016,0x0808);

//~       ctrl_tx(0x0504,0x001a);
//~       ctrl_tx(0x0502,0x0001);
//~       ctrl_tx(0x0503,0x0001);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001a,0x0101);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0001);
//~       ctrl_tx(0x0503,0x0001);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0101);
     c = ctrl_rx(0x0000); // 765
 //  Request in: 765   CONTROL response data: 64
     c = ctrl_rx(0x0002); // 767
 //  Request in: 767   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 823
 //  Request in: 823   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 833
//~   //  Request in: 833   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 835
//~   //  Request in: 835   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 843
//~   //  Request in: 843   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 845
//~   //  Request in: 845   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 853
//~   //  Request in: 853   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 855
//~   //  Request in: 855   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 863
//~   //  Request in: 863   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 865
//~   //  Request in: 865   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 867
 //  Request in: 867   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0104,0x0000);
     ctrl_tx(0x0105,0x0000);
     ctrl_tx(0x0106,0x0000);
 
     fprintf(stderr, "Select interface ...\n");
     r = libusb_set_interface_alt_setting(devh, 0, 0);
     if (r != 0)
        fprintf(stderr, "!! Select interface (0,0) failed with error %d\n", r);
     else
        fprintf(stderr,"   Interface %d, Setting %d is active\n",0,0);
 
     ctrl_tx(0x0500,0x0094);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0506,0x0001);
     ctrl_tx(0x0507,0x0000);
     c = ctrl_rx(0x0100); // 891
 //  Request in: 891   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 895
 //  Request in: 895   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 905
//~   //  Request in: 905   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 913
//~   //  Request in: 913   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 967
 //  Request in: 967   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 977
//~   //  Request in: 977   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 985
//~   //  Request in: 985   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 987
//~   //  Request in: 987   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 995
//~   //  Request in: 995   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 997
//~   //  Request in: 997   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1005
//~   //  Request in: 1005   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 1007
 //  Request in: 1007   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 1015
 //  Request in: 1015   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1019
 //  Request in: 1019   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1029
//~   //  Request in: 1029   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1031
//~   //  Request in: 1031   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1039
//~   //  Request in: 1039   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1041
//~   //  Request in: 1041   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0110,0x000c);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x058c);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1073
//~   //  Request in: 1073   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1075
//~   //  Request in: 1075   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1081
//~   //  Request in: 1081   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1083
//~   //  Request in: 1083   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1085
//~   //  Request in: 1085   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1093
//~   //  Request in: 1093   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1095
//~   //  Request in: 1095   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1101
//~   //  Request in: 1101   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1103
//~   //  Request in: 1103   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1105
//~   //  Request in: 1105   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1113
//~   //  Request in: 1113   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1115
//~   //  Request in: 1115   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1121
//~   //  Request in: 1121   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1123
//~   //  Request in: 1123   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1125
//~   //  Request in: 1125   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1133
//~   //  Request in: 1133   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1139
//~   //  Request in: 1139   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1141
//~   //  Request in: 1141   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1143
//~   //  Request in: 1143   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1151
//~   //  Request in: 1151   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1153
//~   //  Request in: 1153   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1159
//~   //  Request in: 1159   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1161
//~   //  Request in: 1161   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1163
//~   //  Request in: 1163   CONTROL response data: 08
     c = sbi_read(0x0008);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1173
//~   //  Request in: 1173   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1181
//~   //  Request in: 1181   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1183
//~   //  Request in: 1183   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1191
//~   //  Request in: 1191   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1193
//~   //  Request in: 1193   CONTROL response data: 04
     sbi_write(0x0002,0x0049);

//~       ctrl_tx(0x0203,0x00c2);
     sbi_select_device(0x00c2);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x006e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1203
//~   //  Request in: 1203   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1205
//~   //  Request in: 1205   CONTROL response data: 04
     sbi_write(0x0002,0x006e);

//~       ctrl_tx(0x0204,0x00c6);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1213
//~   //  Request in: 1213   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1215
//~   //  Request in: 1215   CONTROL response data: 04
     sbi_write(0x00c6,0x0001);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1225
//~   //  Request in: 1225   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1227
//~   //  Request in: 1227   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1235
//~   //  Request in: 1235   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1237
//~   //  Request in: 1237   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1245
//~   //  Request in: 1245   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1247
//~   //  Request in: 1247   CONTROL response data: 04
     sbi_write(0x0002,0x0049);
     c = ctrl_rx(0x0100); // 1249
 //  Request in: 1249   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1257
//~   //  Request in: 1257   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1259
//~   //  Request in: 1259   CONTROL response data: 80
     w = ai_get_MX(0x0002);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0002,0x0000);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1273
//~   //  Request in: 1273   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1275
//~   //  Request in: 1275   CONTROL response data: 80
     w = ai_get_MX(0x001c);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0000);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1289
//~   //  Request in: 1289   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1291
//~   //  Request in: 1291   CONTROL response data: 00
     w = ai_get_MX(0x0002);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0080);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0002,0x8000);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1305
//~   //  Request in: 1305   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1307
//~   //  Request in: 1307   CONTROL response data: 00
     w = ai_get_MX(0x001c);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0080);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x8000);
     c = ctrl_rx(0x0000); // 1317
 //  Request in: 1317   CONTROL response data: 64
     c = ctrl_rx(0x0002); // 1319
 //  Request in: 1319   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 1375
 //  Request in: 1375   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1385
//~   //  Request in: 1385   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1393
//~   //  Request in: 1393   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1401
//~   //  Request in: 1401   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1409
//~   //  Request in: 1409   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 1411
 //  Request in: 1411   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0104,0x0000);
     ctrl_tx(0x0105,0x0000);
     ctrl_tx(0x0106,0x0000);
 
     fprintf(stderr, "Select interface ...\n");
     r = libusb_set_interface_alt_setting(devh, 0, 0);
     if (r != 0)
        fprintf(stderr, "!! Select interface (0,0) failed with error %d\n", r);
     else
        fprintf(stderr,"   Interface %d, Setting %d is active\n",0,0);
 
     ctrl_tx(0x0500,0x0094);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0506,0x0001);
     ctrl_tx(0x0507,0x0000);
     c = ctrl_rx(0x0100); // 1435
 //  Request in: 1435   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1439
 //  Request in: 1439   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1449
//~   //  Request in: 1449   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1457
//~   //  Request in: 1457   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 1511
 //  Request in: 1511   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1521
//~   //  Request in: 1521   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1529
//~   //  Request in: 1529   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1537
//~   //  Request in: 1537   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1545
//~   //  Request in: 1545   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 1547
 //  Request in: 1547   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 1555
 //  Request in: 1555   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1559
 //  Request in: 1559   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1569
//~   //  Request in: 1569   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1571
//~   //  Request in: 1571   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1579
//~   //  Request in: 1579   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1581
//~   //  Request in: 1581   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0110,0x000c);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x058c);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1613
//~   //  Request in: 1613   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1619
//~   //  Request in: 1619   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1621
//~   //  Request in: 1621   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1629
//~   //  Request in: 1629   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1635
//~   //  Request in: 1635   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1637
//~   //  Request in: 1637   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1645
//~   //  Request in: 1645   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1651
//~   //  Request in: 1651   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1653
//~   //  Request in: 1653   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1661
//~   //  Request in: 1661   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1667
//~   //  Request in: 1667   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1669
//~   //  Request in: 1669   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1671
//~   //  Request in: 1671   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1679
//~   //  Request in: 1679   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1685
//~   //  Request in: 1685   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1687
//~   //  Request in: 1687   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1689
//~   //  Request in: 1689   CONTROL response data: 08
     c = sbi_read(0x0008);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1699
//~   //  Request in: 1699   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1701
//~   //  Request in: 1701   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1709
//~   //  Request in: 1709   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1711
//~   //  Request in: 1711   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1719
//~   //  Request in: 1719   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1721
//~   //  Request in: 1721   CONTROL response data: 04
     sbi_write(0x0002,0x0049);

//~       ctrl_tx(0x0203,0x00c2);
     sbi_select_device(0x00c2);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x006e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1731
//~   //  Request in: 1731   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1733
//~   //  Request in: 1733   CONTROL response data: 04
     sbi_write(0x0002,0x006e);

//~       ctrl_tx(0x0204,0x00c6);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1741
//~   //  Request in: 1741   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1743
//~   //  Request in: 1743   CONTROL response data: 04
     sbi_write(0x00c6,0x0001);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1753
//~   //  Request in: 1753   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1755
//~   //  Request in: 1755   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1763
//~   //  Request in: 1763   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1765
//~   //  Request in: 1765   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1773
//~   //  Request in: 1773   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1775
//~   //  Request in: 1775   CONTROL response data: 04
     sbi_write(0x0002,0x0049);
     c = ctrl_rx(0x0100); // 1777
 //  Request in: 1777   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1785
//~   //  Request in: 1785   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1787
//~   //  Request in: 1787   CONTROL response data: 80
     w = ai_get_MX(0x0002);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0002,0x0000);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1801
//~   //  Request in: 1801   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1803
//~   //  Request in: 1803   CONTROL response data: 80
     w = ai_get_MX(0x001c);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0000);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1817
//~   //  Request in: 1817   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 1819
//~   //  Request in: 1819   CONTROL response data: 88
     w = ai_get_MX(0x0010);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0088);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0010,0x8808);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1833
//~   //  Request in: 1833   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 1835
//~   //  Request in: 1835   CONTROL response data: 88
     w = ai_get_MX(0x0012);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0012,0x0808);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1849
//~   //  Request in: 1849   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 1851
//~   //  Request in: 1851   CONTROL response data: 80
     w = ai_get_MX(0x000e);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x000e,0x0008);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1865
//~   //  Request in: 1865   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 1867
//~   //  Request in: 1867   CONTROL response data: 88
     w = ai_get_MX(0x0016);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0016,0x0808);

//~       ctrl_tx(0x0504,0x001a);
//~       ctrl_tx(0x0502,0x0001);
//~       ctrl_tx(0x0503,0x0001);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001a,0x0101);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0001);
//~       ctrl_tx(0x0503,0x0001);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0101);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1901
//~   //  Request in: 1901   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1909
//~   //  Request in: 1909   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1917
//~   //  Request in: 1917   CONTROL response data: 04
     sbi_write(0x0002,0x0049);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1927
//~   //  Request in: 1927   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1929
//~   //  Request in: 1929   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1939
//~   //  Request in: 1939   CONTROL response data: 04
     sbi_write(0x0030,0x0000);
 
     fprintf(stderr, "Select interface ...\n");
     r = libusb_set_interface_alt_setting(devh, 0, 5);
     if (r != 0)
        fprintf(stderr, "!! Select interface (0,5) failed with error %d\n", r);
     else
        fprintf(stderr,"   Interface %d, Setting %d is active\n",0,5);
 

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 1993
 //  Request in: 1993   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2003
//~   //  Request in: 2003   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2011
//~   //  Request in: 2011   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2019
//~   //  Request in: 2019   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2021
//~   //  Request in: 2021   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2029
//~   //  Request in: 2029   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 2031
 //  Request in: 2031   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0104,0x0000);
     ctrl_tx(0x0105,0x0000);
     ctrl_tx(0x0106,0x0000);
     c = ctrl_rx(0x0100); // 2045
 //  Request in: 2045   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2049
 //  Request in: 2049   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2059
//~   //  Request in: 2059   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2061
//~   //  Request in: 2061   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2069
//~   //  Request in: 2069   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2071
//~   //  Request in: 2071   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 2125
 //  Request in: 2125   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2135
//~   //  Request in: 2135   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2143
//~   //  Request in: 2143   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2151
//~   //  Request in: 2151   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2159
//~   //  Request in: 2159   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2161
//~   //  Request in: 2161   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 2163
 //  Request in: 2163   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 2171
 //  Request in: 2171   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2175
 //  Request in: 2175   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2185
//~   //  Request in: 2185   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2187
//~   //  Request in: 2187   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2195
//~   //  Request in: 2195   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2197
//~   //  Request in: 2197   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0110,0x000c);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x058c);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2229
//~   //  Request in: 2229   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2235
//~   //  Request in: 2235   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2237
//~   //  Request in: 2237   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2245
//~   //  Request in: 2245   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2251
//~   //  Request in: 2251   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2253
//~   //  Request in: 2253   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2261
//~   //  Request in: 2261   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2267
//~   //  Request in: 2267   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2269
//~   //  Request in: 2269   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2277
//~   //  Request in: 2277   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2283
//~   //  Request in: 2283   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2285
//~   //  Request in: 2285   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2293
//~   //  Request in: 2293   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2299
//~   //  Request in: 2299   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2301
//~   //  Request in: 2301   CONTROL response data: 08
     c = sbi_read(0x0008);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0116); // 2309
 //  Request in: 2309   CONTROL response data: 1f
     c = ctrl_rx(0x0117); // 2311
 //  Request in: 2311   CONTROL response data: 01
     ctrl_tx(0x0116,0x0000);
     ctrl_tx(0x0117,0x0000);
     c = ctrl_rx(0x0100); // 2317
 //  Request in: 2317   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0116,0x001f);
     ctrl_tx(0x0117,0x0001);
     c = ctrl_rx(0x0100); // 2325
 //  Request in: 2325   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0203,0x00a0);
     sbi_select_device(0x00a0);

//~       ctrl_tx(0x0208,0x003c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2335
//~   //  Request in: 2335   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2337
//~   //  Request in: 2337   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2339
//~   //  Request in: 2339   CONTROL response data: 79
     c = sbi_read(0x003c);
 
     fprintf(stderr, "Select interface ...\n");
     r = libusb_set_interface_alt_setting(devh, 0, 0);
     if (r != 0)
        fprintf(stderr, "!! Select interface (0,0) failed with error %d\n", r);
     else
        fprintf(stderr,"   Interface %d, Setting %d is active\n",0,0);
 
 
     fprintf(stderr, "Select interface ...\n");
     r = libusb_set_interface_alt_setting(devh, 0, 5);
     if (r != 0)
        fprintf(stderr, "!! Select interface (0,5) failed with error %d\n", r);
     else
        fprintf(stderr,"   Interface %d, Setting %d is active\n",0,5);
 

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 2395
 //  Request in: 2395   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2405
//~   //  Request in: 2405   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2413
//~   //  Request in: 2413   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2421
//~   //  Request in: 2421   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2429
//~   //  Request in: 2429   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 2431
 //  Request in: 2431   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0104,0x0000);
     ctrl_tx(0x0105,0x0000);
     ctrl_tx(0x0106,0x0000);
     c = ctrl_rx(0x0100); // 2445
 //  Request in: 2445   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2449
 //  Request in: 2449   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2459
//~   //  Request in: 2459   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2467
//~   //  Request in: 2467   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2469
//~   //  Request in: 2469   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 2523
 //  Request in: 2523   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2533
//~   //  Request in: 2533   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2535
//~   //  Request in: 2535   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2543
//~   //  Request in: 2543   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2551
//~   //  Request in: 2551   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2553
//~   //  Request in: 2553   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2561
//~   //  Request in: 2561   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2563
//~   //  Request in: 2563   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 2565
 //  Request in: 2565   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0100); // 2573
 //  Request in: 2573   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2577
 //  Request in: 2577   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2587
//~   //  Request in: 2587   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2589
//~   //  Request in: 2589   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2597
//~   //  Request in: 2597   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0110,0x000c);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x058c);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2629
//~   //  Request in: 2629   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2635
//~   //  Request in: 2635   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2637
//~   //  Request in: 2637   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2639
//~   //  Request in: 2639   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2647
//~   //  Request in: 2647   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2653
//~   //  Request in: 2653   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2655
//~   //  Request in: 2655   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2657
//~   //  Request in: 2657   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2665
//~   //  Request in: 2665   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2671
//~   //  Request in: 2671   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2673
//~   //  Request in: 2673   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2675
//~   //  Request in: 2675   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2683
//~   //  Request in: 2683   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2685
//~   //  Request in: 2685   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2691
//~   //  Request in: 2691   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2693
//~   //  Request in: 2693   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2695
//~   //  Request in: 2695   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2703
//~   //  Request in: 2703   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2709
//~   //  Request in: 2709   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2711
//~   //  Request in: 2711   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2713
//~   //  Request in: 2713   CONTROL response data: 08
     c = sbi_read(0x0008);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0116); // 2721
 //  Request in: 2721   CONTROL response data: 1f
     c = ctrl_rx(0x0117); // 2723
 //  Request in: 2723   CONTROL response data: 01
     ctrl_tx(0x0116,0x0000);
     ctrl_tx(0x0117,0x0000);
     c = ctrl_rx(0x0100); // 2729
 //  Request in: 2729   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0116,0x001f);
     ctrl_tx(0x0117,0x0001);
 
     // r = libusb_set_interface_alt_setting(devh, 2, 1);
 
     c = ctrl_rx(0x0100); // 2739
 //  Request in: 2739   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2743
 //  Request in: 2743   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2753
//~   //  Request in: 2753   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2761
//~   //  Request in: 2761   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2769
//~   //  Request in: 2769   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2771
//~   //  Request in: 2771   CONTROL response data: 88
     w = ai_get_MX(0x0010);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0088);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0010,0x8808);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2785
//~   //  Request in: 2785   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2787
//~   //  Request in: 2787   CONTROL response data: 08
     w = ai_get_MX(0x0012);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0012,0x0808);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2801
//~   //  Request in: 2801   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2803
//~   //  Request in: 2803   CONTROL response data: 00
     w = ai_get_MX(0x000e);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x000e,0x0008);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2817
//~   //  Request in: 2817   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2819
//~   //  Request in: 2819   CONTROL response data: 08
     w = ai_get_MX(0x0016);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0016,0x0808);

//~       ctrl_tx(0x0504,0x001a);
//~       ctrl_tx(0x0502,0x0001);
//~       ctrl_tx(0x0503,0x0001);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001a,0x0101);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0000);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2849
//~   //  Request in: 2849   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2851
//~   //  Request in: 2851   CONTROL response data: 88
     w = ai_get_MX(0x0010);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0088);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0010,0x8808);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2865
//~   //  Request in: 2865   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2867
//~   //  Request in: 2867   CONTROL response data: 08
     w = ai_get_MX(0x0012);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0012,0x0808);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2881
//~   //  Request in: 2881   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2883
//~   //  Request in: 2883   CONTROL response data: 00
     w = ai_get_MX(0x000e);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x000e,0x0008);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2897
//~   //  Request in: 2897   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2899
//~   //  Request in: 2899   CONTROL response data: 08
     w = ai_get_MX(0x0016);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0016,0x0808);

//~       ctrl_tx(0x0504,0x001a);
//~       ctrl_tx(0x0502,0x0001);
//~       ctrl_tx(0x0503,0x0001);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001a,0x0101);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0000);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2929
//~   //  Request in: 2929   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2931
//~   //  Request in: 2931   CONTROL response data: 88
     w = ai_get_MX(0x0010);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0088);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0010,0x8808);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2945
//~   //  Request in: 2945   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2947
//~   //  Request in: 2947   CONTROL response data: 08
     w = ai_get_MX(0x0012);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0012,0x0808);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2961
//~   //  Request in: 2961   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2963
//~   //  Request in: 2963   CONTROL response data: 00
     w = ai_get_MX(0x000e);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x000e,0x0008);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2977
//~   //  Request in: 2977   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2979
//~   //  Request in: 2979   CONTROL response data: 08
     w = ai_get_MX(0x0016);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0016,0x0808);

//~       ctrl_tx(0x0504,0x001a);
//~       ctrl_tx(0x0502,0x0001);
//~       ctrl_tx(0x0503,0x0001);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001a,0x0101);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0000);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 3055
 //  Request in: 3055   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3065
//~   //  Request in: 3065   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3073
//~   //  Request in: 3073   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3075
//~   //  Request in: 3075   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3083
//~   //  Request in: 3083   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3085
//~   //  Request in: 3085   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3093
//~   //  Request in: 3093   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3095
//~   //  Request in: 3095   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 3097
 //  Request in: 3097   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3105
 //  Request in: 3105   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 3109
 //  Request in: 3109   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3119
//~   //  Request in: 3119   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3121
//~   //  Request in: 3121   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3129
//~   //  Request in: 3129   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3131
//~   //  Request in: 3131   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3135
 //  Request in: 3135   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0110,0x000c);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x058c);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0003,0x0083);
     ctrl_tx(0x0000,0x0060);
     ctrl_tx(0x0001,0x0002);
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
     c = ctrl_rx(0x0100); // 3213
 //  Request in: 3213   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3223
//~   //  Request in: 3223   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x000c);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3231
//~   //  Request in: 3231   CONTROL response data: 04
     sbi_write(0x0028,0x000c);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3239
//~   //  Request in: 3239   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3241
//~   //  Request in: 3241   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3249
//~   //  Request in: 3249   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3251
//~   //  Request in: 3251   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 3253
 //  Request in: 3253   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3261
 //  Request in: 3261   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 3265
 //  Request in: 3265   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3275
//~   //  Request in: 3275   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3277
//~   //  Request in: 3277   CONTROL response data: 04
     sbi_write(0x0000,0x0001);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x002f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3285
//~   //  Request in: 3285   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3287
//~   //  Request in: 3287   CONTROL response data: 04
     sbi_write(0x0003,0x002f);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3291
 //  Request in: 3291   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0110,0x000c);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x058c);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3325
//~   //  Request in: 3325   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3331
//~   //  Request in: 3331   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3333
//~   //  Request in: 3333   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3335
//~   //  Request in: 3335   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3343
//~   //  Request in: 3343   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3345
//~   //  Request in: 3345   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3351
//~   //  Request in: 3351   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3353
//~   //  Request in: 3353   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3355
//~   //  Request in: 3355   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3363
//~   //  Request in: 3363   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3369
//~   //  Request in: 3369   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3371
//~   //  Request in: 3371   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3373
//~   //  Request in: 3373   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3381
//~   //  Request in: 3381   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3383
//~   //  Request in: 3383   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3389
//~   //  Request in: 3389   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3391
//~   //  Request in: 3391   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3393
//~   //  Request in: 3393   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3401
//~   //  Request in: 3401   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3407
//~   //  Request in: 3407   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3409
//~   //  Request in: 3409   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3411
//~   //  Request in: 3411   CONTROL response data: 08
     c = sbi_read(0x0008);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3419
//~   //  Request in: 3419   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3425
//~   //  Request in: 3425   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3427
//~   //  Request in: 3427   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3429
//~   //  Request in: 3429   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3437
//~   //  Request in: 3437   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3439
//~   //  Request in: 3439   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3445
//~   //  Request in: 3445   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3447
//~   //  Request in: 3447   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3449
//~   //  Request in: 3449   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3457
//~   //  Request in: 3457   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3459
//~   //  Request in: 3459   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3465
//~   //  Request in: 3465   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3467
//~   //  Request in: 3467   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3469
//~   //  Request in: 3469   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3477
//~   //  Request in: 3477   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3479
//~   //  Request in: 3479   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3485
//~   //  Request in: 3485   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3487
//~   //  Request in: 3487   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3489
//~   //  Request in: 3489   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3497
//~   //  Request in: 3497   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3499
//~   //  Request in: 3499   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3505
//~   //  Request in: 3505   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3507
//~   //  Request in: 3507   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3509
//~   //  Request in: 3509   CONTROL response data: 08
     c = sbi_read(0x0008);
     c = ctrl_rx(0x0001); // 3511
 //  Request in: 3511   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3513
 //  Request in: 3513   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3515
 //  Request in: 3515   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3517
 //  Request in: 3517   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3519
 //  Request in: 3519   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3521
 //  Request in: 3521   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3523
 //  Request in: 3523   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3525
 //  Request in: 3525   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3527
 //  Request in: 3527   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3529
 //  Request in: 3529   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3531
 //  Request in: 3531   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3533
 //  Request in: 3533   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3535
 //  Request in: 3535   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3537
 //  Request in: 3537   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3539
 //  Request in: 3539   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3541
 //  Request in: 3541   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3543
 //  Request in: 3543   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3545
 //  Request in: 3545   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3547
 //  Request in: 3547   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3549
 //  Request in: 3549   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3551
 //  Request in: 3551   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3553
 //  Request in: 3553   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3555
 //  Request in: 3555   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3557
 //  Request in: 3557   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3559
 //  Request in: 3559   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3561
 //  Request in: 3561   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3563
 //  Request in: 3563   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3565
 //  Request in: 3565   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3567
 //  Request in: 3567   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3569
 //  Request in: 3569   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3571
 //  Request in: 3571   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3573
 //  Request in: 3573   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3575
 //  Request in: 3575   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3577
 //  Request in: 3577   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3579
 //  Request in: 3579   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3581
 //  Request in: 3581   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3583
 //  Request in: 3583   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3585
 //  Request in: 3585   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3587
 //  Request in: 3587   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3589
 //  Request in: 3589   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3591
 //  Request in: 3591   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3593
 //  Request in: 3593   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3595
 //  Request in: 3595   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3597
 //  Request in: 3597   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3599
 //  Request in: 3599   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3601
 //  Request in: 3601   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3603
 //  Request in: 3603   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3605
 //  Request in: 3605   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3607
 //  Request in: 3607   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3609
 //  Request in: 3609   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3611
 //  Request in: 3611   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3613
 //  Request in: 3613   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3615
 //  Request in: 3615   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3617
 //  Request in: 3617   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3619
 //  Request in: 3619   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3621
 //  Request in: 3621   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3623
 //  Request in: 3623   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3625
 //  Request in: 3625   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3627
 //  Request in: 3627   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3629
 //  Request in: 3629   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3631
 //  Request in: 3631   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3633
 //  Request in: 3633   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3635
 //  Request in: 3635   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3637
 //  Request in: 3637   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3639
 //  Request in: 3639   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3641
 //  Request in: 3641   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3643
 //  Request in: 3643   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3645
 //  Request in: 3645   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3647
 //  Request in: 3647   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3649
 //  Request in: 3649   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3651
 //  Request in: 3651   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 3653
 //  Request in: 3653   CONTROL response data: 02
