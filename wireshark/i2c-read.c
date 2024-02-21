 //~
 //~ This code is rewritten to use i2c subroutine functions:
 //~    python convert-functions-i2c.py i2c-read-1.c
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
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
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
     c = ctrl_rx(0x0001); // c:0x02
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x02
     ctrl_tx(0x0000,0x0064);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_dir_set(I2C_SDA);
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
     c = ctrl_rx(0x0001); // c:0x03
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
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0064);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
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
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SDA);
     gpio_clear(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0064);
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
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0064);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x02
     ctrl_tx(0x0000,0x0064);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
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
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0074);
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
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0064);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0000); // c:0x74
     c = ctrl_rx(0x0001); // c:0x03
     ctrl_tx(0x0000,0x0064);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x03
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SDA);
     gpio_dir_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     c = ctrl_rx(0x0000); // c:0x64
     c = ctrl_rx(0x0001); // c:0x02
     ctrl_tx(0x0000,0x0074);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_set(I2C_SCL);
     c = ctrl_rx(0x0001); // c:0x02
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_set(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_clear(I2C_SCL);
     gpio_dir_set(I2C_SDA);
     gpio_clear(I2C_SDA);
     gpio_set(I2C_SCL);
     gpio_set(I2C_SDA);
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
     c = ctrl_rx(0x0001); // c:0x03
