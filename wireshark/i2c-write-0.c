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

