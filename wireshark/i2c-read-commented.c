 //~
 //~ This code is rewritten to use i2c subroutine functions:
 //~    python convert-functions-i2c.py i2c-read_1.c
 //~
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     
// = Start ======================
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);    
     
// = byte tx 1100 0001 ===== c1 =    
// = bit tx b7 ============== 1 =
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
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
     
     c = ctrl_rx(0x0001); // c:0x02
// = bit tx b0 ============== 1 =
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     
// = Receive acknowledgement P ==
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     
     
// = bit rx b7 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = Send acknowledgement =======  
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);


// = bit rx b7 ============== 0 =
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======  
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
 
// = bit rx b7 ============== 1 =     
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
   
// = Send acknowledgement =======     
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
// = bit rx b7 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======     
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     
// = bit rx b7 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
 
// = Send acknowledgement P =====       
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     

     
     
     
// = Stop =======================     
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_set(I2C_SDA);
     
     
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     
// = Start ======================
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);       
 
// = byte tx 1100 0001 ===== c1 =    
// = bit tx b7 ============== 1 =
     gpio_set(I2C_SDA)
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 1 =
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
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
// = bit tx b0 ============== 1 =
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement P ==
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     
// = bit rx b7 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     // c = ctrl_rx(0x0001); // c:0x02
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======  
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     
// = bit rx b7 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0064);
   
// = bit rx b5 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======  
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);

// = bit rx b7 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     
     c = ctrl_rx(0x0001); // c:0x03
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======    
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     
// = bit rx b7 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 0 =
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======   
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
 
// = bit rx b7 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);

// = Send acknowledgement P =====       
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     
// = Stop =======================     
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_set(I2C_SDA);
     
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // 5953
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
  
// = Start ======================     
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
  
// = byte tx 1100 0001 ===== c1 =    
// = bit tx b7 ============== 1 =
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0064);
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
// = bit tx b0 ============== 1 =
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = Receive acknowledgement P ==
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     

// = bit rx b7 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======  
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);

// = bit rx b7 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0064);
// = bit rx b5 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======   
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     
// = bit rx b7 ============== 1 =
     gpio_set(I2C_SCL);    
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======    
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
  
// = bit rx b7 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 0 =
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======     
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
 
// = bit rx b7 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x02
     ctrl_tx(0x0000,0x0064);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);

// = Send acknowledgement P =====  
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
// = Stop =======================     
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_set(I2C_SDA);
     
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
 
// = Start ======================     
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);

// = byte tx 1100 0001 ===== c1 =    
// = bit tx b7 ============== 1 =
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
// = bit tx b6 ============== 1 =
     gpio_set(I2C_SDA);
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0074);
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
// = bit tx b0 ============== 1 =
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     
// = Receive acknowledgement P ==
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     
     
// = bit rx b7 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======     
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);

// = bit rx b7 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0064);
// = bit rx b5  ============= 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======   
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);

// = bit rx b7 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0064);
     
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======   
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
 
// = bit rx b7 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 1 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
// = bit rx b3 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b2 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement =======     
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
  
// = bit rx b7 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b6 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b5 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b4 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b3 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);     
// = bit rx b2 ============== 0 =
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b1 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
// = bit rx b0 ============== 0 =
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     
// = Send acknowledgement P =====
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     
// = Stop =======================   
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_set(I2C_SDA);
// ==============================
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
