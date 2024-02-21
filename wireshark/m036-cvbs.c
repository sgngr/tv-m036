 //~
 //~ This code is rewritten to use some subroutine functions:
 //~    python convert-functions.py m036-cvbs-0.c
 //~
 //
 //  This code generated from a wireshark USB capture file:
 //     python pcap2c.py m036-1.45.0-CVBS.pcap 1.45.0 | grep '! ' | cut -c2-
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
//~   //  Request in: 15   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 17
//~   //  Request in: 17   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 23
//~   //  Request in: 23   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 25
//~   //  Request in: 25   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 27
//~   //  Request in: 27   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 35
//~   //  Request in: 35   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 37
//~   //  Request in: 37   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 43
//~   //  Request in: 43   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 45
//~   //  Request in: 45   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 47
//~   //  Request in: 47   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 55
//~   //  Request in: 55   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 61
//~   //  Request in: 61   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 63
//~   //  Request in: 63   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 71
//~   //  Request in: 71   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 77
//~   //  Request in: 77   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 79
//~   //  Request in: 79   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 87
//~   //  Request in: 87   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 89
//~   //  Request in: 89   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 95
//~   //  Request in: 95   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 97
//~   //  Request in: 97   CONTROL response data: 08
     c = sbi_read(0x0008);

//~       ctrl_tx(0x0203,0x00a0);
     sbi_select_device(0x00a0);

//~       ctrl_tx(0x0208,0x003c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 105
//~   //  Request in: 105   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 107
//~   //  Request in: 107   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 109
//~   //  Request in: 109   CONTROL response data: 79
     c = sbi_read(0x003c);

//~       ctrl_tx(0x0203,0x00a0);
     sbi_select_device(0x00a0);

//~       ctrl_tx(0x0208,0x003d);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 117
//~   //  Request in: 117   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 119
//~   //  Request in: 119   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 121
//~   //  Request in: 121   CONTROL response data: 17
     c = sbi_read(0x003d);

//~       ctrl_tx(0x0203,0x00a0);
     sbi_select_device(0x00a0);

//~       ctrl_tx(0x0208,0x003e);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 129
//~   //  Request in: 129   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 131
//~   //  Request in: 131   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 133
//~   //  Request in: 133   CONTROL response data: 08
     c = sbi_read(0x003e);

//~       ctrl_tx(0x0203,0x00a0);
     sbi_select_device(0x00a0);

//~       ctrl_tx(0x0208,0x003f);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 141
//~   //  Request in: 141   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 143
//~   //  Request in: 143   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 145
//~   //  Request in: 145   CONTROL response data: 07
     c = sbi_read(0x003f);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0001);
//~       ctrl_tx(0x0503,0x0001);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0101);
     c = ctrl_rx(0x0000); // 155
 //  Request in: 155   CONTROL response data: ec
     c = ctrl_rx(0x0002); // 157
 //  Request in: 157   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x00ec);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
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
     c = ctrl_rx(0x0100); // 217
 //  Request in: 217   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 227
//~   //  Request in: 227   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 235
//~   //  Request in: 235   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 237
//~   //  Request in: 237   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 245
//~   //  Request in: 245   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 247
//~   //  Request in: 247   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 255
//~   //  Request in: 255   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 257
 //  Request in: 257   CONTROL response data: 33
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
     c = ctrl_rx(0x0100); // 281
 //  Request in: 281   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 285
 //  Request in: 285   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 295
//~   //  Request in: 295   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 303
//~   //  Request in: 303   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 305
//~   //  Request in: 305   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
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
     c = ctrl_rx(0x0100); // 363
 //  Request in: 363   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 373
//~   //  Request in: 373   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 381
//~   //  Request in: 381   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 383
//~   //  Request in: 383   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 391
//~   //  Request in: 391   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 393
//~   //  Request in: 393   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 401
//~   //  Request in: 401   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 403
//~   //  Request in: 403   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 405
 //  Request in: 405   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0100); // 413
 //  Request in: 413   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 417
 //  Request in: 417   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 427
