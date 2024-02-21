 //~
 //~ This code is rewritten to use i2c subroutine functions:
 //~    python convert-functions-i2c.py i2c-write_1.c
 //~
     // r = libusb_set_interface_alt_setting(devh, 2, 1);
          
// = Start ======================
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = bit tx b7 ============== 1 =      
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 1 =  
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 0 =       
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 0 =       
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 0 =       
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 0 =       
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 0 =      
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement ====
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = bit tx b7 ============== 0 =      
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 0 =      
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 0 =      
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 1 =      
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 1 =      
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 1 =      
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 1 =      
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 1 =      
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement ====     
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = bit tx b7 ============== 0 = 
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 0 = 
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 0 = 
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 0 = 
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 0 =  
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement ====     
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = bit tx b7 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement ====
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = bit tx b7 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement ====
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = bit tx b7 ============== 0 =      
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement P ==
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = Stop =======================   
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_set(I2C_SDA);
// = Start ======================
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);

// = bit tx b7 ============== 0 = 
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 0 = 
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 0 =      
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement ====
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = bit tx b7 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 1 = 
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 1 = 
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 1 = 
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 1 = 
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement ====
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = bit tx b7 ============== 0 =       
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 1 =  
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 1 =  
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 0 =   
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 1 =  
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 1 =  
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement ====
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = bit tx b7 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 0 =   
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement ====
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = bit tx b7 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 0 =
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 0 = 
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 0 =       
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement ===
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = bit tx b7 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 0 =       
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b5 ============== 0 =       
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b4 ============== 0 =       
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b3 ============== 0 =       
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b2 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b1 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b0 ============== 0 =  
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement P ==
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = Stop =======================   
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_set(I2C_SDA);

