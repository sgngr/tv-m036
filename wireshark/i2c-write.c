 //~
 //~ This code is rewritten to use i2c subroutine functions:
 //~    python convert-functions-i2c.py i2c-write-1.c
 //~
     // r = libusb_set_interface_alt_setting(devh, 2, 1);
 
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_set(I2C_SDA);