//~   //  Request in: 427   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 429
//~   //  Request in: 429   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 437
//~   //  Request in: 437   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 439
//~   //  Request in: 439   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0110,0x0010);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0590);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 471
//~   //  Request in: 471   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 477
//~   //  Request in: 477   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 479
//~   //  Request in: 479   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 487
//~   //  Request in: 487   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 493
//~   //  Request in: 493   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 495
//~   //  Request in: 495   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 497
//~   //  Request in: 497   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 505
//~   //  Request in: 505   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 507
//~   //  Request in: 507   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 513
//~   //  Request in: 513   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 515
//~   //  Request in: 515   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 517
//~   //  Request in: 517   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 525
//~   //  Request in: 525   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 527
//~   //  Request in: 527   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 533
//~   //  Request in: 533   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 535
//~   //  Request in: 535   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 537
//~   //  Request in: 537   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 545
//~   //  Request in: 545   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 551
//~   //  Request in: 551   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 553
//~   //  Request in: 553   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 555
//~   //  Request in: 555   CONTROL response data: 08
     c = sbi_read(0x0008);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 565
//~   //  Request in: 565   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 567
//~   //  Request in: 567   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 575
//~   //  Request in: 575   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 577
//~   //  Request in: 577   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 585
//~   //  Request in: 585   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 587
//~   //  Request in: 587   CONTROL response data: 04
     sbi_write(0x0002,0x0049);

//~       ctrl_tx(0x0203,0x00c2);
     sbi_select_device(0x00c2);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x006e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 597
//~   //  Request in: 597   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 599
//~   //  Request in: 599   CONTROL response data: 04
     sbi_write(0x0002,0x006e);

//~       ctrl_tx(0x0204,0x00c6);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 607
//~   //  Request in: 607   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 609
//~   //  Request in: 609   CONTROL response data: 04
     sbi_write(0x00c6,0x0001);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 619
//~   //  Request in: 619   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 621
//~   //  Request in: 621   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 629
//~   //  Request in: 629   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 631
//~   //  Request in: 631   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 639
//~   //  Request in: 639   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 641
//~   //  Request in: 641   CONTROL response data: 04
     sbi_write(0x0002,0x0049);
     c = ctrl_rx(0x0100); // 643
 //  Request in: 643   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 651
//~   //  Request in: 651   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 653
//~   //  Request in: 653   CONTROL response data: 80
     w = ai_get_MX(0x0002);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0002,0x0000);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 667
//~   //  Request in: 667   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 669
//~   //  Request in: 669   CONTROL response data: 80
     w = ai_get_MX(0x001c);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0000);
     c = ctrl_rx(0x0100); // 679
 //  Request in: 679   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 683
 //  Request in: 683   CONTROL response data: ec
     ctrl_tx(0x0000,0x00ec);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 695
//~   //  Request in: 695   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 697
//~   //  Request in: 697   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 705
//~   //  Request in: 705   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 707
//~   //  Request in: 707   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 715
//~   //  Request in: 715   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 717
//~   //  Request in: 717   CONTROL response data: 88
     w = ai_get_MX(0x0010);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0088);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0010,0x8808);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 731
//~   //  Request in: 731   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 733
//~   //  Request in: 733   CONTROL response data: 88
     w = ai_get_MX(0x0012);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0012,0x0808);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 747
//~   //  Request in: 747   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 749
//~   //  Request in: 749   CONTROL response data: 80
     w = ai_get_MX(0x000e);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x000e,0x0008);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 763
//~   //  Request in: 763   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 765
//~   //  Request in: 765   CONTROL response data: 88
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
     c = ctrl_rx(0x0000); // 791
 //  Request in: 791   CONTROL response data: ec
     c = ctrl_rx(0x0002); // 793
 //  Request in: 793   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x00ec);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
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
     c = ctrl_rx(0x0100); // 853
 //  Request in: 853   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 863
