 //
 //  This code generated from a wireshark USB capture file:
 //     python pcap2c.py m036-1.45.0-Tv.pcap 1.45.0 | grep '! ' | cut -c2-
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
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 13
 //  Request in: 13   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 19
 //  Request in: 19   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 21
 //  Request in: 21   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 23
 //  Request in: 23   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 31
 //  Request in: 31   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 37
 //  Request in: 37   CONTROL response data: 00
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
 //  Request in: 55   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 57
 //  Request in: 57   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 59
 //  Request in: 59   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 67
 //  Request in: 67   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 73
 //  Request in: 73   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 75
 //  Request in: 75   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 77
 //  Request in: 77   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 85
 //  Request in: 85   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 91
 //  Request in: 91   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 93
 //  Request in: 93   CONTROL response data: 08
     ctrl_tx(0x0203,0x00a0);
     ctrl_tx(0x0208,0x003c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 101
 //  Request in: 101   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 103
 //  Request in: 103   CONTROL response data: 79
     ctrl_tx(0x0203,0x00a0);
     ctrl_tx(0x0208,0x003d);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 111
 //  Request in: 111   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 113
 //  Request in: 113   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 115
 //  Request in: 115   CONTROL response data: 17
     ctrl_tx(0x0203,0x00a0);
     ctrl_tx(0x0208,0x003e);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 123
 //  Request in: 123   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 125
 //  Request in: 125   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 127
 //  Request in: 127   CONTROL response data: 08
     ctrl_tx(0x0203,0x00a0);
     ctrl_tx(0x0208,0x003f);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 135
 //  Request in: 135   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 137
 //  Request in: 137   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 139
 //  Request in: 139   CONTROL response data: 07
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0001);
     ctrl_tx(0x0503,0x0001);
     ctrl_tx(0x0500,0x008c);
     c = ctrl_rx(0x0000); // 149
 //  Request in: 149   CONTROL response data: 6c
     c = ctrl_rx(0x0002); // 151
 //  Request in: 151   CONTROL response data: e8
     ctrl_tx(0x0002,0x00e8);
     ctrl_tx(0x0000,0x006c);
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
     c = ctrl_rx(0x0100); // 211
 //  Request in: 211   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 221
 //  Request in: 221   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 223
 //  Request in: 223   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 231
 //  Request in: 231   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 233
 //  Request in: 233   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 241
 //  Request in: 241   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 249
 //  Request in: 249   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 251
 //  Request in: 251   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 253
 //  Request in: 253   CONTROL response data: 33
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
     c = ctrl_rx(0x0100); // 277
 //  Request in: 277   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 281
 //  Request in: 281   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 291
 //  Request in: 291   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 299
 //  Request in: 299   CONTROL response data: 04
     ctrl_tx(0x0100,0x0033);
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
     c = ctrl_rx(0x0100); // 357
 //  Request in: 357   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 367
 //  Request in: 367   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 375
 //  Request in: 375   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 377
 //  Request in: 377   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 385
 //  Request in: 385   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 387
 //  Request in: 387   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 395
 //  Request in: 395   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 397
 //  Request in: 397   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 399
 //  Request in: 399   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0100); // 407
 //  Request in: 407   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 411
 //  Request in: 411   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 421
 //  Request in: 421   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 423
 //  Request in: 423   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 431
 //  Request in: 431   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 433
 //  Request in: 433   CONTROL response data: 04
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 449
 //  Request in: 449   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 455
 //  Request in: 455   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 457
 //  Request in: 457   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 465
 //  Request in: 465   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 471
 //  Request in: 471   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 473
 //  Request in: 473   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 475
 //  Request in: 475   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 483
 //  Request in: 483   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 489
 //  Request in: 489   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 491
 //  Request in: 491   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 493
 //  Request in: 493   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 501
 //  Request in: 501   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 507
 //  Request in: 507   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 509
 //  Request in: 509   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 511
 //  Request in: 511   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 519
 //  Request in: 519   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 521
 //  Request in: 521   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 527
 //  Request in: 527   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 529
 //  Request in: 529   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 531
 //  Request in: 531   CONTROL response data: 08
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 541
 //  Request in: 541   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 543
 //  Request in: 543   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 551
 //  Request in: 551   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 553
 //  Request in: 553   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 561
 //  Request in: 561   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x006e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 571
 //  Request in: 571   CONTROL response data: 04
     ctrl_tx(0x0204,0x00c6);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 579
 //  Request in: 579   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 581
 //  Request in: 581   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 591
 //  Request in: 591   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 593
 //  Request in: 593   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 601
 //  Request in: 601   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 603
 //  Request in: 603   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 611
 //  Request in: 611   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 613
 //  Request in: 613   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 615
 //  Request in: 615   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 623
 //  Request in: 623   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 625
 //  Request in: 625   CONTROL response data: 80
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 639
 //  Request in: 639   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 641
 //  Request in: 641   CONTROL response data: 80
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 655
 //  Request in: 655   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 657
 //  Request in: 657   CONTROL response data: 00
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 671
 //  Request in: 671   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 673
 //  Request in: 673   CONTROL response data: 00
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     c = ctrl_rx(0x0000); // 683
 //  Request in: 683   CONTROL response data: ec
     c = ctrl_rx(0x0002); // 685
 //  Request in: 685   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x00ec);
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
     c = ctrl_rx(0x0100); // 745
 //  Request in: 745   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 755
 //  Request in: 755   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 763
 //  Request in: 763   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 771
 //  Request in: 771   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 773
 //  Request in: 773   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 781
 //  Request in: 781   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 783
 //  Request in: 783   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 785
 //  Request in: 785   CONTROL response data: b3
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
     c = ctrl_rx(0x0100); // 809
 //  Request in: 809   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 813
 //  Request in: 813   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 823
 //  Request in: 823   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 831
 //  Request in: 831   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
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
     c = ctrl_rx(0x0100); // 889
 //  Request in: 889   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 899
 //  Request in: 899   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 907
 //  Request in: 907   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 915
 //  Request in: 915   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 923
 //  Request in: 923   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 925
 //  Request in: 925   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 927
 //  Request in: 927   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 935
 //  Request in: 935   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 939
 //  Request in: 939   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 949
 //  Request in: 949   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 951
 //  Request in: 951   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 959
 //  Request in: 959   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 961
 //  Request in: 961   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 977
 //  Request in: 977   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 983
 //  Request in: 983   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 985
 //  Request in: 985   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 987
 //  Request in: 987   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 995
 //  Request in: 995   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1001
 //  Request in: 1001   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1003
 //  Request in: 1003   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1005
 //  Request in: 1005   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1013
 //  Request in: 1013   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1015
 //  Request in: 1015   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1021
 //  Request in: 1021   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1023
 //  Request in: 1023   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1025
 //  Request in: 1025   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1033
 //  Request in: 1033   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1039
 //  Request in: 1039   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1041
 //  Request in: 1041   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1043
 //  Request in: 1043   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1051
 //  Request in: 1051   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1057
 //  Request in: 1057   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1059
 //  Request in: 1059   CONTROL response data: 08
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1069
 //  Request in: 1069   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1077
 //  Request in: 1077   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1085
 //  Request in: 1085   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x006e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1095
 //  Request in: 1095   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1097
 //  Request in: 1097   CONTROL response data: 04
     ctrl_tx(0x0204,0x00c6);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1105
 //  Request in: 1105   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1107
 //  Request in: 1107   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1117
 //  Request in: 1117   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1119
 //  Request in: 1119   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1127
 //  Request in: 1127   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1129
 //  Request in: 1129   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1137
 //  Request in: 1137   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1139
 //  Request in: 1139   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 1141
 //  Request in: 1141   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1149
 //  Request in: 1149   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1151
 //  Request in: 1151   CONTROL response data: 80
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1165
 //  Request in: 1165   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1167
 //  Request in: 1167   CONTROL response data: 80
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     c = ctrl_rx(0x0100); // 1177
 //  Request in: 1177   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1181
 //  Request in: 1181   CONTROL response data: ec
     ctrl_tx(0x0000,0x00ec);
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1193
 //  Request in: 1193   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1195
 //  Request in: 1195   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1203
 //  Request in: 1203   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1205
 //  Request in: 1205   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1213
 //  Request in: 1213   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 1215
 //  Request in: 1215   CONTROL response data: 88
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1229
 //  Request in: 1229   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 1231
 //  Request in: 1231   CONTROL response data: 80
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1245
 //  Request in: 1245   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 1247
 //  Request in: 1247   CONTROL response data: 88
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1261
 //  Request in: 1261   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 1263
 //  Request in: 1263   CONTROL response data: 88
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0008);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001a);
     ctrl_tx(0x0502,0x0004);
     ctrl_tx(0x0503,0x0004);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0001);
     ctrl_tx(0x0503,0x0001);
     ctrl_tx(0x0500,0x008c);
     c = ctrl_rx(0x0000); // 1289
 //  Request in: 1289   CONTROL response data: ec
     c = ctrl_rx(0x0002); // 1291
 //  Request in: 1291   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x00ec);
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
     c = ctrl_rx(0x0100); // 1351
 //  Request in: 1351   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1361
 //  Request in: 1361   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1369
 //  Request in: 1369   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1377
 //  Request in: 1377   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1379
 //  Request in: 1379   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1387
 //  Request in: 1387   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1389
 //  Request in: 1389   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 1391
 //  Request in: 1391   CONTROL response data: b3
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
     c = ctrl_rx(0x0100); // 1415
 //  Request in: 1415   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1419
 //  Request in: 1419   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1429
 //  Request in: 1429   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1437
 //  Request in: 1437   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
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
     c = ctrl_rx(0x0100); // 1495
 //  Request in: 1495   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1505
 //  Request in: 1505   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1513
 //  Request in: 1513   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1515
 //  Request in: 1515   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1523
 //  Request in: 1523   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1525
 //  Request in: 1525   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1533
 //  Request in: 1533   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 1535
 //  Request in: 1535   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 1543
 //  Request in: 1543   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1547
 //  Request in: 1547   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1557
 //  Request in: 1557   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1559
 //  Request in: 1559   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1567
 //  Request in: 1567   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1569
 //  Request in: 1569   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1585
 //  Request in: 1585   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1591
 //  Request in: 1591   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1593
 //  Request in: 1593   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1601
 //  Request in: 1601   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1607
 //  Request in: 1607   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1609
 //  Request in: 1609   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1611
 //  Request in: 1611   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1619
 //  Request in: 1619   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1621
 //  Request in: 1621   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1627
 //  Request in: 1627   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1629
 //  Request in: 1629   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1631
 //  Request in: 1631   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1639
 //  Request in: 1639   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1645
 //  Request in: 1645   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1647
 //  Request in: 1647   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1649
 //  Request in: 1649   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1657
 //  Request in: 1657   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 1663
 //  Request in: 1663   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1665
 //  Request in: 1665   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 1667
 //  Request in: 1667   CONTROL response data: 08
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1677
 //  Request in: 1677   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1685
 //  Request in: 1685   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1687
 //  Request in: 1687   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1695
 //  Request in: 1695   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1697
 //  Request in: 1697   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x006e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1707
 //  Request in: 1707   CONTROL response data: 04
     ctrl_tx(0x0204,0x00c6);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1715
 //  Request in: 1715   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1717
 //  Request in: 1717   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1727
 //  Request in: 1727   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1729
 //  Request in: 1729   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1737
 //  Request in: 1737   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1739
 //  Request in: 1739   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1747
 //  Request in: 1747   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1749
 //  Request in: 1749   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 1751
 //  Request in: 1751   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1759
 //  Request in: 1759   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1761
 //  Request in: 1761   CONTROL response data: 80
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1775
 //  Request in: 1775   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1777
 //  Request in: 1777   CONTROL response data: 80
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1791
 //  Request in: 1791   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1793
 //  Request in: 1793   CONTROL response data: 00
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 1807
 //  Request in: 1807   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 1809
 //  Request in: 1809   CONTROL response data: 00
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     c = ctrl_rx(0x0000); // 1819
 //  Request in: 1819   CONTROL response data: ec
     c = ctrl_rx(0x0002); // 1821
 //  Request in: 1821   CONTROL response data: 78
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0000,0x00ec);
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
     c = ctrl_rx(0x0100); // 1881
 //  Request in: 1881   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1891
 //  Request in: 1891   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1899
 //  Request in: 1899   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1907
 //  Request in: 1907   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1909
 //  Request in: 1909   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1917
 //  Request in: 1917   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 1919
 //  Request in: 1919   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 1921
 //  Request in: 1921   CONTROL response data: b3
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
     c = ctrl_rx(0x0100); // 1945
 //  Request in: 1945   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 1949
 //  Request in: 1949   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1959
 //  Request in: 1959   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 1967
 //  Request in: 1967   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
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
     c = ctrl_rx(0x0100); // 2025
 //  Request in: 2025   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2035
 //  Request in: 2035   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2043
 //  Request in: 2043   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2045
 //  Request in: 2045   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2053
 //  Request in: 2053   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2055
 //  Request in: 2055   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2063
 //  Request in: 2063   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 2065
 //  Request in: 2065   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 2073
 //  Request in: 2073   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2077
 //  Request in: 2077   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2087
 //  Request in: 2087   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2089
 //  Request in: 2089   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2097
 //  Request in: 2097   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2099
 //  Request in: 2099   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2115
 //  Request in: 2115   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2121
 //  Request in: 2121   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2123
 //  Request in: 2123   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2131
 //  Request in: 2131   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2137
 //  Request in: 2137   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2139
 //  Request in: 2139   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2141
 //  Request in: 2141   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2149
 //  Request in: 2149   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2155
 //  Request in: 2155   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2157
 //  Request in: 2157   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2159
 //  Request in: 2159   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2167
 //  Request in: 2167   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2173
 //  Request in: 2173   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2175
 //  Request in: 2175   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2177
 //  Request in: 2177   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2185
 //  Request in: 2185   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2191
 //  Request in: 2191   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2193
 //  Request in: 2193   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2195
 //  Request in: 2195   CONTROL response data: 08
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2205
 //  Request in: 2205   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2207
 //  Request in: 2207   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2215
 //  Request in: 2215   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2217
 //  Request in: 2217   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2225
 //  Request in: 2225   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2227
 //  Request in: 2227   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x006e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2237
 //  Request in: 2237   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2239
 //  Request in: 2239   CONTROL response data: 04
     ctrl_tx(0x0204,0x00c6);
     ctrl_tx(0x0205,0x0001);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2247
 //  Request in: 2247   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2249
 //  Request in: 2249   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2259
 //  Request in: 2259   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2261
 //  Request in: 2261   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2269
 //  Request in: 2269   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2271
 //  Request in: 2271   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2279
 //  Request in: 2279   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 2281
 //  Request in: 2281   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 2289
 //  Request in: 2289   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 2291
 //  Request in: 2291   CONTROL response data: 80
     ctrl_tx(0x0504,0x0002);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 2305
 //  Request in: 2305   CONTROL response data: 00
     c = ctrl_rx(0x0503); // 2307
 //  Request in: 2307   CONTROL response data: 80
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0000);
     ctrl_tx(0x0503,0x0000);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 2321
 //  Request in: 2321   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 2323
 //  Request in: 2323   CONTROL response data: 88
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 2337
 //  Request in: 2337   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 2339
 //  Request in: 2339   CONTROL response data: 80
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 2353
 //  Request in: 2353   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 2355
 //  Request in: 2355   CONTROL response data: 88
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 2369
 //  Request in: 2369   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 2371
 //  Request in: 2371   CONTROL response data: 88
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0008);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001a);
     ctrl_tx(0x0502,0x0004);
     ctrl_tx(0x0503,0x0004);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x001c);
     ctrl_tx(0x0502,0x0001);
     ctrl_tx(0x0503,0x0001);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x002b);
     ctrl_tx(0x0205,0x0062);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2405
 //  Request in: 2405   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x008e);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2415
 //  Request in: 2415   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x002b);
     ctrl_tx(0x0205,0x0062);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2425
 //  Request in: 2425   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x008e);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2435
 //  Request in: 2435   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2445
 //  Request in: 2445   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2447
 //  Request in: 2447   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2457
 //  Request in: 2457   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2459
 //  Request in: 2459   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2469
 //  Request in: 2469   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2471
 //  Request in: 2471   CONTROL response data: 04
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0208,0x0088);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2479
 //  Request in: 2479   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2481
 //  Request in: 2481   CONTROL response data: 7e
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2491
 //  Request in: 2491   CONTROL response data: 04
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2499
 //  Request in: 2499   CONTROL response data: 04
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2507
 //  Request in: 2507   CONTROL response data: 04
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2517
 //  Request in: 2517   CONTROL response data: 04
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2527
 //  Request in: 2527   CONTROL response data: 04
 
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
     c = ctrl_rx(0x0100); // 2585
 //  Request in: 2585   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2595
 //  Request in: 2595   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2603
 //  Request in: 2603   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2605
 //  Request in: 2605   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2613
 //  Request in: 2613   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2615
 //  Request in: 2615   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2623
 //  Request in: 2623   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 2625
 //  Request in: 2625   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0104,0x0000);
     ctrl_tx(0x0105,0x0000);
     ctrl_tx(0x0106,0x0000);
     c = ctrl_rx(0x0100); // 2639
 //  Request in: 2639   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2643
 //  Request in: 2643   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2653
 //  Request in: 2653   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2655
 //  Request in: 2655   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2663
 //  Request in: 2663   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2665
 //  Request in: 2665   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
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
     c = ctrl_rx(0x0100); // 2723
 //  Request in: 2723   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2733
 //  Request in: 2733   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2735
 //  Request in: 2735   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2743
 //  Request in: 2743   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2751
 //  Request in: 2751   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2753
 //  Request in: 2753   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2761
 //  Request in: 2761   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2763
 //  Request in: 2763   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 2765
 //  Request in: 2765   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 2773
 //  Request in: 2773   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 2777
 //  Request in: 2777   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2787
 //  Request in: 2787   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2789
 //  Request in: 2789   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2797
 //  Request in: 2797   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 2799
 //  Request in: 2799   CONTROL response data: 04
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
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2831
 //  Request in: 2831   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2837
 //  Request in: 2837   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2839
 //  Request in: 2839   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2847
 //  Request in: 2847   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2853
 //  Request in: 2853   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2855
 //  Request in: 2855   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2863
 //  Request in: 2863   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2869
 //  Request in: 2869   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2871
 //  Request in: 2871   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2879
 //  Request in: 2879   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2885
 //  Request in: 2885   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2887
 //  Request in: 2887   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 2895
 //  Request in: 2895   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2901
 //  Request in: 2901   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2903
 //  Request in: 2903   CONTROL response data: 08
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0116); // 2911
 //  Request in: 2911   CONTROL response data: 1f
     c = ctrl_rx(0x0117); // 2913
 //  Request in: 2913   CONTROL response data: 01
     ctrl_tx(0x0116,0x0000);
     ctrl_tx(0x0117,0x0000);
     c = ctrl_rx(0x0100); // 2919
 //  Request in: 2919   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0116,0x001f);
     ctrl_tx(0x0117,0x0001);
     c = ctrl_rx(0x0100); // 2927
 //  Request in: 2927   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0203,0x00a0);
     ctrl_tx(0x0208,0x003c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 2937
 //  Request in: 2937   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 2939
 //  Request in: 2939   CONTROL response data: 79
 
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
     c = ctrl_rx(0x0100); // 2999
 //  Request in: 2999   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3009
 //  Request in: 3009   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3017
 //  Request in: 3017   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3025
 //  Request in: 3025   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3033
 //  Request in: 3033   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 3035
 //  Request in: 3035   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0104,0x0000);
     ctrl_tx(0x0105,0x0000);
     ctrl_tx(0x0106,0x0000);
     c = ctrl_rx(0x0100); // 3049
 //  Request in: 3049   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 3053
 //  Request in: 3053   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3063
 //  Request in: 3063   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3071
 //  Request in: 3071   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3073
 //  Request in: 3073   CONTROL response data: 04
     ctrl_tx(0x0100,0x0033);
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
     c = ctrl_rx(0x0100); // 3131
 //  Request in: 3131   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3141
 //  Request in: 3141   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3149
 //  Request in: 3149   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3157
 //  Request in: 3157   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3165
 //  Request in: 3165   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 3167
 //  Request in: 3167   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0100); // 3175
 //  Request in: 3175   CONTROL response data: 33
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 3179
 //  Request in: 3179   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3189
 //  Request in: 3189   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3197
 //  Request in: 3197   CONTROL response data: 04
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
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3229
 //  Request in: 3229   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3235
 //  Request in: 3235   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3237
 //  Request in: 3237   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3245
 //  Request in: 3245   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3251
 //  Request in: 3251   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3253
 //  Request in: 3253   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3261
 //  Request in: 3261   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3263
 //  Request in: 3263   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3269
 //  Request in: 3269   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3271
 //  Request in: 3271   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3273
 //  Request in: 3273   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3281
 //  Request in: 3281   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3283
 //  Request in: 3283   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3289
 //  Request in: 3289   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3291
 //  Request in: 3291   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3293
 //  Request in: 3293   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3301
 //  Request in: 3301   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3307
 //  Request in: 3307   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3309
 //  Request in: 3309   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3311
 //  Request in: 3311   CONTROL response data: 08
     ctrl_tx(0x0002,0x0078);
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0116); // 3319
 //  Request in: 3319   CONTROL response data: 1f
     c = ctrl_rx(0x0117); // 3321
 //  Request in: 3321   CONTROL response data: 01
     ctrl_tx(0x0116,0x0000);
     ctrl_tx(0x0117,0x0000);
     c = ctrl_rx(0x0100); // 3327
 //  Request in: 3327   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0116,0x001f);
     ctrl_tx(0x0117,0x0001);
 
     // r = libusb_set_interface_alt_setting(devh, 2, 1);
 
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
     c = ctrl_rx(0x0100); // 3391
 //  Request in: 3391   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3401
 //  Request in: 3401   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3409
 //  Request in: 3409   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3417
 //  Request in: 3417   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3419
 //  Request in: 3419   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3427
 //  Request in: 3427   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 3429
 //  Request in: 3429   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3437
 //  Request in: 3437   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 3441
 //  Request in: 3441   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3451
 //  Request in: 3451   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3453
 //  Request in: 3453   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3461
 //  Request in: 3461   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3465
 //  Request in: 3465   CONTROL response data: b3
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
     c = ctrl_rx(0x0100); // 3547
 //  Request in: 3547   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3557
 //  Request in: 3557   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3565
 //  Request in: 3565   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3573
 //  Request in: 3573   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3581
 //  Request in: 3581   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 3583
 //  Request in: 3583   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3591
 //  Request in: 3591   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 3595
 //  Request in: 3595   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3605
 //  Request in: 3605   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3607
 //  Request in: 3607   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3615
 //  Request in: 3615   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3617
 //  Request in: 3617   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 3621
 //  Request in: 3621   CONTROL response data: b3
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
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3657
 //  Request in: 3657   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3659
 //  Request in: 3659   CONTROL response data: 04
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3669
 //  Request in: 3669   CONTROL response data: 04
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3677
 //  Request in: 3677   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3683
 //  Request in: 3683   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3685
 //  Request in: 3685   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3687
 //  Request in: 3687   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3695
 //  Request in: 3695   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3697
 //  Request in: 3697   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3703
 //  Request in: 3703   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3705
 //  Request in: 3705   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3707
 //  Request in: 3707   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3715
 //  Request in: 3715   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3717
 //  Request in: 3717   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3723
 //  Request in: 3723   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3725
 //  Request in: 3725   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3727
 //  Request in: 3727   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3735
 //  Request in: 3735   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3741
 //  Request in: 3741   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3743
 //  Request in: 3743   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3745
 //  Request in: 3745   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3753
 //  Request in: 3753   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3759
 //  Request in: 3759   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3761
 //  Request in: 3761   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3763
 //  Request in: 3763   CONTROL response data: 08
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3771
 //  Request in: 3771   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3777
 //  Request in: 3777   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3779
 //  Request in: 3779   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3781
 //  Request in: 3781   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3789
 //  Request in: 3789   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3795
 //  Request in: 3795   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3797
 //  Request in: 3797   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3799
 //  Request in: 3799   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3807
 //  Request in: 3807   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3813
 //  Request in: 3813   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3815
 //  Request in: 3815   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3817
 //  Request in: 3817   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3825
 //  Request in: 3825   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3827
 //  Request in: 3827   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3833
 //  Request in: 3833   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3835
 //  Request in: 3835   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3837
 //  Request in: 3837   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3845
 //  Request in: 3845   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3847
 //  Request in: 3847   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3853
 //  Request in: 3853   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3855
 //  Request in: 3855   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3857
 //  Request in: 3857   CONTROL response data: 08
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x002b);
     ctrl_tx(0x0205,0x0062);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3867
 //  Request in: 3867   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3869
 //  Request in: 3869   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x008e);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3879
 //  Request in: 3879   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3881
 //  Request in: 3881   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x002b);
     ctrl_tx(0x0205,0x0062);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3891
 //  Request in: 3891   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3893
 //  Request in: 3893   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x008e);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3903
 //  Request in: 3903   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3905
 //  Request in: 3905   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3915
 //  Request in: 3915   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3917
 //  Request in: 3917   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3927
 //  Request in: 3927   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3937
 //  Request in: 3937   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3939
 //  Request in: 3939   CONTROL response data: 04
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0208,0x0088);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 3947
 //  Request in: 3947   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3949
 //  Request in: 3949   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 3951
 //  Request in: 3951   CONTROL response data: fe
     c = ctrl_rx(0x0100); // 3953
 //  Request in: 3953   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 3957
 //  Request in: 3957   CONTROL response data: ec
     ctrl_tx(0x0000,0x00ec);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3967
 //  Request in: 3967   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 3969
 //  Request in: 3969   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 3977
 //  Request in: 3977   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 3985
 //  Request in: 3985   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 3987
 //  Request in: 3987   CONTROL response data: 88
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4001
 //  Request in: 4001   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4003
 //  Request in: 4003   CONTROL response data: 80
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4017
 //  Request in: 4017   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4019
 //  Request in: 4019   CONTROL response data: 88
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4033
 //  Request in: 4033   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4035
 //  Request in: 4035   CONTROL response data: 08
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
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4065
 //  Request in: 4065   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4067
 //  Request in: 4067   CONTROL response data: 88
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4081
 //  Request in: 4081   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4083
 //  Request in: 4083   CONTROL response data: 80
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4097
 //  Request in: 4097   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4099
 //  Request in: 4099   CONTROL response data: 88
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4113
 //  Request in: 4113   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4115
 //  Request in: 4115   CONTROL response data: 08
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
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4145
 //  Request in: 4145   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4147
 //  Request in: 4147   CONTROL response data: 88
     ctrl_tx(0x0504,0x0012);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4161
 //  Request in: 4161   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4163
 //  Request in: 4163   CONTROL response data: 80
     ctrl_tx(0x0504,0x000e);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0080);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4177
 //  Request in: 4177   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4179
 //  Request in: 4179   CONTROL response data: 88
     ctrl_tx(0x0504,0x0016);
     ctrl_tx(0x0502,0x0008);
     ctrl_tx(0x0503,0x0088);
     ctrl_tx(0x0500,0x008c);
     ctrl_tx(0x0504,0x0010);
     ctrl_tx(0x0500,0x008b);
     c = ctrl_rx(0x0502); // 4193
 //  Request in: 4193   CONTROL response data: 08
     c = ctrl_rx(0x0503); // 4195
 //  Request in: 4195   CONTROL response data: 08
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
     c = ctrl_rx(0x0100); // 4275
 //  Request in: 4275   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4285
 //  Request in: 4285   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4287
 //  Request in: 4287   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4295
 //  Request in: 4295   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4303
 //  Request in: 4303   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4305
 //  Request in: 4305   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4313
 //  Request in: 4313   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4315
 //  Request in: 4315   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 4317
 //  Request in: 4317   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 4325
 //  Request in: 4325   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 4329
 //  Request in: 4329   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4339
 //  Request in: 4339   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4341
 //  Request in: 4341   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4349
 //  Request in: 4349   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4351
 //  Request in: 4351   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 4355
 //  Request in: 4355   CONTROL response data: b3
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
     c = ctrl_rx(0x0100); // 4437
 //  Request in: 4437   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4447
 //  Request in: 4447   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4455
 //  Request in: 4455   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4457
 //  Request in: 4457   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4465
 //  Request in: 4465   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4467
 //  Request in: 4467   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4475
 //  Request in: 4475   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 4477
 //  Request in: 4477   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 4485
 //  Request in: 4485   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 4489
 //  Request in: 4489   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4499
 //  Request in: 4499   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4507
 //  Request in: 4507   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4509
 //  Request in: 4509   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 4513
 //  Request in: 4513   CONTROL response data: b3
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
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4549
 //  Request in: 4549   CONTROL response data: 04
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4559
 //  Request in: 4559   CONTROL response data: 04
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4567
 //  Request in: 4567   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4569
 //  Request in: 4569   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 4575
 //  Request in: 4575   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4577
 //  Request in: 4577   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 4579
 //  Request in: 4579   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4587
 //  Request in: 4587   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 4593
 //  Request in: 4593   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4595
 //  Request in: 4595   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 4597
 //  Request in: 4597   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4605
 //  Request in: 4605   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 4611
 //  Request in: 4611   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4613
 //  Request in: 4613   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 4615
 //  Request in: 4615   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4623
 //  Request in: 4623   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 4629
 //  Request in: 4629   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4631
 //  Request in: 4631   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 4633
 //  Request in: 4633   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4641
 //  Request in: 4641   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 4647
 //  Request in: 4647   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4649
 //  Request in: 4649   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 4651
 //  Request in: 4651   CONTROL response data: 08
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4659
 //  Request in: 4659   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 4665
 //  Request in: 4665   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4667
 //  Request in: 4667   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 4669
 //  Request in: 4669   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4677
 //  Request in: 4677   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 4683
 //  Request in: 4683   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4685
 //  Request in: 4685   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 4687
 //  Request in: 4687   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4695
 //  Request in: 4695   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 4701
 //  Request in: 4701   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4703
 //  Request in: 4703   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 4705
 //  Request in: 4705   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4713
 //  Request in: 4713   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 4719
 //  Request in: 4719   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4721
 //  Request in: 4721   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 4723
 //  Request in: 4723   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4731
 //  Request in: 4731   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 4737
 //  Request in: 4737   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4739
 //  Request in: 4739   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 4741
 //  Request in: 4741   CONTROL response data: 08
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x002b);
     ctrl_tx(0x0205,0x0062);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4751
 //  Request in: 4751   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x008e);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4761
 //  Request in: 4761   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4763
 //  Request in: 4763   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x002b);
     ctrl_tx(0x0205,0x0062);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4773
 //  Request in: 4773   CONTROL response data: 04
     ctrl_tx(0x0203,0x00c2);
     ctrl_tx(0x0204,0x008e);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4783
 //  Request in: 4783   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x00d6);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4793
 //  Request in: 4793   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4795
 //  Request in: 4795   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0001);
     ctrl_tx(0x0205,0x0070);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4805
 //  Request in: 4805   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4807
 //  Request in: 4807   CONTROL response data: 04
     ctrl_tx(0x0203,0x0086);
     ctrl_tx(0x0204,0x0002);
     ctrl_tx(0x0205,0x0049);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4817
 //  Request in: 4817   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4819
 //  Request in: 4819   CONTROL response data: 04
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0208,0x0088);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 4827
 //  Request in: 4827   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4829
 //  Request in: 4829   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 4831
 //  Request in: 4831   CONTROL response data: fe
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
     c = ctrl_rx(0x0100); // 4887
 //  Request in: 4887   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4897
 //  Request in: 4897   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4899
 //  Request in: 4899   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4907
 //  Request in: 4907   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4915
 //  Request in: 4915   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4917
 //  Request in: 4917   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4925
 //  Request in: 4925   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4927
 //  Request in: 4927   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 4929
 //  Request in: 4929   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 4937
 //  Request in: 4937   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 4941
 //  Request in: 4941   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4951
 //  Request in: 4951   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4953
 //  Request in: 4953   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 4961
 //  Request in: 4961   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 4963
 //  Request in: 4963   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 4967
 //  Request in: 4967   CONTROL response data: b3
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
     c = ctrl_rx(0x0100); // 5049
 //  Request in: 5049   CONTROL response data: b3
     ctrl_tx(0x0100,0x00b3);
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5059
 //  Request in: 5059   CONTROL response data: 04
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5067
 //  Request in: 5067   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5069
 //  Request in: 5069   CONTROL response data: 04
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5077
 //  Request in: 5077   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5079
 //  Request in: 5079   CONTROL response data: 04
     ctrl_tx(0x0204,0x000f);
     ctrl_tx(0x0205,0x000a);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5087
 //  Request in: 5087   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5089
 //  Request in: 5089   CONTROL response data: 04
     c = ctrl_rx(0x0100); // 5091
 //  Request in: 5091   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     ctrl_tx(0x0103,0x0000);
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 5099
 //  Request in: 5099   CONTROL response data: b3
     ctrl_tx(0x0100,0x0033);
     c = ctrl_rx(0x0000); // 5103
 //  Request in: 5103   CONTROL response data: 64
     ctrl_tx(0x0000,0x006c);
     ctrl_tx(0x0204,0x0000);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5113
 //  Request in: 5113   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5115
 //  Request in: 5115   CONTROL response data: 04
     ctrl_tx(0x0204,0x0003);
     ctrl_tx(0x0205,0x006f);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5123
 //  Request in: 5123   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5125
 //  Request in: 5125   CONTROL response data: 04
     ctrl_tx(0x0100,0x00b3);
     c = ctrl_rx(0x0100); // 5129
 //  Request in: 5129   CONTROL response data: b3
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
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x0028);
     ctrl_tx(0x0205,0x0004);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5165
 //  Request in: 5165   CONTROL response data: 04
     ctrl_tx(0x0203,0x00ba);
     ctrl_tx(0x0204,0x0030);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5175
 //  Request in: 5175   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5177
 //  Request in: 5177   CONTROL response data: 04
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5185
 //  Request in: 5185   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5187
 //  Request in: 5187   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 5193
 //  Request in: 5193   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5195
 //  Request in: 5195   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 5197
 //  Request in: 5197   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5205
 //  Request in: 5205   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 5211
 //  Request in: 5211   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5213
 //  Request in: 5213   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 5215
 //  Request in: 5215   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5223
 //  Request in: 5223   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 5229
 //  Request in: 5229   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5231
 //  Request in: 5231   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 5233
 //  Request in: 5233   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5241
 //  Request in: 5241   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 5247
 //  Request in: 5247   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5249
 //  Request in: 5249   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 5251
 //  Request in: 5251   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5259
 //  Request in: 5259   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 5265
 //  Request in: 5265   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5267
 //  Request in: 5267   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 5269
 //  Request in: 5269   CONTROL response data: 08
     ctrl_tx(0x0204,0x0009);
     ctrl_tx(0x0205,0x007e);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5277
 //  Request in: 5277   CONTROL response data: 04
     ctrl_tx(0x0208,0x0009);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 5283
 //  Request in: 5283   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5285
 //  Request in: 5285   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 5287
 //  Request in: 5287   CONTROL response data: 7e
     ctrl_tx(0x0204,0x000c);
     ctrl_tx(0x0205,0x0080);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5295
 //  Request in: 5295   CONTROL response data: 04
     ctrl_tx(0x0208,0x000c);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 5301
 //  Request in: 5301   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5303
 //  Request in: 5303   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 5305
 //  Request in: 5305   CONTROL response data: 80
     ctrl_tx(0x0204,0x000b);
     ctrl_tx(0x0205,0x0000);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5313
 //  Request in: 5313   CONTROL response data: 04
     ctrl_tx(0x0208,0x000b);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 5319
 //  Request in: 5319   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5321
 //  Request in: 5321   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 5323
 //  Request in: 5323   CONTROL response data: 00
     ctrl_tx(0x0204,0x000a);
     ctrl_tx(0x0205,0x009b);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5331
 //  Request in: 5331   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5333
 //  Request in: 5333   CONTROL response data: 04
     ctrl_tx(0x0208,0x000a);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 5339
 //  Request in: 5339   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5341
 //  Request in: 5341   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 5343
 //  Request in: 5343   CONTROL response data: 9b
     ctrl_tx(0x0204,0x0008);
     ctrl_tx(0x0205,0x0008);
     ctrl_tx(0x0200,0x0005);
     c = ctrl_rx(0x0201); // 5351
 //  Request in: 5351   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5353
 //  Request in: 5353   CONTROL response data: 04
     ctrl_tx(0x0208,0x0008);
     ctrl_tx(0x0200,0x0020);
     c = ctrl_rx(0x0201); // 5359
 //  Request in: 5359   CONTROL response data: 00
     c = ctrl_rx(0x0201); // 5361
 //  Request in: 5361   CONTROL response data: 01
     c = ctrl_rx(0x0209); // 5363
 //  Request in: 5363   CONTROL response data: 08
     c = ctrl_rx(0x0001); // 5365
 //  Request in: 5365   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5367
 //  Request in: 5367   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5369
 //  Request in: 5369   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5371
 //  Request in: 5371   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5373
 //  Request in: 5373   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5375
 //  Request in: 5375   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5377
 //  Request in: 5377   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5379
 //  Request in: 5379   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5381
 //  Request in: 5381   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5383
 //  Request in: 5383   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5385
 //  Request in: 5385   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5387
 //  Request in: 5387   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5389
 //  Request in: 5389   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5391
 //  Request in: 5391   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5393
 //  Request in: 5393   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5395
 //  Request in: 5395   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5397
 //  Request in: 5397   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5399
 //  Request in: 5399   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5401
 //  Request in: 5401   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5403
 //  Request in: 5403   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5405
 //  Request in: 5405   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5407
 //  Request in: 5407   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5409
 //  Request in: 5409   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5411
 //  Request in: 5411   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5413
 //  Request in: 5413   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5415
 //  Request in: 5415   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5417
 //  Request in: 5417   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5419
 //  Request in: 5419   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5421
 //  Request in: 5421   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5423
 //  Request in: 5423   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5425
 //  Request in: 5425   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5427
 //  Request in: 5427   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5429
 //  Request in: 5429   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5431
 //  Request in: 5431   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5433
 //  Request in: 5433   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5435
 //  Request in: 5435   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5437
 //  Request in: 5437   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5439
 //  Request in: 5439   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5441
 //  Request in: 5441   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5443
 //  Request in: 5443   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5445
 //  Request in: 5445   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5447
 //  Request in: 5447   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5449
 //  Request in: 5449   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5451
 //  Request in: 5451   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5453
 //  Request in: 5453   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5455
 //  Request in: 5455   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5457
 //  Request in: 5457   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5459
 //  Request in: 5459   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5461
 //  Request in: 5461   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5463
 //  Request in: 5463   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5465
 //  Request in: 5465   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5467
 //  Request in: 5467   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5469
 //  Request in: 5469   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5471
 //  Request in: 5471   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5473
 //  Request in: 5473   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5475
 //  Request in: 5475   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5477
 //  Request in: 5477   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5479
 //  Request in: 5479   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5481
 //  Request in: 5481   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5483
 //  Request in: 5483   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5485
 //  Request in: 5485   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5487
 //  Request in: 5487   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5489
 //  Request in: 5489   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5491
 //  Request in: 5491   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5493
 //  Request in: 5493   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5495
 //  Request in: 5495   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5497
 //  Request in: 5497   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5499
 //  Request in: 5499   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5501
 //  Request in: 5501   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5503
 //  Request in: 5503   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5505
 //  Request in: 5505   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5507
 //  Request in: 5507   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5509
 //  Request in: 5509   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5511
 //  Request in: 5511   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5513
 //  Request in: 5513   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5515
 //  Request in: 5515   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5517
 //  Request in: 5517   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5519
 //  Request in: 5519   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5521
 //  Request in: 5521   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5523
 //  Request in: 5523   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5525
 //  Request in: 5525   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5527
 //  Request in: 5527   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5529
 //  Request in: 5529   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5531
 //  Request in: 5531   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5533
 //  Request in: 5533   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5535
 //  Request in: 5535   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5537
 //  Request in: 5537   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5539
 //  Request in: 5539   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5541
 //  Request in: 5541   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5543
 //  Request in: 5543   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5545
 //  Request in: 5545   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5547
 //  Request in: 5547   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5549
 //  Request in: 5549   CONTROL response data: 02
     c = ctrl_rx(0x0001); // 5551
 //  Request in: 5551   CONTROL response data: 02
