 //
 //  This code generated from a wireshark USB capture file:
 //     python pcap2c.py m036-1.45.0-Radio-87.95MHz.pcap 1.45.0 | grep '! ' | cut -c2-
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
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 15
 //  Request in: 15   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 21
 //  Request in: 21   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 23
 //  Request in: 23   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 25
 //  Request in: 25   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 33
 //  Request in: 33   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 39
 //  Request in: 39   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 41
 //  Request in: 41   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 49
 //  Request in: 49   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 55
 //  Request in: 55   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 57
 //  Request in: 57   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 65
 //  Request in: 65   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 71
 //  Request in: 71   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 73
 //  Request in: 73   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 81
 //  Request in: 81   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 87
 //  Request in: 87   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 89
 //  Request in: 89   CONTROL response data: 08
     ctrl_tx(0x0203,0x00a0);
     ctrl_tx(0x0208,0x003c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 97
 //  Request in: 97   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 99
 //  Request in: 99   CONTROL response data: 79
     ctrl_tx(0x0203,0x00a0);
     ctrl_tx(0x0208,0x003d);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 107
 //  Request in: 107   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 109
 //  Request in: 109   CONTROL response data: 17
     ctrl_tx(0x0203,0x00a0);
     ctrl_tx(0x0208,0x003e);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 117
 //  Request in: 117   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 119
 //  Request in: 119   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 121
 //  Request in: 121   CONTROL response data: 08
     ctrl_tx(0x0203,0x00a0);
     ctrl_tx(0x0208,0x003f);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 129
 //  Request in: 129   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 131
 //  Request in: 131   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 133
 //  Request in: 133   CONTROL response data: 07
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0001);
     ctrl_tx(0x0503,0x0001);
     ctrl_tx(0x0500,0x008c);
     c = ctrl_rx(0x0000); // 143
 //  Request in: 143   CONTROL response data: 74
     c = ctrl_rx(0x0002); // 145
 //  Request in: 145   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x0074);
     ctrl_tx(0x0203,0x00ba);
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
     c = ctrl_rx(0x0100); // 201
 //  Request in: 201   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 211
 //  Request in: 211   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x000c);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 219
 //  Request in: 219   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 227
 //  Request in: 227   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 229
 //  Request in: 229   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 237
 //  Request in: 237   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 239
 //  Request in: 239   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 241
 //  Request in: 241   CONTROL response data: 33
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
     c = ctrl_rx(0x0100); // 265
 //  Request in: 265   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 269
 //  Request in: 269   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 279
 //  Request in: 279   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 281
 //  Request in: 281   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x002f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 289
 //  Request in: 289   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 291
 //  Request in: 291   CONTROL response data: 04
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0203,0x00ba);
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
     c = ctrl_rx(0x0100); // 345
 //  Request in: 345   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 355
 //  Request in: 355   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x000c);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 363
 //  Request in: 363   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 365
 //  Request in: 365   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 373
 //  Request in: 373   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 375
 //  Request in: 375   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 383
 //  Request in: 383   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 385
 //  Request in: 385   CONTROL response data: 04
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
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 409
 //  Request in: 409   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 411
 //  Request in: 411   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x002f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 419
 //  Request in: 419   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 421
 //  Request in: 421   CONTROL response data: 04
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0110,0x0050);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0019);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0550);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x0109);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 453
 //  Request in: 453   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 459
 //  Request in: 459   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 461
 //  Request in: 461   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 469
 //  Request in: 469   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 475
 //  Request in: 475   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 477
 //  Request in: 477   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 479
 //  Request in: 479   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 487
 //  Request in: 487   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 489
 //  Request in: 489   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 495
 //  Request in: 495   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 497
 //  Request in: 497   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 499
 //  Request in: 499   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 507
 //  Request in: 507   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 509
 //  Request in: 509   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 515
 //  Request in: 515   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 517
 //  Request in: 517   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 519
 //  Request in: 519   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 527
 //  Request in: 527   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 529
 //  Request in: 529   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 535
 //  Request in: 535   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 537
 //  Request in: 537   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 539
 //  Request in: 539   CONTROL response data: 08
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 549
 //  Request in: 549   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 551
 //  Request in: 551   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 559
 //  Request in: 559   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 561
 //  Request in: 561   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 569
 //  Request in: 569   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 571
 //  Request in: 571   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x006e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 581
 //  Request in: 581   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 583
 //  Request in: 583   CONTROL response data: 04
     ctrl_tx(0x0204,0x00c6);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 591
 //  Request in: 591   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 593
 //  Request in: 593   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 603
 //  Request in: 603   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 605
 //  Request in: 605   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 613
 //  Request in: 613   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 615
 //  Request in: 615   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 623
 //  Request in: 623   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 625
 //  Request in: 625   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 627
 //  Request in: 627   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 635
 //  Request in: 635   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 637
 //  Request in: 637   CONTROL response data: 80
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 651
 //  Request in: 651   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 653
 //  Request in: 653   CONTROL response data: 80
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     c = ctrl_rx(0x0100); // 663
 //  Request in: 663   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 667
 //  Request in: 667   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 679
 //  Request in: 679   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 681
 //  Request in: 681   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x002f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 689
 //  Request in: 689   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 691
 //  Request in: 691   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 699
 //  Request in: 699   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 701
 //  Request in: 701   CONTROL response data: 88
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 715
 //  Request in: 715   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 717
 //  Request in: 717   CONTROL response data: 88
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0008);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 731
 //  Request in: 731   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 733
 //  Request in: 733   CONTROL response data: 80
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 747
 //  Request in: 747   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 749
 //  Request in: 749   CONTROL response data: 88
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0008);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001a);
     ctrl_tx(0x0502,0x0001);
     ctrl_tx(0x0503,0x0001);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0001);
     ctrl_tx(0x0503,0x0001);
     ctrl_tx(0x0500,0x008c);
     c = ctrl_rx(0x0000); // 775
 //  Request in: 775   CONTROL response data: 64
     c = ctrl_rx(0x0002); // 777
 //  Request in: 777   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0203,0x00ba);
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
     c = ctrl_rx(0x0100); // 833
 //  Request in: 833   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 843
 //  Request in: 843   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x000c);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 851
 //  Request in: 851   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 859
 //  Request in: 859   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 867
 //  Request in: 867   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 869
 //  Request in: 869   CONTROL response data: b3
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
     c = ctrl_rx(0x0100); // 893
 //  Request in: 893   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 897
 //  Request in: 897   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 907
 //  Request in: 907   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x002f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 915
 //  Request in: 915   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0203,0x00ba);
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
     c = ctrl_rx(0x0100); // 969
 //  Request in: 969   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 979
 //  Request in: 979   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x000c);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 987
 //  Request in: 987   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 989
 //  Request in: 989   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 997
 //  Request in: 997   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 999
 //  Request in: 999   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1007
 //  Request in: 1007   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1009
 //  Request in: 1009   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 1011
 //  Request in: 1011   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 1019
 //  Request in: 1019   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1023
 //  Request in: 1023   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1033
 //  Request in: 1033   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1035
 //  Request in: 1035   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x002f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1043
 //  Request in: 1043   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1045
 //  Request in: 1045   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0110,0x0050);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0019);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0550);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x0109);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1077
 //  Request in: 1077   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1083
 //  Request in: 1083   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1085
 //  Request in: 1085   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1087
 //  Request in: 1087   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1095
 //  Request in: 1095   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1097
 //  Request in: 1097   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1103
 //  Request in: 1103   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1105
 //  Request in: 1105   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1107
 //  Request in: 1107   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1115
 //  Request in: 1115   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1117
 //  Request in: 1117   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1123
 //  Request in: 1123   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1125
 //  Request in: 1125   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1127
 //  Request in: 1127   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1135
 //  Request in: 1135   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1137
 //  Request in: 1137   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1143
 //  Request in: 1143   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1145
 //  Request in: 1145   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1147
 //  Request in: 1147   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1155
 //  Request in: 1155   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1157
 //  Request in: 1157   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1163
 //  Request in: 1163   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1165
 //  Request in: 1165   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1167
 //  Request in: 1167   CONTROL response data: 08
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1177
 //  Request in: 1177   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1179
 //  Request in: 1179   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1187
 //  Request in: 1187   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1189
 //  Request in: 1189   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1197
 //  Request in: 1197   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1199
 //  Request in: 1199   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x006e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1209
 //  Request in: 1209   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1211
 //  Request in: 1211   CONTROL response data: 04
     ctrl_tx(0x0204,0x00c6);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1219
 //  Request in: 1219   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1221
 //  Request in: 1221   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1231
 //  Request in: 1231   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1233
 //  Request in: 1233   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1241
 //  Request in: 1241   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1243
 //  Request in: 1243   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1251
 //  Request in: 1251   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1253
 //  Request in: 1253   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 1255
 //  Request in: 1255   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1263
 //  Request in: 1263   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1265
 //  Request in: 1265   CONTROL response data: 80
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1279
 //  Request in: 1279   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1281
 //  Request in: 1281   CONTROL response data: 80
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1295
 //  Request in: 1295   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1297
 //  Request in: 1297   CONTROL response data: 00
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1311
 //  Request in: 1311   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1313
 //  Request in: 1313   CONTROL response data: 00
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     c = ctrl_rx(0x0000); // 1323
 //  Request in: 1323   CONTROL response data: 64
     c = ctrl_rx(0x0002); // 1325
 //  Request in: 1325   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0203,0x00ba);
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
     c = ctrl_rx(0x0100); // 1381
 //  Request in: 1381   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1391
 //  Request in: 1391   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x000c);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1399
 //  Request in: 1399   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1407
 //  Request in: 1407   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1409
 //  Request in: 1409   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1417
 //  Request in: 1417   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 1419
 //  Request in: 1419   CONTROL response data: b3
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
     c = ctrl_rx(0x0100); // 1443
 //  Request in: 1443   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1447
 //  Request in: 1447   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1457
 //  Request in: 1457   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x002f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1465
 //  Request in: 1465   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0203,0x00ba);
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
     c = ctrl_rx(0x0100); // 1519
 //  Request in: 1519   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1529
 //  Request in: 1529   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x000c);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1537
 //  Request in: 1537   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1545
 //  Request in: 1545   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1547
 //  Request in: 1547   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1555
 //  Request in: 1555   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1557
 //  Request in: 1557   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 1559
 //  Request in: 1559   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 1567
 //  Request in: 1567   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1571
 //  Request in: 1571   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1581
 //  Request in: 1581   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1583
 //  Request in: 1583   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x002f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1591
 //  Request in: 1591   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1593
 //  Request in: 1593   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0110,0x0050);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0019);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0550);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x0109);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1625
 //  Request in: 1625   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1631
 //  Request in: 1631   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1633
 //  Request in: 1633   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1641
 //  Request in: 1641   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1647
 //  Request in: 1647   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1649
 //  Request in: 1649   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1657
 //  Request in: 1657   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1663
 //  Request in: 1663   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1665
 //  Request in: 1665   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1667
 //  Request in: 1667   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1675
 //  Request in: 1675   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1677
 //  Request in: 1677   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1683
 //  Request in: 1683   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1685
 //  Request in: 1685   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1687
 //  Request in: 1687   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1695
 //  Request in: 1695   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1701
 //  Request in: 1701   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1703
 //  Request in: 1703   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1705
 //  Request in: 1705   CONTROL response data: 08
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1715
 //  Request in: 1715   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1717
 //  Request in: 1717   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1725
 //  Request in: 1725   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1727
 //  Request in: 1727   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1735
 //  Request in: 1735   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x006e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1745
 //  Request in: 1745   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1747
 //  Request in: 1747   CONTROL response data: 04
     ctrl_tx(0x0204,0x00c6);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1755
 //  Request in: 1755   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1757
 //  Request in: 1757   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1767
 //  Request in: 1767   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1775
 //  Request in: 1775   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1777
 //  Request in: 1777   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1785
 //  Request in: 1785   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1787
 //  Request in: 1787   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 1789
 //  Request in: 1789   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1797
 //  Request in: 1797   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1799
 //  Request in: 1799   CONTROL response data: 80
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1813
 //  Request in: 1813   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1815
 //  Request in: 1815   CONTROL response data: 80
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1829
 //  Request in: 1829   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 1831
 //  Request in: 1831   CONTROL response data: 88
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1845
 //  Request in: 1845   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 1847
 //  Request in: 1847   CONTROL response data: 88
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0008);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1861
 //  Request in: 1861   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 1863
 //  Request in: 1863   CONTROL response data: 80
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1877
 //  Request in: 1877   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 1879
 //  Request in: 1879   CONTROL response data: 88
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0008);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001a);
     ctrl_tx(0x0502,0x0001);
     ctrl_tx(0x0503,0x0001);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0001);
     ctrl_tx(0x0503,0x0001);
     ctrl_tx(0x0500,0x008c);
     c = ctrl_rx(0x0000); // 1905
 //  Request in: 1905   CONTROL response data: 64
     c = ctrl_rx(0x0002); // 1907
 //  Request in: 1907   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0203,0x00ba);
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
     c = ctrl_rx(0x0100); // 1963
 //  Request in: 1963   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1973
 //  Request in: 1973   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1975
 //  Request in: 1975   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x000c);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1983
 //  Request in: 1983   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1985
 //  Request in: 1985   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1993
 //  Request in: 1993   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1995
 //  Request in: 1995   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2003
 //  Request in: 2003   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 2005
 //  Request in: 2005   CONTROL response data: b3
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
     c = ctrl_rx(0x0100); // 2029
 //  Request in: 2029   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2033
 //  Request in: 2033   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2043
 //  Request in: 2043   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x002f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2051
 //  Request in: 2051   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0203,0x00ba);
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
     c = ctrl_rx(0x0100); // 2105
 //  Request in: 2105   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2115
 //  Request in: 2115   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x000c);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2123
 //  Request in: 2123   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2125
 //  Request in: 2125   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2133
 //  Request in: 2133   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2135
 //  Request in: 2135   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2143
 //  Request in: 2143   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2145
 //  Request in: 2145   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 2147
 //  Request in: 2147   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 2155
 //  Request in: 2155   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2159
 //  Request in: 2159   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2169
 //  Request in: 2169   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2171
 //  Request in: 2171   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x002f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2179
 //  Request in: 2179   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2181
 //  Request in: 2181   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0110,0x0050);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0019);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0550);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x0109);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2213
 //  Request in: 2213   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2219
 //  Request in: 2219   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2221
 //  Request in: 2221   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2229
 //  Request in: 2229   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2235
 //  Request in: 2235   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2237
 //  Request in: 2237   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2245
 //  Request in: 2245   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2251
 //  Request in: 2251   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2253
 //  Request in: 2253   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2261
 //  Request in: 2261   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2263
 //  Request in: 2263   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2269
 //  Request in: 2269   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2271
 //  Request in: 2271   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2273
 //  Request in: 2273   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2281
 //  Request in: 2281   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2287
 //  Request in: 2287   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2289
 //  Request in: 2289   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2291
 //  Request in: 2291   CONTROL response data: 08
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2301
 //  Request in: 2301   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2303
 //  Request in: 2303   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2311
 //  Request in: 2311   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2313
 //  Request in: 2313   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2321
 //  Request in: 2321   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2323
 //  Request in: 2323   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x006e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2333
 //  Request in: 2333   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2335
 //  Request in: 2335   CONTROL response data: 04
     ctrl_tx(0x0204,0x00c6);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2343
 //  Request in: 2343   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2345
 //  Request in: 2345   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2355
 //  Request in: 2355   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2357
 //  Request in: 2357   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2365
 //  Request in: 2365   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2367
 //  Request in: 2367   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2375
 //  Request in: 2375   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2377
 //  Request in: 2377   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 2379
 //  Request in: 2379   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 2387
 //  Request in: 2387   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 2389
 //  Request in: 2389   CONTROL response data: 80
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 2403
 //  Request in: 2403   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 2405
 //  Request in: 2405   CONTROL response data: 80
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 2419
 //  Request in: 2419   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 2421
 //  Request in: 2421   CONTROL response data: 00
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 2435
 //  Request in: 2435   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 2437
 //  Request in: 2437   CONTROL response data: 00
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
 
     fprintf(stderr, "Select interface ...\n");
     r = libusb_set_interface_alt_setting(devh, 0, 5);
     if (r != 0)
        fprintf(stderr, "!! Select interface (0,5) failed with error %d\n", r);
     else
        fprintf(stderr,"   Interface %d, Setting %d is active\n",0,5);
 
     ctrl_tx(0x0203,0x00ba);
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
     c = ctrl_rx(0x0100); // 2499
 //  Request in: 2499   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2509
 //  Request in: 2509   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x000c);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2517
 //  Request in: 2517   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2525
 //  Request in: 2525   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2533
 //  Request in: 2533   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 2535
 //  Request in: 2535   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0106,0x0000);
     c = ctrl_rx(0x0100); // 2545
 //  Request in: 2545   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2549
 //  Request in: 2549   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2559
 //  Request in: 2559   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x002f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2567
 //  Request in: 2567   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2569
 //  Request in: 2569   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0203,0x00ba);
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
     c = ctrl_rx(0x0100); // 2623
 //  Request in: 2623   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2633
 //  Request in: 2633   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x000c);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2641
 //  Request in: 2641   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2649
 //  Request in: 2649   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2651
 //  Request in: 2651   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2659
 //  Request in: 2659   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2661
 //  Request in: 2661   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 2663
 //  Request in: 2663   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 2671
 //  Request in: 2671   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2675
 //  Request in: 2675   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2685
 //  Request in: 2685   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2687
 //  Request in: 2687   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x002f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2695
 //  Request in: 2695   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2697
 //  Request in: 2697   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0110,0x0050);
     ctrl_tx(0x0111,0x0000);
     ctrl_tx(0x0112,0x0019);
     ctrl_tx(0x0113,0x0000);
     ctrl_tx(0x0114,0x0550);
     ctrl_tx(0x0115,0x0005);
     ctrl_tx(0x0116,0x0109);
     ctrl_tx(0x0117,0x0001);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2729
 //  Request in: 2729   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2735
 //  Request in: 2735   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2737
 //  Request in: 2737   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2745
 //  Request in: 2745   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2751
 //  Request in: 2751   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2753
 //  Request in: 2753   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2761
 //  Request in: 2761   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2767
 //  Request in: 2767   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2769
 //  Request in: 2769   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2771
 //  Request in: 2771   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2779
 //  Request in: 2779   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2785
 //  Request in: 2785   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2787
 //  Request in: 2787   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2789
 //  Request in: 2789   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2797
 //  Request in: 2797   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2799
 //  Request in: 2799   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2805
 //  Request in: 2805   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2807
 //  Request in: 2807   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2809
 //  Request in: 2809   CONTROL response data: 08
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0116); // 2817
 //  Request in: 2817   CONTROL response data: 09
     c = ctrl_rx(0x0117); // 2819
 //  Request in: 2819   CONTROL response data: 01
     ctrl_tx(0x0116,0x0000);
     ctrl_tx(0x0117,0x0000);
     c = ctrl_rx(0x0100); // 2825
 //  Request in: 2825   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0116,0x0009);
     ctrl_tx(0x0117,0x0001);
 
     // r = libusb_set_interface_alt_setting(devh, 2, 1);
 
     c = ctrl_rx(0x0003); // 2835
 //  Request in: 2835   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 2839
 //  Request in: 2839   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 2843
 //  Request in: 2843   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 2847
 //  Request in: 2847   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 2851
 //  Request in: 2851   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 2855
 //  Request in: 2855   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 2859
 //  Request in: 2859   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 2863
 //  Request in: 2863   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 2867
 //  Request in: 2867   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 2871
 //  Request in: 2871   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 2875
 //  Request in: 2875   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 2879
 //  Request in: 2879   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 2883
 //  Request in: 2883   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 2887
 //  Request in: 2887   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 2891
 //  Request in: 2891   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 2895
 //  Request in: 2895   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 2899
 //  Request in: 2899   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 2903
 //  Request in: 2903   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 2907
 //  Request in: 2907   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 2911
 //  Request in: 2911   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 2915
 //  Request in: 2915   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 2919
 //  Request in: 2919   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 2923
 //  Request in: 2923   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 2927
 //  Request in: 2927   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 2931
 //  Request in: 2931   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 2935
 //  Request in: 2935   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 2939
 //  Request in: 2939   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 2943
 //  Request in: 2943   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 2947
 //  Request in: 2947   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 2951
 //  Request in: 2951   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 2955
 //  Request in: 2955   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 2959
 //  Request in: 2959   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 2963
 //  Request in: 2963   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 2967
 //  Request in: 2967   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 2971
 //  Request in: 2971   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 2973
 //  Request in: 2973   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 2977
 //  Request in: 2977   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 2981
 //  Request in: 2981   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 2985
 //  Request in: 2985   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 2989
 //  Request in: 2989   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 2993
 //  Request in: 2993   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 2997
 //  Request in: 2997   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3001
 //  Request in: 3001   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3005
 //  Request in: 3005   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3009
 //  Request in: 3009   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3013
 //  Request in: 3013   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3017
 //  Request in: 3017   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3021
 //  Request in: 3021   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3025
 //  Request in: 3025   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3029
 //  Request in: 3029   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3033
 //  Request in: 3033   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3037
 //  Request in: 3037   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3041
 //  Request in: 3041   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3045
 //  Request in: 3045   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3049
 //  Request in: 3049   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3053
 //  Request in: 3053   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3057
 //  Request in: 3057   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3061
 //  Request in: 3061   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3065
 //  Request in: 3065   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3069
 //  Request in: 3069   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3073
 //  Request in: 3073   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3077
 //  Request in: 3077   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3081
 //  Request in: 3081   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 3085
 //  Request in: 3085   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3089
 //  Request in: 3089   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 3093
 //  Request in: 3093   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 3095
 //  Request in: 3095   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 3099
 //  Request in: 3099   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3103
 //  Request in: 3103   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 3107
 //  Request in: 3107   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3111
 //  Request in: 3111   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3115
 //  Request in: 3115   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3119
 //  Request in: 3119   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3123
 //  Request in: 3123   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3127
 //  Request in: 3127   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3131
 //  Request in: 3131   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3135
 //  Request in: 3135   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3139
 //  Request in: 3139   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3143
 //  Request in: 3143   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3147
 //  Request in: 3147   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3151
 //  Request in: 3151   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3155
 //  Request in: 3155   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3159
 //  Request in: 3159   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3163
 //  Request in: 3163   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3167
 //  Request in: 3167   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3171
 //  Request in: 3171   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3175
 //  Request in: 3175   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3179
 //  Request in: 3179   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3183
 //  Request in: 3183   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3187
 //  Request in: 3187   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3191
 //  Request in: 3191   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3195
 //  Request in: 3195   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3199
 //  Request in: 3199   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3203
 //  Request in: 3203   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 3207
 //  Request in: 3207   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3211
 //  Request in: 3211   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 3215
 //  Request in: 3215   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 3217
 //  Request in: 3217   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 3221
 //  Request in: 3221   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3225
 //  Request in: 3225   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 3229
 //  Request in: 3229   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3233
 //  Request in: 3233   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3237
 //  Request in: 3237   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3241
 //  Request in: 3241   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3245
 //  Request in: 3245   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3249
 //  Request in: 3249   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3253
 //  Request in: 3253   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3257
 //  Request in: 3257   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3261
 //  Request in: 3261   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3265
 //  Request in: 3265   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3269
 //  Request in: 3269   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3273
 //  Request in: 3273   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3277
 //  Request in: 3277   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3281
 //  Request in: 3281   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3285
 //  Request in: 3285   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3289
 //  Request in: 3289   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3293
 //  Request in: 3293   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3297
 //  Request in: 3297   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3301
 //  Request in: 3301   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3305
 //  Request in: 3305   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3309
 //  Request in: 3309   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3313
 //  Request in: 3313   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3317
 //  Request in: 3317   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3321
 //  Request in: 3321   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3325
 //  Request in: 3325   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 3329
 //  Request in: 3329   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3333
 //  Request in: 3333   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 3337
 //  Request in: 3337   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 3339
 //  Request in: 3339   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 3343
 //  Request in: 3343   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3347
 //  Request in: 3347   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 3351
 //  Request in: 3351   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3355
 //  Request in: 3355   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3359
 //  Request in: 3359   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3363
 //  Request in: 3363   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3367
 //  Request in: 3367   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3371
 //  Request in: 3371   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3375
 //  Request in: 3375   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3379
 //  Request in: 3379   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3383
 //  Request in: 3383   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3387
 //  Request in: 3387   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3391
 //  Request in: 3391   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3395
 //  Request in: 3395   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3399
 //  Request in: 3399   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3403
 //  Request in: 3403   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3407
 //  Request in: 3407   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3411
 //  Request in: 3411   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3415
 //  Request in: 3415   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3419
 //  Request in: 3419   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3423
 //  Request in: 3423   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3427
 //  Request in: 3427   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3431
 //  Request in: 3431   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3435
 //  Request in: 3435   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3439
 //  Request in: 3439   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3443
 //  Request in: 3443   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3447
 //  Request in: 3447   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 3451
 //  Request in: 3451   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3455
 //  Request in: 3455   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 3459
 //  Request in: 3459   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 3461
 //  Request in: 3461   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 3465
 //  Request in: 3465   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3469
 //  Request in: 3469   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 3473
 //  Request in: 3473   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3477
 //  Request in: 3477   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3481
 //  Request in: 3481   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3485
 //  Request in: 3485   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3489
 //  Request in: 3489   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3493
 //  Request in: 3493   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3497
 //  Request in: 3497   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3501
 //  Request in: 3501   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3505
 //  Request in: 3505   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3509
 //  Request in: 3509   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3513
 //  Request in: 3513   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3517
 //  Request in: 3517   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3521
 //  Request in: 3521   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3525
 //  Request in: 3525   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3529
 //  Request in: 3529   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3533
 //  Request in: 3533   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3537
 //  Request in: 3537   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3541
 //  Request in: 3541   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3545
 //  Request in: 3545   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3549
 //  Request in: 3549   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3553
 //  Request in: 3553   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3557
 //  Request in: 3557   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3561
 //  Request in: 3561   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3565
 //  Request in: 3565   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3569
 //  Request in: 3569   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 3573
 //  Request in: 3573   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3577
 //  Request in: 3577   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 3581
 //  Request in: 3581   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 3583
 //  Request in: 3583   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3587
 //  Request in: 3587   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 3591
 //  Request in: 3591   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3595
 //  Request in: 3595   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 3599
 //  Request in: 3599   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 3603
 //  Request in: 3603   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 3607
 //  Request in: 3607   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3611
 //  Request in: 3611   CONTROL response data: 74
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 3615
 //  Request in: 3615   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3619
 //  Request in: 3619   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 3623
 //  Request in: 3623   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3627
 //  Request in: 3627   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 3631
 //  Request in: 3631   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3635
 //  Request in: 3635   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3639
 //  Request in: 3639   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3643
 //  Request in: 3643   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3647
 //  Request in: 3647   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3651
 //  Request in: 3651   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3655
 //  Request in: 3655   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3659
 //  Request in: 3659   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3663
 //  Request in: 3663   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3667
 //  Request in: 3667   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3671
 //  Request in: 3671   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3675
 //  Request in: 3675   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3679
 //  Request in: 3679   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3683
 //  Request in: 3683   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3687
 //  Request in: 3687   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3691
 //  Request in: 3691   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3695
 //  Request in: 3695   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3699
 //  Request in: 3699   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3703
 //  Request in: 3703   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3707
 //  Request in: 3707   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3711
 //  Request in: 3711   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3715
 //  Request in: 3715   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3719
 //  Request in: 3719   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3723
 //  Request in: 3723   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3727
 //  Request in: 3727   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 3731
 //  Request in: 3731   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3735
 //  Request in: 3735   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 3739
 //  Request in: 3739   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 3741
 //  Request in: 3741   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 3745
 //  Request in: 3745   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3749
 //  Request in: 3749   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 3753
 //  Request in: 3753   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3757
 //  Request in: 3757   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3761
 //  Request in: 3761   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3765
 //  Request in: 3765   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3769
 //  Request in: 3769   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3773
 //  Request in: 3773   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3777
 //  Request in: 3777   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3781
 //  Request in: 3781   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3785
 //  Request in: 3785   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3789
 //  Request in: 3789   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3793
 //  Request in: 3793   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3797
 //  Request in: 3797   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3801
 //  Request in: 3801   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3805
 //  Request in: 3805   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3809
 //  Request in: 3809   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3813
 //  Request in: 3813   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3817
 //  Request in: 3817   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3821
 //  Request in: 3821   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3825
 //  Request in: 3825   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3829
 //  Request in: 3829   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3833
 //  Request in: 3833   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3837
 //  Request in: 3837   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3841
 //  Request in: 3841   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3845
 //  Request in: 3845   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3849
 //  Request in: 3849   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 3853
 //  Request in: 3853   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3857
 //  Request in: 3857   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 3861
 //  Request in: 3861   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 3863
 //  Request in: 3863   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 3867
 //  Request in: 3867   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3871
 //  Request in: 3871   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 3875
 //  Request in: 3875   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3879
 //  Request in: 3879   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3883
 //  Request in: 3883   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3887
 //  Request in: 3887   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3891
 //  Request in: 3891   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3895
 //  Request in: 3895   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3899
 //  Request in: 3899   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3903
 //  Request in: 3903   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3907
 //  Request in: 3907   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3911
 //  Request in: 3911   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3915
 //  Request in: 3915   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3919
 //  Request in: 3919   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3923
 //  Request in: 3923   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3927
 //  Request in: 3927   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3931
 //  Request in: 3931   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3935
 //  Request in: 3935   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3939
 //  Request in: 3939   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3943
 //  Request in: 3943   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3947
 //  Request in: 3947   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3951
 //  Request in: 3951   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3955
 //  Request in: 3955   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 3959
 //  Request in: 3959   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 3963
 //  Request in: 3963   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 3967
 //  Request in: 3967   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3971
 //  Request in: 3971   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 3975
 //  Request in: 3975   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 3979
 //  Request in: 3979   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 3983
 //  Request in: 3983   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 3985
 //  Request in: 3985   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 3989
 //  Request in: 3989   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 3993
 //  Request in: 3993   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 3997
 //  Request in: 3997   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4001
 //  Request in: 4001   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4005
 //  Request in: 4005   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4009
 //  Request in: 4009   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4013
 //  Request in: 4013   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4017
 //  Request in: 4017   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4021
 //  Request in: 4021   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4025
 //  Request in: 4025   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4029
 //  Request in: 4029   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4033
 //  Request in: 4033   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4037
 //  Request in: 4037   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4041
 //  Request in: 4041   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4045
 //  Request in: 4045   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4049
 //  Request in: 4049   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4053
 //  Request in: 4053   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4057
 //  Request in: 4057   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4061
 //  Request in: 4061   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4065
 //  Request in: 4065   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4069
 //  Request in: 4069   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4073
 //  Request in: 4073   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4077
 //  Request in: 4077   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4081
 //  Request in: 4081   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4085
 //  Request in: 4085   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4089
 //  Request in: 4089   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 4093
 //  Request in: 4093   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 4097
 //  Request in: 4097   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 4101
 //  Request in: 4101   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4105
 //  Request in: 4105   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4107
 //  Request in: 4107   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4111
 //  Request in: 4111   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 4115
 //  Request in: 4115   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 4119
 //  Request in: 4119   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4123
 //  Request in: 4123   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4127
 //  Request in: 4127   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4131
 //  Request in: 4131   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4135
 //  Request in: 4135   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4139
 //  Request in: 4139   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4143
 //  Request in: 4143   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4147
 //  Request in: 4147   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4151
 //  Request in: 4151   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4155
 //  Request in: 4155   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4159
 //  Request in: 4159   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4163
 //  Request in: 4163   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4167
 //  Request in: 4167   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4171
 //  Request in: 4171   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4175
 //  Request in: 4175   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4179
 //  Request in: 4179   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4183
 //  Request in: 4183   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4187
 //  Request in: 4187   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4191
 //  Request in: 4191   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4195
 //  Request in: 4195   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4199
 //  Request in: 4199   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4203
 //  Request in: 4203   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4207
 //  Request in: 4207   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4211
 //  Request in: 4211   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 4215
 //  Request in: 4215   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 4219
 //  Request in: 4219   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 4223
 //  Request in: 4223   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4227
 //  Request in: 4227   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4229
 //  Request in: 4229   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4233
 //  Request in: 4233   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 4237
 //  Request in: 4237   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 4241
 //  Request in: 4241   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4245
 //  Request in: 4245   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4249
 //  Request in: 4249   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4253
 //  Request in: 4253   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4257
 //  Request in: 4257   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4261
 //  Request in: 4261   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4265
 //  Request in: 4265   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4269
 //  Request in: 4269   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4273
 //  Request in: 4273   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4277
 //  Request in: 4277   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4281
 //  Request in: 4281   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4285
 //  Request in: 4285   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4289
 //  Request in: 4289   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4293
 //  Request in: 4293   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4297
 //  Request in: 4297   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4301
 //  Request in: 4301   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4305
 //  Request in: 4305   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4309
 //  Request in: 4309   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4313
 //  Request in: 4313   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4317
 //  Request in: 4317   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4321
 //  Request in: 4321   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4325
 //  Request in: 4325   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4329
 //  Request in: 4329   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4333
 //  Request in: 4333   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 4337
 //  Request in: 4337   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 4341
 //  Request in: 4341   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 4345
 //  Request in: 4345   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4349
 //  Request in: 4349   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4351
 //  Request in: 4351   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 4355
 //  Request in: 4355   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 4359
 //  Request in: 4359   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4363
 //  Request in: 4363   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4367
 //  Request in: 4367   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4375
 //  Request in: 4375   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4377
 //  Request in: 4377   CONTROL response data: 88
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4391
 //  Request in: 4391   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4393
 //  Request in: 4393   CONTROL response data: 80
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4407
 //  Request in: 4407   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4409
 //  Request in: 4409   CONTROL response data: 88
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0008);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4423
 //  Request in: 4423   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4425
 //  Request in: 4425   CONTROL response data: 88
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001a);
     ctrl_tx(0x0502,0x0003);
     ctrl_tx(0x0503,0x0003);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     c = ctrl_rx(0x0001); // 4451
 //  Request in: 4451   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4453
 //  Request in: 4453   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4455
 //  Request in: 4455   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4457
 //  Request in: 4457   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4459
 //  Request in: 4459   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4461
 //  Request in: 4461   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4463
 //  Request in: 4463   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4465
 //  Request in: 4465   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4467
 //  Request in: 4467   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4469
 //  Request in: 4469   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4471
 //  Request in: 4471   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4473
 //  Request in: 4473   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4475
 //  Request in: 4475   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4477
 //  Request in: 4477   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4479
 //  Request in: 4479   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4481
 //  Request in: 4481   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4483
 //  Request in: 4483   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4485
 //  Request in: 4485   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4487
 //  Request in: 4487   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4489
 //  Request in: 4489   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4491
 //  Request in: 4491   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4493
 //  Request in: 4493   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4495
 //  Request in: 4495   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 4497
 //  Request in: 4497   CONTROL response data: 03
     c = ctrl_rx(0x0003); // 4499
 //  Request in: 4499   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 4503
 //  Request in: 4503   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 4507
 //  Request in: 4507   CONTROL response data: 74
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4511
 //  Request in: 4511   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4515
 //  Request in: 4515   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4519
 //  Request in: 4519   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 4523
 //  Request in: 4523   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 4527
 //  Request in: 4527   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 4531
 //  Request in: 4531   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4535
 //  Request in: 4535   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4537
 //  Request in: 4537   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4541
 //  Request in: 4541   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 4545
 //  Request in: 4545   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4549
 //  Request in: 4549   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4553
 //  Request in: 4553   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4557
 //  Request in: 4557   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4561
 //  Request in: 4561   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4565
 //  Request in: 4565   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4569
 //  Request in: 4569   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4573
 //  Request in: 4573   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4577
 //  Request in: 4577   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4581
 //  Request in: 4581   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4585
 //  Request in: 4585   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4589
 //  Request in: 4589   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4593
 //  Request in: 4593   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4597
 //  Request in: 4597   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4601
 //  Request in: 4601   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4605
 //  Request in: 4605   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4609
 //  Request in: 4609   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4613
 //  Request in: 4613   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 4615
 //  Request in: 4615   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 4619
 //  Request in: 4619   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4623
 //  Request in: 4623   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 4627
 //  Request in: 4627   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 4631
 //  Request in: 4631   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 4635
 //  Request in: 4635   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4639
 //  Request in: 4639   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4641
 //  Request in: 4641   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4645
 //  Request in: 4645   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 4649
 //  Request in: 4649   CONTROL response data: 82
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 4653
 //  Request in: 4653   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4657
 //  Request in: 4657   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4659
 //  Request in: 4659   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4663
 //  Request in: 4663   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4667
 //  Request in: 4667   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4669
 //  Request in: 4669   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4673
 //  Request in: 4673   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4677
 //  Request in: 4677   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4679
 //  Request in: 4679   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4683
 //  Request in: 4683   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4687
 //  Request in: 4687   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4689
 //  Request in: 4689   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4693
 //  Request in: 4693   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4697
 //  Request in: 4697   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4699
 //  Request in: 4699   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4703
 //  Request in: 4703   CONTROL response data: 64
     c = ctrl_rx(0x0001); // 4705
 //  Request in: 4705   CONTROL response data: 02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4709
 //  Request in: 4709   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4711
 //  Request in: 4711   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4715
 //  Request in: 4715   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4719
 //  Request in: 4719   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4721
 //  Request in: 4721   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4725
 //  Request in: 4725   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4729
 //  Request in: 4729   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4731
 //  Request in: 4731   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 4735
 //  Request in: 4735   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 4739
 //  Request in: 4739   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4743
 //  Request in: 4743   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4747
 //  Request in: 4747   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4751
 //  Request in: 4751   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 4755
 //  Request in: 4755   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 4759
 //  Request in: 4759   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4763
 //  Request in: 4763   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4765
 //  Request in: 4765   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4769
 //  Request in: 4769   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4773
 //  Request in: 4773   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4775
 //  Request in: 4775   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4779
 //  Request in: 4779   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4783
 //  Request in: 4783   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4785
 //  Request in: 4785   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4789
 //  Request in: 4789   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4793
 //  Request in: 4793   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4795
 //  Request in: 4795   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4799
 //  Request in: 4799   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4803
 //  Request in: 4803   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4805
 //  Request in: 4805   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4809
 //  Request in: 4809   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4813
 //  Request in: 4813   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4815
 //  Request in: 4815   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4819
 //  Request in: 4819   CONTROL response data: 64
     c = ctrl_rx(0x0001); // 4821
 //  Request in: 4821   CONTROL response data: 03
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4825
 //  Request in: 4825   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4827
 //  Request in: 4827   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4831
 //  Request in: 4831   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4835
 //  Request in: 4835   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4837
 //  Request in: 4837   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 4841
 //  Request in: 4841   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 4845
 //  Request in: 4845   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4849
 //  Request in: 4849   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4853
 //  Request in: 4853   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4857
 //  Request in: 4857   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 4861
 //  Request in: 4861   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 4865
 //  Request in: 4865   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4869
 //  Request in: 4869   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4871
 //  Request in: 4871   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4875
 //  Request in: 4875   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4879
 //  Request in: 4879   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4881
 //  Request in: 4881   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4885
 //  Request in: 4885   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4889
 //  Request in: 4889   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4891
 //  Request in: 4891   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4895
 //  Request in: 4895   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4899
 //  Request in: 4899   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4901
 //  Request in: 4901   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4905
 //  Request in: 4905   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4909
 //  Request in: 4909   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4911
 //  Request in: 4911   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4915
 //  Request in: 4915   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4919
 //  Request in: 4919   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4921
 //  Request in: 4921   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4925
 //  Request in: 4925   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4929
 //  Request in: 4929   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4931
 //  Request in: 4931   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4935
 //  Request in: 4935   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4939
 //  Request in: 4939   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 4941
 //  Request in: 4941   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 4943
 //  Request in: 4943   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 4947
 //  Request in: 4947   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 4951
 //  Request in: 4951   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 4955
 //  Request in: 4955   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 4959
 //  Request in: 4959   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 4963
 //  Request in: 4963   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 4967
 //  Request in: 4967   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 4971
 //  Request in: 4971   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4975
 //  Request in: 4975   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4977
 //  Request in: 4977   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4981
 //  Request in: 4981   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4985
 //  Request in: 4985   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4987
 //  Request in: 4987   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 4991
 //  Request in: 4991   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 4995
 //  Request in: 4995   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 4997
 //  Request in: 4997   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5001
 //  Request in: 5001   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5005
 //  Request in: 5005   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5007
 //  Request in: 5007   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5011
 //  Request in: 5011   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5015
 //  Request in: 5015   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5017
 //  Request in: 5017   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5021
 //  Request in: 5021   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5025
 //  Request in: 5025   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5027
 //  Request in: 5027   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5031
 //  Request in: 5031   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5035
 //  Request in: 5035   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5037
 //  Request in: 5037   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5041
 //  Request in: 5041   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5045
 //  Request in: 5045   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5047
 //  Request in: 5047   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 5051
 //  Request in: 5051   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5055
 //  Request in: 5055   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5059
 //  Request in: 5059   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5063
 //  Request in: 5063   CONTROL response data: 74
     c = ctrl_rx(0x0001); // 5065
 //  Request in: 5065   CONTROL response data: 02
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5069
 //  Request in: 5069   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 5073
 //  Request in: 5073   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 5077
 //  Request in: 5077   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5081
 //  Request in: 5081   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5083
 //  Request in: 5083   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5087
 //  Request in: 5087   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5091
 //  Request in: 5091   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5093
 //  Request in: 5093   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5097
 //  Request in: 5097   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5101
 //  Request in: 5101   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5103
 //  Request in: 5103   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5107
 //  Request in: 5107   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5111
 //  Request in: 5111   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5113
 //  Request in: 5113   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5117
 //  Request in: 5117   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5121
 //  Request in: 5121   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5123
 //  Request in: 5123   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5127
 //  Request in: 5127   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5131
 //  Request in: 5131   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5133
 //  Request in: 5133   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5137
 //  Request in: 5137   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5141
 //  Request in: 5141   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5143
 //  Request in: 5143   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5147
 //  Request in: 5147   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5151
 //  Request in: 5151   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5153
 //  Request in: 5153   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 5157
 //  Request in: 5157   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5161
 //  Request in: 5161   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 5165
 //  Request in: 5165   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5169
 //  Request in: 5169   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5173
 //  Request in: 5173   CONTROL response data: 03
     c = ctrl_rx(0x0003); // 5175
 //  Request in: 5175   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5179
 //  Request in: 5179   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5183
 //  Request in: 5183   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5187
 //  Request in: 5187   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0001); // 5191
 //  Request in: 5191   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5193
 //  Request in: 5193   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5195
 //  Request in: 5195   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5197
 //  Request in: 5197   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5199
 //  Request in: 5199   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5201
 //  Request in: 5201   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5203
 //  Request in: 5203   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5205
 //  Request in: 5205   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5207
 //  Request in: 5207   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5209
 //  Request in: 5209   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5211
 //  Request in: 5211   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5213
 //  Request in: 5213   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5215
 //  Request in: 5215   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5217
 //  Request in: 5217   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5219
 //  Request in: 5219   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5221
 //  Request in: 5221   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5223
 //  Request in: 5223   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5225
 //  Request in: 5225   CONTROL response data: 03
     c = ctrl_rx(0x0003); // 5227
 //  Request in: 5227   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5231
 //  Request in: 5231   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 5235
 //  Request in: 5235   CONTROL response data: 74
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5239
 //  Request in: 5239   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5243
 //  Request in: 5243   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5247
 //  Request in: 5247   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 5251
 //  Request in: 5251   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5255
 //  Request in: 5255   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 5259
 //  Request in: 5259   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5263
 //  Request in: 5263   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5267
 //  Request in: 5267   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 5271
 //  Request in: 5271   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5275
 //  Request in: 5275   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5277
 //  Request in: 5277   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5281
 //  Request in: 5281   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5285
 //  Request in: 5285   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5289
 //  Request in: 5289   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5293
 //  Request in: 5293   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5297
 //  Request in: 5297   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5301
 //  Request in: 5301   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5305
 //  Request in: 5305   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5309
 //  Request in: 5309   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5313
 //  Request in: 5313   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5317
 //  Request in: 5317   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5321
 //  Request in: 5321   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5325
 //  Request in: 5325   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5329
 //  Request in: 5329   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5333
 //  Request in: 5333   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5337
 //  Request in: 5337   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5341
 //  Request in: 5341   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 5345
 //  Request in: 5345   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5349
 //  Request in: 5349   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 5353
 //  Request in: 5353   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 5357
 //  Request in: 5357   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 5361
 //  Request in: 5361   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5365
 //  Request in: 5365   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5367
 //  Request in: 5367   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5371
 //  Request in: 5371   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 5375
 //  Request in: 5375   CONTROL response data: 82
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 5379
 //  Request in: 5379   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5383
 //  Request in: 5383   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5385
 //  Request in: 5385   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5389
 //  Request in: 5389   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5391
 //  Request in: 5391   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5395
 //  Request in: 5395   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5397
 //  Request in: 5397   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5401
 //  Request in: 5401   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5405
 //  Request in: 5405   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5407
 //  Request in: 5407   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5411
 //  Request in: 5411   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5415
 //  Request in: 5415   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5417
 //  Request in: 5417   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5421
 //  Request in: 5421   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5425
 //  Request in: 5425   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5427
 //  Request in: 5427   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5431
 //  Request in: 5431   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5435
 //  Request in: 5435   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5437
 //  Request in: 5437   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5441
 //  Request in: 5441   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5445
 //  Request in: 5445   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5447
 //  Request in: 5447   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5451
 //  Request in: 5451   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5455
 //  Request in: 5455   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5457
 //  Request in: 5457   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 5461
 //  Request in: 5461   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5465
 //  Request in: 5465   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5469
 //  Request in: 5469   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5473
 //  Request in: 5473   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5477
 //  Request in: 5477   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 5481
 //  Request in: 5481   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 5485
 //  Request in: 5485   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5489
 //  Request in: 5489   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5491
 //  Request in: 5491   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5495
 //  Request in: 5495   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5499
 //  Request in: 5499   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5501
 //  Request in: 5501   CONTROL response data: 74
     c = ctrl_rx(0x0001); // 5503
 //  Request in: 5503   CONTROL response data: 03
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5507
 //  Request in: 5507   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5511
 //  Request in: 5511   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5513
 //  Request in: 5513   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5517
 //  Request in: 5517   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5521
 //  Request in: 5521   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5523
 //  Request in: 5523   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5527
 //  Request in: 5527   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5531
 //  Request in: 5531   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5533
 //  Request in: 5533   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5537
 //  Request in: 5537   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5541
 //  Request in: 5541   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5543
 //  Request in: 5543   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5547
 //  Request in: 5547   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5551
 //  Request in: 5551   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5553
 //  Request in: 5553   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5557
 //  Request in: 5557   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5561
 //  Request in: 5561   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5563
 //  Request in: 5563   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 5567
 //  Request in: 5567   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5571
 //  Request in: 5571   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5575
 //  Request in: 5575   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5579
 //  Request in: 5579   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5583
 //  Request in: 5583   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 5587
 //  Request in: 5587   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 5591
 //  Request in: 5591   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5595
 //  Request in: 5595   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5597
 //  Request in: 5597   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5601
 //  Request in: 5601   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5605
 //  Request in: 5605   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5607
 //  Request in: 5607   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5611
 //  Request in: 5611   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5615
 //  Request in: 5615   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5617
 //  Request in: 5617   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5621
 //  Request in: 5621   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5625
 //  Request in: 5625   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5627
 //  Request in: 5627   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5631
 //  Request in: 5631   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5633
 //  Request in: 5633   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5637
 //  Request in: 5637   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5639
 //  Request in: 5639   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5643
 //  Request in: 5643   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5647
 //  Request in: 5647   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5649
 //  Request in: 5649   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5653
 //  Request in: 5653   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5657
 //  Request in: 5657   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5659
 //  Request in: 5659   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5663
 //  Request in: 5663   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5667
 //  Request in: 5667   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5669
 //  Request in: 5669   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 5673
 //  Request in: 5673   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5677
 //  Request in: 5677   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5681
 //  Request in: 5681   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5685
 //  Request in: 5685   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5689
 //  Request in: 5689   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 5693
 //  Request in: 5693   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 5697
 //  Request in: 5697   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5701
 //  Request in: 5701   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5703
 //  Request in: 5703   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5707
 //  Request in: 5707   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5711
 //  Request in: 5711   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5713
 //  Request in: 5713   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5717
 //  Request in: 5717   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5721
 //  Request in: 5721   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5723
 //  Request in: 5723   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5727
 //  Request in: 5727   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5731
 //  Request in: 5731   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 5733
 //  Request in: 5733   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5737
 //  Request in: 5737   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5741
 //  Request in: 5741   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5743
 //  Request in: 5743   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5747
 //  Request in: 5747   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5751
 //  Request in: 5751   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5753
 //  Request in: 5753   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5757
 //  Request in: 5757   CONTROL response data: 64
     c = ctrl_rx(0x0001); // 5759
 //  Request in: 5759   CONTROL response data: 02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5763
 //  Request in: 5763   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5765
 //  Request in: 5765   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5769
 //  Request in: 5769   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5773
 //  Request in: 5773   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5775
 //  Request in: 5775   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 5779
 //  Request in: 5779   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5783
 //  Request in: 5783   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5787
 //  Request in: 5787   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5791
 //  Request in: 5791   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 5795
 //  Request in: 5795   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 5799
 //  Request in: 5799   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 5803
 //  Request in: 5803   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5807
 //  Request in: 5807   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5809
 //  Request in: 5809   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5813
 //  Request in: 5813   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5817
 //  Request in: 5817   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5819
 //  Request in: 5819   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5823
 //  Request in: 5823   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5827
 //  Request in: 5827   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5829
 //  Request in: 5829   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5833
 //  Request in: 5833   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5837
 //  Request in: 5837   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5839
 //  Request in: 5839   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5843
 //  Request in: 5843   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5847
 //  Request in: 5847   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5849
 //  Request in: 5849   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5853
 //  Request in: 5853   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5857
 //  Request in: 5857   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5859
 //  Request in: 5859   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5863
 //  Request in: 5863   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5867
 //  Request in: 5867   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5869
 //  Request in: 5869   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5873
 //  Request in: 5873   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5877
 //  Request in: 5877   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 5879
 //  Request in: 5879   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 5883
 //  Request in: 5883   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5887
 //  Request in: 5887   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5889
 //  Request in: 5889   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 5893
 //  Request in: 5893   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 5897
 //  Request in: 5897   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 5901
 //  Request in: 5901   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5905
 //  Request in: 5905   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5909
 //  Request in: 5909   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5913
 //  Request in: 5913   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0001); // 5917
 //  Request in: 5917   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5919
 //  Request in: 5919   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5921
 //  Request in: 5921   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5923
 //  Request in: 5923   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5925
 //  Request in: 5925   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5927
 //  Request in: 5927   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5929
 //  Request in: 5929   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5931
 //  Request in: 5931   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5933
 //  Request in: 5933   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5935
 //  Request in: 5935   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5937
 //  Request in: 5937   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5939
 //  Request in: 5939   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5941
 //  Request in: 5941   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5943
 //  Request in: 5943   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5945
 //  Request in: 5945   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5947
 //  Request in: 5947   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5949
 //  Request in: 5949   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5951
 //  Request in: 5951   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5953
     c = ctrl_rx(0x0001); // 5954
 //  Request in: 5954   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5956
 //  Request in: 5956   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5958
 //  Request in: 5958   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5960
 //  Request in: 5960   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5962
 //  Request in: 5962   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5964
 //  Request in: 5964   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5966
 //  Request in: 5966   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 5968
 //  Request in: 5968   CONTROL response data: 03
     c = ctrl_rx(0x0003); // 5970
 //  Request in: 5970   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5974
 //  Request in: 5974   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 5978
 //  Request in: 5978   CONTROL response data: 74
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 5982
 //  Request in: 5982   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 5986
 //  Request in: 5986   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 5990
 //  Request in: 5990   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 5994
 //  Request in: 5994   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 5998
 //  Request in: 5998   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 6002
 //  Request in: 6002   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6006
 //  Request in: 6006   CONTROL response data: 74
     c = ctrl_rx(0x0001); // 6008
 //  Request in: 6008   CONTROL response data: 03
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6012
 //  Request in: 6012   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 6016
 //  Request in: 6016   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6020
 //  Request in: 6020   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6024
 //  Request in: 6024   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6028
 //  Request in: 6028   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6032
 //  Request in: 6032   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6036
 //  Request in: 6036   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6040
 //  Request in: 6040   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6044
 //  Request in: 6044   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6048
 //  Request in: 6048   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6052
 //  Request in: 6052   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6056
 //  Request in: 6056   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6060
 //  Request in: 6060   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6064
 //  Request in: 6064   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6068
 //  Request in: 6068   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6072
 //  Request in: 6072   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6076
 //  Request in: 6076   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6080
 //  Request in: 6080   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6084
 //  Request in: 6084   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 6088
 //  Request in: 6088   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6092
 //  Request in: 6092   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 6096
 //  Request in: 6096   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 6100
 //  Request in: 6100   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 6104
 //  Request in: 6104   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6108
 //  Request in: 6108   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6110
 //  Request in: 6110   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6114
 //  Request in: 6114   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 6118
 //  Request in: 6118   CONTROL response data: 82
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 6122
 //  Request in: 6122   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6126
 //  Request in: 6126   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6128
 //  Request in: 6128   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6130
 //  Request in: 6130   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6134
 //  Request in: 6134   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6138
 //  Request in: 6138   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6140
 //  Request in: 6140   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6144
 //  Request in: 6144   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6148
 //  Request in: 6148   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6150
 //  Request in: 6150   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6154
 //  Request in: 6154   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6158
 //  Request in: 6158   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6160
 //  Request in: 6160   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6164
 //  Request in: 6164   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6168
 //  Request in: 6168   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6170
 //  Request in: 6170   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6174
 //  Request in: 6174   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6178
 //  Request in: 6178   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6180
 //  Request in: 6180   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6184
 //  Request in: 6184   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6188
 //  Request in: 6188   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6190
 //  Request in: 6190   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6194
 //  Request in: 6194   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6198
 //  Request in: 6198   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6200
 //  Request in: 6200   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 6204
 //  Request in: 6204   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 6208
 //  Request in: 6208   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6212
 //  Request in: 6212   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6216
 //  Request in: 6216   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6220
 //  Request in: 6220   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 6224
 //  Request in: 6224   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 6228
 //  Request in: 6228   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6232
 //  Request in: 6232   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6234
 //  Request in: 6234   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6238
 //  Request in: 6238   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6242
 //  Request in: 6242   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6244
 //  Request in: 6244   CONTROL response data: 74
     c = ctrl_rx(0x0001); // 6246
 //  Request in: 6246   CONTROL response data: 03
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6250
 //  Request in: 6250   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6254
 //  Request in: 6254   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6256
 //  Request in: 6256   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6260
 //  Request in: 6260   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6264
 //  Request in: 6264   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6266
 //  Request in: 6266   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6270
 //  Request in: 6270   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6274
 //  Request in: 6274   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6276
 //  Request in: 6276   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6280
 //  Request in: 6280   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6284
 //  Request in: 6284   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6286
 //  Request in: 6286   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6290
 //  Request in: 6290   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6294
 //  Request in: 6294   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6296
 //  Request in: 6296   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6300
 //  Request in: 6300   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6304
 //  Request in: 6304   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6306
 //  Request in: 6306   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 6310
 //  Request in: 6310   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 6314
 //  Request in: 6314   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6318
 //  Request in: 6318   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6322
 //  Request in: 6322   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6326
 //  Request in: 6326   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 6330
 //  Request in: 6330   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 6334
 //  Request in: 6334   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6338
 //  Request in: 6338   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6340
 //  Request in: 6340   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6344
 //  Request in: 6344   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6348
 //  Request in: 6348   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6350
 //  Request in: 6350   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6354
 //  Request in: 6354   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6358
 //  Request in: 6358   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6360
 //  Request in: 6360   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6364
 //  Request in: 6364   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6366
 //  Request in: 6366   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6370
 //  Request in: 6370   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6372
 //  Request in: 6372   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6376
 //  Request in: 6376   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6380
 //  Request in: 6380   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6382
 //  Request in: 6382   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6386
 //  Request in: 6386   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6390
 //  Request in: 6390   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6392
 //  Request in: 6392   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6396
 //  Request in: 6396   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6400
 //  Request in: 6400   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6402
 //  Request in: 6402   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6406
 //  Request in: 6406   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6410
 //  Request in: 6410   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6412
 //  Request in: 6412   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 6416
 //  Request in: 6416   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 6420
 //  Request in: 6420   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6424
 //  Request in: 6424   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6428
 //  Request in: 6428   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6432
 //  Request in: 6432   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 6436
 //  Request in: 6436   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 6440
 //  Request in: 6440   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6444
 //  Request in: 6444   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6446
 //  Request in: 6446   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6450
 //  Request in: 6450   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6454
 //  Request in: 6454   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6456
 //  Request in: 6456   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6460
 //  Request in: 6460   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6464
 //  Request in: 6464   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6466
 //  Request in: 6466   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6470
 //  Request in: 6470   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6474
 //  Request in: 6474   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6476
 //  Request in: 6476   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6480
 //  Request in: 6480   CONTROL response data: 64
     c = ctrl_rx(0x0001); // 6482
 //  Request in: 6482   CONTROL response data: 02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6486
 //  Request in: 6486   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6488
 //  Request in: 6488   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6492
 //  Request in: 6492   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6496
 //  Request in: 6496   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6498
 //  Request in: 6498   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6502
 //  Request in: 6502   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6506
 //  Request in: 6506   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6508
 //  Request in: 6508   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6512
 //  Request in: 6512   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6516
 //  Request in: 6516   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6518
 //  Request in: 6518   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 6522
 //  Request in: 6522   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 6526
 //  Request in: 6526   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6530
 //  Request in: 6530   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6534
 //  Request in: 6534   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6538
 //  Request in: 6538   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 6542
 //  Request in: 6542   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 6546
 //  Request in: 6546   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6550
 //  Request in: 6550   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6552
 //  Request in: 6552   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6556
 //  Request in: 6556   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6560
 //  Request in: 6560   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6562
 //  Request in: 6562   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6566
 //  Request in: 6566   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6570
 //  Request in: 6570   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6572
 //  Request in: 6572   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6576
 //  Request in: 6576   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6580
 //  Request in: 6580   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6582
 //  Request in: 6582   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6586
 //  Request in: 6586   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6590
 //  Request in: 6590   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6592
 //  Request in: 6592   CONTROL response data: 74
     c = ctrl_rx(0x0001); // 6594
 //  Request in: 6594   CONTROL response data: 02
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6598
 //  Request in: 6598   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6602
 //  Request in: 6602   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6604
 //  Request in: 6604   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6608
 //  Request in: 6608   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6612
 //  Request in: 6612   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6614
 //  Request in: 6614   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6618
 //  Request in: 6618   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6622
 //  Request in: 6622   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6624
 //  Request in: 6624   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 6628
 //  Request in: 6628   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 6632
 //  Request in: 6632   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 6636
 //  Request in: 6636   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6640
 //  Request in: 6640   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 6644
 //  Request in: 6644   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 6648
 //  Request in: 6648   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6652
 //  Request in: 6652   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6656
 //  Request in: 6656   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0001); // 6660
 //  Request in: 6660   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6662
 //  Request in: 6662   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6664
 //  Request in: 6664   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6666
 //  Request in: 6666   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6668
 //  Request in: 6668   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6670
 //  Request in: 6670   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6672
 //  Request in: 6672   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6674
 //  Request in: 6674   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6676
 //  Request in: 6676   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6678
 //  Request in: 6678   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6680
 //  Request in: 6680   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6682
 //  Request in: 6682   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6684
 //  Request in: 6684   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6686
 //  Request in: 6686   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6688
 //  Request in: 6688   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6690
 //  Request in: 6690   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6692
 //  Request in: 6692   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6694
 //  Request in: 6694   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6696
 //  Request in: 6696   CONTROL response data: 03
     c = ctrl_rx(0x0003); // 6698
 //  Request in: 6698   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 6702
 //  Request in: 6702   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 6706
 //  Request in: 6706   CONTROL response data: 74
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6710
 //  Request in: 6710   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6714
 //  Request in: 6714   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6718
 //  Request in: 6718   CONTROL response data: 64
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 6722
 //  Request in: 6722   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 6726
 //  Request in: 6726   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 6730
 //  Request in: 6730   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6734
 //  Request in: 6734   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6738
 //  Request in: 6738   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 6742
 //  Request in: 6742   CONTROL response data: 64
     c = ctrl_rx(0x0001); // 6744
 //  Request in: 6744   CONTROL response data: 03
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6748
 //  Request in: 6748   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6752
 //  Request in: 6752   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6756
 //  Request in: 6756   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6760
 //  Request in: 6760   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6764
 //  Request in: 6764   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6768
 //  Request in: 6768   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6772
 //  Request in: 6772   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6776
 //  Request in: 6776   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6780
 //  Request in: 6780   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6784
 //  Request in: 6784   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6788
 //  Request in: 6788   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6792
 //  Request in: 6792   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6796
 //  Request in: 6796   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6800
 //  Request in: 6800   CONTROL response data: 02
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6804
 //  Request in: 6804   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6808
 //  Request in: 6808   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6812
 //  Request in: 6812   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 6816
 //  Request in: 6816   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6820
 //  Request in: 6820   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 6824
 //  Request in: 6824   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0001); // 6828
 //  Request in: 6828   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 6832
 //  Request in: 6832   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6836
 //  Request in: 6836   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6838
 //  Request in: 6838   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6842
 //  Request in: 6842   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 6846
 //  Request in: 6846   CONTROL response data: 82
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 6850
 //  Request in: 6850   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6854
 //  Request in: 6854   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 6856
 //  Request in: 6856   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6858
 //  Request in: 6858   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6862
 //  Request in: 6862   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6866
 //  Request in: 6866   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6868
 //  Request in: 6868   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6872
 //  Request in: 6872   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6876
 //  Request in: 6876   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6878
 //  Request in: 6878   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6882
 //  Request in: 6882   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6886
 //  Request in: 6886   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6888
 //  Request in: 6888   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6892
 //  Request in: 6892   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6896
 //  Request in: 6896   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6898
 //  Request in: 6898   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6902
 //  Request in: 6902   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6906
 //  Request in: 6906   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6908
 //  Request in: 6908   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6912
 //  Request in: 6912   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6916
 //  Request in: 6916   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6918
 //  Request in: 6918   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6922
 //  Request in: 6922   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6926
 //  Request in: 6926   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6928
 //  Request in: 6928   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 6932
 //  Request in: 6932   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 6936
 //  Request in: 6936   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 6940
 //  Request in: 6940   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 6944
 //  Request in: 6944   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 6948
 //  Request in: 6948   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 6952
 //  Request in: 6952   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 6956
 //  Request in: 6956   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6960
 //  Request in: 6960   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6962
 //  Request in: 6962   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6966
 //  Request in: 6966   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6970
 //  Request in: 6970   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6972
 //  Request in: 6972   CONTROL response data: 74
     c = ctrl_rx(0x0001); // 6974
 //  Request in: 6974   CONTROL response data: 03
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6978
 //  Request in: 6978   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6982
 //  Request in: 6982   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 6984
 //  Request in: 6984   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6988
 //  Request in: 6988   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 6992
 //  Request in: 6992   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 6994
 //  Request in: 6994   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 6998
 //  Request in: 6998   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7002
 //  Request in: 7002   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 7004
 //  Request in: 7004   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7008
 //  Request in: 7008   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7012
 //  Request in: 7012   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7014
 //  Request in: 7014   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7018
 //  Request in: 7018   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7022
 //  Request in: 7022   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 7024
 //  Request in: 7024   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7028
 //  Request in: 7028   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7032
 //  Request in: 7032   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7034
 //  Request in: 7034   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 7038
 //  Request in: 7038   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 7042
 //  Request in: 7042   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 7046
 //  Request in: 7046   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 7050
 //  Request in: 7050   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 7054
 //  Request in: 7054   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 7058
 //  Request in: 7058   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 7062
 //  Request in: 7062   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7066
 //  Request in: 7066   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 7068
 //  Request in: 7068   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7072
 //  Request in: 7072   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7076
 //  Request in: 7076   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7078
 //  Request in: 7078   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7082
 //  Request in: 7082   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7086
 //  Request in: 7086   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 7088
 //  Request in: 7088   CONTROL response data: 74
     c = ctrl_rx(0x0001); // 7090
 //  Request in: 7090   CONTROL response data: 03
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7094
 //  Request in: 7094   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7098
 //  Request in: 7098   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 7100
 //  Request in: 7100   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7104
 //  Request in: 7104   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7108
 //  Request in: 7108   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 7110
 //  Request in: 7110   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7114
 //  Request in: 7114   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7118
 //  Request in: 7118   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7120
 //  Request in: 7120   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7124
 //  Request in: 7124   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7128
 //  Request in: 7128   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 7130
 //  Request in: 7130   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7134
 //  Request in: 7134   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7138
 //  Request in: 7138   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7140
 //  Request in: 7140   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 7144
 //  Request in: 7144   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 7148
 //  Request in: 7148   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 7152
 //  Request in: 7152   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 7156
 //  Request in: 7156   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 7160
 //  Request in: 7160   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 7164
 //  Request in: 7164   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 7168
 //  Request in: 7168   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7172
 //  Request in: 7172   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 7174
 //  Request in: 7174   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7178
 //  Request in: 7178   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7182
 //  Request in: 7182   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 7184
 //  Request in: 7184   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7188
 //  Request in: 7188   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7192
 //  Request in: 7192   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 7194
 //  Request in: 7194   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7198
 //  Request in: 7198   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7202
 //  Request in: 7202   CONTROL response data: 03
     c = ctrl_rx(0x0000); // 7204
 //  Request in: 7204   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 7208
 //  Request in: 7208   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7210
 //  Request in: 7210   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7214
 //  Request in: 7214   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7216
 //  Request in: 7216   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7220
 //  Request in: 7220   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7224
 //  Request in: 7224   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7226
 //  Request in: 7226   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7230
 //  Request in: 7230   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7234
 //  Request in: 7234   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7236
 //  Request in: 7236   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7240
 //  Request in: 7240   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7244
 //  Request in: 7244   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7246
 //  Request in: 7246   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 7250
 //  Request in: 7250   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 7254
 //  Request in: 7254   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 7258
 //  Request in: 7258   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 7262
 //  Request in: 7262   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0001); // 7266
 //  Request in: 7266   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0003); // 7270
 //  Request in: 7270   CONTROL response data: 83
     ctrl_tx(0x0003,0x0082);
     c = ctrl_rx(0x0000); // 7274
 //  Request in: 7274   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7278
 //  Request in: 7278   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7280
 //  Request in: 7280   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7284
 //  Request in: 7284   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7288
 //  Request in: 7288   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7290
 //  Request in: 7290   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7294
 //  Request in: 7294   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7298
 //  Request in: 7298   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7300
 //  Request in: 7300   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7304
 //  Request in: 7304   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7308
 //  Request in: 7308   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7310
 //  Request in: 7310   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7314
 //  Request in: 7314   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7318
 //  Request in: 7318   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7320
 //  Request in: 7320   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7324
 //  Request in: 7324   CONTROL response data: 64
     c = ctrl_rx(0x0001); // 7326
 //  Request in: 7326   CONTROL response data: 02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7330
 //  Request in: 7330   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7332
 //  Request in: 7332   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7336
 //  Request in: 7336   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7340
 //  Request in: 7340   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7342
 //  Request in: 7342   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0000); // 7346
 //  Request in: 7346   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7350
 //  Request in: 7350   CONTROL response data: 02
     c = ctrl_rx(0x0000); // 7352
 //  Request in: 7352   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 7356
 //  Request in: 7356   CONTROL response data: 82
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 7360
 //  Request in: 7360   CONTROL response data: 03
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0000); // 7364
 //  Request in: 7364   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0000); // 7368
 //  Request in: 7368   CONTROL response data: 74
     ctrl_tx(0x0000,0x0064);
     c = ctrl_rx(0x0003); // 7372
 //  Request in: 7372   CONTROL response data: 83
     ctrl_tx(0x0003,0x0083);
     c = ctrl_rx(0x0001); // 7376
 //  Request in: 7376   CONTROL response data: 03
     ctrl_tx(0x0001,0x0002);
     c = ctrl_rx(0x0000); // 7380
 //  Request in: 7380   CONTROL response data: 64
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // 7384
 //  Request in: 7384   CONTROL response data: 02
     ctrl_tx(0x0001,0x0003);
     c = ctrl_rx(0x0001); // 7388
 //  Request in: 7388   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 7390
 //  Request in: 7390   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 7392
 //  Request in: 7392   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 7394
 //  Request in: 7394   CONTROL response data: 03
     c = ctrl_rx(0x0001); // 7396
 //  Request in: 7396   CONTROL response data: 03