//~   //  Request in: 863   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 871
//~   //  Request in: 871   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 879
//~   //  Request in: 879   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 881
//~   //  Request in: 881   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 889
//~   //  Request in: 889   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 891
//~   //  Request in: 891   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 893
 //  Request in: 893   CONTROL response data: b3
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
     c = ctrl_rx(0x0100); // 917
 //  Request in: 917   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 921
 //  Request in: 921   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 931
//~   //  Request in: 931   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 939
//~   //  Request in: 939   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
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
     c = ctrl_rx(0x0100); // 997
 //  Request in: 997   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1007
//~   //  Request in: 1007   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1015
//~   //  Request in: 1015   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1017
//~   //  Request in: 1017   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1025
//~   //  Request in: 1025   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1027
//~   //  Request in: 1027   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1035
//~   //  Request in: 1035   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1037
//~   //  Request in: 1037   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 1039
 //  Request in: 1039   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 1047
 //  Request in: 1047   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1051
 //  Request in: 1051   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1061
//~   //  Request in: 1061   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1063
//~   //  Request in: 1063   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1071
//~   //  Request in: 1071   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1073
//~   //  Request in: 1073   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0110,0x0010);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0590);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1105
//~   //  Request in: 1105   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1111
//~   //  Request in: 1111   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1113
//~   //  Request in: 1113   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1121
//~   //  Request in: 1121   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1127
//~   //  Request in: 1127   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1129
//~   //  Request in: 1129   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1137
//~   //  Request in: 1137   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1143
//~   //  Request in: 1143   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1145
//~   //  Request in: 1145   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1153
//~   //  Request in: 1153   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1159
//~   //  Request in: 1159   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1161
//~   //  Request in: 1161   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1169
//~   //  Request in: 1169   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1175
//~   //  Request in: 1175   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1177
//~   //  Request in: 1177   CONTROL response data: 08
     c = sbi_read(0x0008);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1187
//~   //  Request in: 1187   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1195
//~   //  Request in: 1195   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1203
//~   //  Request in: 1203   CONTROL response data: 04
     sbi_write(0x0002,0x0049);

//~       ctrl_tx(0x0203,0x00c2);
     sbi_select_device(0x00c2);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x006e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1213
//~   //  Request in: 1213   CONTROL response data: 04
     sbi_write(0x0002,0x006e);

//~       ctrl_tx(0x0204,0x00c6);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1221
//~   //  Request in: 1221   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1223
//~   //  Request in: 1223   CONTROL response data: 04
     sbi_write(0x00c6,0x0001);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1233
//~   //  Request in: 1233   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1235
//~   //  Request in: 1235   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1243
//~   //  Request in: 1243   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1245
//~   //  Request in: 1245   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1253
//~   //  Request in: 1253   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1255
//~   //  Request in: 1255   CONTROL response data: 04
     sbi_write(0x0002,0x0049);
     c = ctrl_rx(0x0100); // 1257
 //  Request in: 1257   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1265
//~   //  Request in: 1265   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1267
//~   //  Request in: 1267   CONTROL response data: 80
     w = ai_get_MX(0x0002);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0002,0x0000);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1281
//~   //  Request in: 1281   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1283
//~   //  Request in: 1283   CONTROL response data: 80
     w = ai_get_MX(0x001c);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0000);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1297
//~   //  Request in: 1297   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1299
//~   //  Request in: 1299   CONTROL response data: 00
     w = ai_get_MX(0x0002);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0080);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0002,0x8000);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1313
//~   //  Request in: 1313   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1315
//~   //  Request in: 1315   CONTROL response data: 00
     w = ai_get_MX(0x001c);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0080);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x8000);
     c = ctrl_rx(0x0000); // 1325
 //  Request in: 1325   CONTROL response data: ec
     c = ctrl_rx(0x0002); // 1327
 //  Request in: 1327   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x00ec);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
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
     c = ctrl_rx(0x0100); // 1387
 //  Request in: 1387   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1397
//~   //  Request in: 1397   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1405
//~   //  Request in: 1405   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1413
//~   //  Request in: 1413   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1421
//~   //  Request in: 1421   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 1423
 //  Request in: 1423   CONTROL response data: b3
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
     c = ctrl_rx(0x0100); // 1447
 //  Request in: 1447   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1451
 //  Request in: 1451   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1461
//~   //  Request in: 1461   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1469
//~   //  Request in: 1469   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
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
     c = ctrl_rx(0x0100); // 1527
 //  Request in: 1527   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1537
//~   //  Request in: 1537   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1545
//~   //  Request in: 1545   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1547
//~   //  Request in: 1547   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1555
//~   //  Request in: 1555   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1557
//~   //  Request in: 1557   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1565
//~   //  Request in: 1565   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1567
//~   //  Request in: 1567   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 1569
 //  Request in: 1569   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 1577
 //  Request in: 1577   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1581
 //  Request in: 1581   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1591
//~   //  Request in: 1591   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1593
//~   //  Request in: 1593   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1601
//~   //  Request in: 1601   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1603
//~   //  Request in: 1603   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0110,0x0010);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0590);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1635
//~   //  Request in: 1635   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1641
//~   //  Request in: 1641   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1643
//~   //  Request in: 1643   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1651
//~   //  Request in: 1651   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1657
//~   //  Request in: 1657   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1659
//~   //  Request in: 1659   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1667
//~   //  Request in: 1667   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1673
//~   //  Request in: 1673   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1675
//~   //  Request in: 1675   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1683
//~   //  Request in: 1683   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1689
//~   //  Request in: 1689   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1691
//~   //  Request in: 1691   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1699
//~   //  Request in: 1699   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 1705
//~   //  Request in: 1705   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 1707
//~   //  Request in: 1707   CONTROL response data: 08
     c = sbi_read(0x0008);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1717
//~   //  Request in: 1717   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1725
//~   //  Request in: 1725   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1733
//~   //  Request in: 1733   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1735
//~   //  Request in: 1735   CONTROL response data: 04
     sbi_write(0x0002,0x0049);

//~       ctrl_tx(0x0203,0x00c2);
     sbi_select_device(0x00c2);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x006e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1745
//~   //  Request in: 1745   CONTROL response data: 04
     sbi_write(0x0002,0x006e);

//~       ctrl_tx(0x0204,0x00c6);
//~       ctrl_tx(0x0205,0x0001);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1753
//~   //  Request in: 1753   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1755
//~   //  Request in: 1755   CONTROL response data: 04
     sbi_write(0x00c6,0x0001);

//~       ctrl_tx(0x0203,0x0086);
     sbi_select_device(0x0086);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x00d6);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1765
//~   //  Request in: 1765   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1767
//~   //  Request in: 1767   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1775
//~   //  Request in: 1775   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1777
//~   //  Request in: 1777   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1785
//~   //  Request in: 1785   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1787
//~   //  Request in: 1787   CONTROL response data: 04
     sbi_write(0x0002,0x0049);
     c = ctrl_rx(0x0100); // 1789
 //  Request in: 1789   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1797
//~   //  Request in: 1797   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1799
//~   //  Request in: 1799   CONTROL response data: 80
     w = ai_get_MX(0x0002);

//~       ctrl_tx(0x0504,0x0002);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0002,0x0000);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1813
//~   //  Request in: 1813   CONTROL response data: 00
//~       c = ctrl_rx(0x0503); // 1815
//~   //  Request in: 1815   CONTROL response data: 80
     w = ai_get_MX(0x001c);

//~       ctrl_tx(0x0504,0x001c);
//~       ctrl_tx(0x0502,0x0000);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x001c,0x0000);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1829
//~   //  Request in: 1829   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 1831
//~   //  Request in: 1831   CONTROL response data: 88
     w = ai_get_MX(0x0010);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0088);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0010,0x8808);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1845
//~   //  Request in: 1845   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 1847
//~   //  Request in: 1847   CONTROL response data: 88
     w = ai_get_MX(0x0012);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0012,0x0808);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1861
//~   //  Request in: 1861   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 1863
//~   //  Request in: 1863   CONTROL response data: 80
     w = ai_get_MX(0x000e);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x000e,0x0008);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 1877
//~   //  Request in: 1877   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 1879
//~   //  Request in: 1879   CONTROL response data: 88
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
//~       c = ctrl_rx(0x0201); // 1913
//~   //  Request in: 1913   CONTROL response data: 04
     sbi_write(0x0000,0x00d6);

//~       ctrl_tx(0x0204,0x0001);
//~       ctrl_tx(0x0205,0x0070);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1921
//~   //  Request in: 1921   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1923
//~   //  Request in: 1923   CONTROL response data: 04
     sbi_write(0x0001,0x0070);

//~       ctrl_tx(0x0204,0x0002);
//~       ctrl_tx(0x0205,0x0049);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1931
//~   //  Request in: 1931   CONTROL response data: 04
     sbi_write(0x0002,0x0049);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1941
//~   //  Request in: 1941   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1943
//~   //  Request in: 1943   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 1953
//~   //  Request in: 1953   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 1955
//~   //  Request in: 1955   CONTROL response data: 04
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
     c = ctrl_rx(0x0100); // 2013
 //  Request in: 2013   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2023
//~   //  Request in: 2023   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2031
//~   //  Request in: 2031   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2039
//~   //  Request in: 2039   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2047
//~   //  Request in: 2047   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 2049
 //  Request in: 2049   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0104,0x0000);
     ctrl_tx(0x0105,0x0000);
     ctrl_tx(0x0106,0x0000);
     c = ctrl_rx(0x0100); // 2063
 //  Request in: 2063   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2067
 //  Request in: 2067   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2077
//~   //  Request in: 2077   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2079
//~   //  Request in: 2079   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2087
//~   //  Request in: 2087   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2089
//~   //  Request in: 2089   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
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
     c = ctrl_rx(0x0100); // 2147
 //  Request in: 2147   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2157
//~   //  Request in: 2157   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2165
//~   //  Request in: 2165   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2173
//~   //  Request in: 2173   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2181
//~   //  Request in: 2181   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 2183
 //  Request in: 2183   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 2191
 //  Request in: 2191   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2195
 //  Request in: 2195   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2205
//~   //  Request in: 2205   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2213
//~   //  Request in: 2213   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2215
//~   //  Request in: 2215   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0110,0x0010);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0590);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2247
//~   //  Request in: 2247   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2253
//~   //  Request in: 2253   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2255
//~   //  Request in: 2255   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2257
//~   //  Request in: 2257   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2265
//~   //  Request in: 2265   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2271
//~   //  Request in: 2271   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2273
//~   //  Request in: 2273   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2275
//~   //  Request in: 2275   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2283
//~   //  Request in: 2283   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2289
//~   //  Request in: 2289   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2291
//~   //  Request in: 2291   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2293
//~   //  Request in: 2293   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2301
//~   //  Request in: 2301   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2307
//~   //  Request in: 2307   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2309
//~   //  Request in: 2309   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2311
//~   //  Request in: 2311   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2319
//~   //  Request in: 2319   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2321
//~   //  Request in: 2321   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2327
//~   //  Request in: 2327   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2329
//~   //  Request in: 2329   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2331
//~   //  Request in: 2331   CONTROL response data: 08
     c = sbi_read(0x0008);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0116); // 2339
 //  Request in: 2339   CONTROL response data: 1f
     c = ctrl_rx(0x0117); // 2341
 //  Request in: 2341   CONTROL response data: 01
     ctrl_tx(0x0116,0x0000);
     ctrl_tx(0x0117,0x0000);
     c = ctrl_rx(0x0100); // 2347
 //  Request in: 2347   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0116,0x001f);
     ctrl_tx(0x0117,0x0001);
     c = ctrl_rx(0x0100); // 2355
 //  Request in: 2355   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0203,0x00a0);
     sbi_select_device(0x00a0);

//~       ctrl_tx(0x0208,0x003c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2365
//~   //  Request in: 2365   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2367
//~   //  Request in: 2367   CONTROL response data: 79
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
     c = ctrl_rx(0x0100); // 2427
 //  Request in: 2427   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2437
//~   //  Request in: 2437   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2445
//~   //  Request in: 2445   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2453
//~   //  Request in: 2453   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2461
//~   //  Request in: 2461   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 2463
 //  Request in: 2463   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0104,0x0000);
     ctrl_tx(0x0105,0x0000);
     ctrl_tx(0x0106,0x0000);
     c = ctrl_rx(0x0100); // 2477
 //  Request in: 2477   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2481
 //  Request in: 2481   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2491
//~   //  Request in: 2491   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2499
//~   //  Request in: 2499   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0203,0x00ba);
     sbi_select_device(0x00ba);
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
     c = ctrl_rx(0x0100); // 2557
 //  Request in: 2557   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2567
//~   //  Request in: 2567   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2569
//~   //  Request in: 2569   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2577
//~   //  Request in: 2577   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2579
//~   //  Request in: 2579   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2587
//~   //  Request in: 2587   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2595
//~   //  Request in: 2595   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 2597
//~   //  Request in: 2597   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 2599
 //  Request in: 2599   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0100); // 2607
 //  Request in: 2607   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2611
 //  Request in: 2611   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2621
//~   //  Request in: 2621   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2629
//~   //  Request in: 2629   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0110,0x0010);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0590);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x011f);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2661
//~   //  Request in: 2661   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2667
//~   //  Request in: 2667   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2669
//~   //  Request in: 2669   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2677
//~   //  Request in: 2677   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2683
//~   //  Request in: 2683   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2685
//~   //  Request in: 2685   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2693
//~   //  Request in: 2693   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2699
//~   //  Request in: 2699   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2701
//~   //  Request in: 2701   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2709
//~   //  Request in: 2709   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2715
//~   //  Request in: 2715   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2717
//~   //  Request in: 2717   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2725
//~   //  Request in: 2725   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 2731
//~   //  Request in: 2731   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 2733
//~   //  Request in: 2733   CONTROL response data: 08
     c = sbi_read(0x0008);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0116); // 2741
 //  Request in: 2741   CONTROL response data: 1f
     c = ctrl_rx(0x0117); // 2743
 //  Request in: 2743   CONTROL response data: 01
     ctrl_tx(0x0116,0x0000);
     ctrl_tx(0x0117,0x0000);
     c = ctrl_rx(0x0100); // 2749
 //  Request in: 2749   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0116,0x001f);
     ctrl_tx(0x0117,0x0001);
 
     // r = libusb_set_interface_alt_setting(devh, 2, 1);
 
     c = ctrl_rx(0x0100); // 2759
 //  Request in: 2759   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2763
 //  Request in: 2763   CONTROL response data: ec
     ctrl_tx(0x0000,0x00ec);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2773
//~   //  Request in: 2773   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 2781
//~   //  Request in: 2781   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2789
//~   //  Request in: 2789   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2791
//~   //  Request in: 2791   CONTROL response data: 88
     w = ai_get_MX(0x0010);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0088);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0010,0x8808);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2805
//~   //  Request in: 2805   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2807
//~   //  Request in: 2807   CONTROL response data: 08
     w = ai_get_MX(0x0012);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0012,0x0808);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2821
//~   //  Request in: 2821   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2823
//~   //  Request in: 2823   CONTROL response data: 00
     w = ai_get_MX(0x000e);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x000e,0x0008);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2837
//~   //  Request in: 2837   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2839
//~   //  Request in: 2839   CONTROL response data: 08
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
//~       c = ctrl_rx(0x0502); // 2869
//~   //  Request in: 2869   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2871
//~   //  Request in: 2871   CONTROL response data: 88
     w = ai_get_MX(0x0010);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0088);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0010,0x8808);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2885
//~   //  Request in: 2885   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2887
//~   //  Request in: 2887   CONTROL response data: 08
     w = ai_get_MX(0x0012);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0012,0x0808);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2901
//~   //  Request in: 2901   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2903
//~   //  Request in: 2903   CONTROL response data: 00
     w = ai_get_MX(0x000e);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x000e,0x0008);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2917
//~   //  Request in: 2917   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2919
//~   //  Request in: 2919   CONTROL response data: 08
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
//~       c = ctrl_rx(0x0502); // 2949
//~   //  Request in: 2949   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2951
//~   //  Request in: 2951   CONTROL response data: 88
     w = ai_get_MX(0x0010);

//~       ctrl_tx(0x0504,0x0010);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0088);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0010,0x8808);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2965
//~   //  Request in: 2965   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2967
//~   //  Request in: 2967   CONTROL response data: 08
     w = ai_get_MX(0x0012);

//~       ctrl_tx(0x0504,0x0012);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0008);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x0012,0x0808);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2981
//~   //  Request in: 2981   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2983
//~   //  Request in: 2983   CONTROL response data: 00
     w = ai_get_MX(0x000e);

//~       ctrl_tx(0x0504,0x000e);
//~       ctrl_tx(0x0502,0x0008);
//~       ctrl_tx(0x0503,0x0000);
//~       ctrl_tx(0x0500,0x008c);
     ai_set_MX(0x000e,0x0008);

//~       ctrl_tx(0x0504,0x0016);
//~       ctrl_tx(0x0500,0x008b);
//~       c = ctrl_rx(0x0502); // 2997
//~   //  Request in: 2997   CONTROL response data: 08
//~       c = ctrl_rx(0x0503); // 2999
//~   //  Request in: 2999   CONTROL response data: 08
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
     c = ctrl_rx(0x0100); // 3079
 //  Request in: 3079   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3089
//~   //  Request in: 3089   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3097
//~   //  Request in: 3097   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3105
//~   //  Request in: 3105   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3107
//~   //  Request in: 3107   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3115
//~   //  Request in: 3115   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3117
//~   //  Request in: 3117   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 3119
 //  Request in: 3119   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3127
 //  Request in: 3127   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 3131
 //  Request in: 3131   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3141
//~   //  Request in: 3141   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3149
//~   //  Request in: 3149   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3153
 //  Request in: 3153   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0110,0x0010);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0590);
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
     c = ctrl_rx(0x0100); // 3235
 //  Request in: 3235   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3245
//~   //  Request in: 3245   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0204,0x0028);
//~       ctrl_tx(0x0205,0x0004);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3253
//~   //  Request in: 3253   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3255
//~   //  Request in: 3255   CONTROL response data: 04
     sbi_write(0x0028,0x0004);

//~       ctrl_tx(0x0204,0x0030);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3263
//~   //  Request in: 3263   CONTROL response data: 04
     sbi_write(0x0030,0x0000);

//~       ctrl_tx(0x0204,0x000f);
//~       ctrl_tx(0x0205,0x000a);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3271
//~   //  Request in: 3271   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3273
//~   //  Request in: 3273   CONTROL response data: 04
     sbi_write(0x000f,0x000a);
     c = ctrl_rx(0x0100); // 3275
 //  Request in: 3275   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3283
 //  Request in: 3283   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 3287
 //  Request in: 3287   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);

//~       ctrl_tx(0x0204,0x0000);
//~       ctrl_tx(0x0205,0x0002);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3297
//~   //  Request in: 3297   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3299
//~   //  Request in: 3299   CONTROL response data: 04
     sbi_write(0x0000,0x0002);

//~       ctrl_tx(0x0204,0x0003);
//~       ctrl_tx(0x0205,0x006f);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3307
//~   //  Request in: 3307   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3309
//~   //  Request in: 3309   CONTROL response data: 04
     sbi_write(0x0003,0x006f);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3313
 //  Request in: 3313   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0110,0x0010);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0003);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0590);
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
//~       c = ctrl_rx(0x0201); // 3347
//~   //  Request in: 3347   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3353
//~   //  Request in: 3353   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3355
//~   //  Request in: 3355   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3357
//~   //  Request in: 3357   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3365
//~   //  Request in: 3365   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3371
//~   //  Request in: 3371   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3373
//~   //  Request in: 3373   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3375
//~   //  Request in: 3375   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3383
//~   //  Request in: 3383   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3389
//~   //  Request in: 3389   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3391
//~   //  Request in: 3391   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3393
//~   //  Request in: 3393   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3401
//~   //  Request in: 3401   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3407
//~   //  Request in: 3407   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3409
//~   //  Request in: 3409   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3411
//~   //  Request in: 3411   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3419
//~   //  Request in: 3419   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3421
//~   //  Request in: 3421   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3427
//~   //  Request in: 3427   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3429
//~   //  Request in: 3429   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3431
//~   //  Request in: 3431   CONTROL response data: 08
     c = sbi_read(0x0008);

//~       ctrl_tx(0x0204,0x0009);
//~       ctrl_tx(0x0205,0x007e);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3439
//~   //  Request in: 3439   CONTROL response data: 04
     sbi_write(0x0009,0x007e);

//~       ctrl_tx(0x0208,0x0009);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3445
//~   //  Request in: 3445   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3447
//~   //  Request in: 3447   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3449
//~   //  Request in: 3449   CONTROL response data: 7e
     c = sbi_read(0x0009);

//~       ctrl_tx(0x0204,0x000c);
//~       ctrl_tx(0x0205,0x0080);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3457
//~   //  Request in: 3457   CONTROL response data: 04
     sbi_write(0x000c,0x0080);

//~       ctrl_tx(0x0208,0x000c);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3463
//~   //  Request in: 3463   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3465
//~   //  Request in: 3465   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3467
//~   //  Request in: 3467   CONTROL response data: 80
     c = sbi_read(0x000c);

//~       ctrl_tx(0x0204,0x000b);
//~       ctrl_tx(0x0205,0x0000);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3475
//~   //  Request in: 3475   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3477
//~   //  Request in: 3477   CONTROL response data: 04
     sbi_write(0x000b,0x0000);

//~       ctrl_tx(0x0208,0x000b);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3483
//~   //  Request in: 3483   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3485
//~   //  Request in: 3485   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3487
//~   //  Request in: 3487   CONTROL response data: 00
     c = sbi_read(0x000b);

//~       ctrl_tx(0x0204,0x000a);
//~       ctrl_tx(0x0205,0x009b);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3495
//~   //  Request in: 3495   CONTROL response data: 04
     sbi_write(0x000a,0x009b);

//~       ctrl_tx(0x0208,0x000a);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3501
//~   //  Request in: 3501   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3503
//~   //  Request in: 3503   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3505
//~   //  Request in: 3505   CONTROL response data: 9b
     c = sbi_read(0x000a);

//~       ctrl_tx(0x0204,0x0008);
//~       ctrl_tx(0x0205,0x0008);
//~       ctrl_tx(0x0200,0x0005);
//~       c = ctrl_rx(0x0201); // 3513
//~   //  Request in: 3513   CONTROL response data: 04
     sbi_write(0x0008,0x0008);

//~       ctrl_tx(0x0208,0x0008);
//~       ctrl_tx(0x0200,0x0020);
//~       c = ctrl_rx(0x0201); // 3519
//~   //  Request in: 3519   CONTROL response data: 00
//~       c = ctrl_rx(0x0201); // 3521
//~   //  Request in: 3521   CONTROL response data: 01
//~       c = ctrl_rx(0x0209); // 3523
//~   //  Request in: 3523   CONTROL response data: 08
     c = sbi_read(0x0008);
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
