#=======================================================================
import sys

print(" //~")
print(" //~ This code is rewritten to use i2c subroutine functions:")
print(" //~    python {} {}".format(sys.argv[0],sys.argv[1])) 
print(" //~")


inFile = sys.argv[1]
f = open(inFile, "r")
lines=f.readlines()
noPrint=0
for i in range(len(lines)):
    line=lines[i][0:-1]
    line1=""
    if i+1 in range(len(lines)):
        line1=lines[i+1][0:-1]

        
    if "ctrl_rx(0x0003)" in line and "ctrl_tx(0x0003," in  line1:
        dirSDA=line1[-4:-2]
        # print("~{}~".format(dirSDA))
        i+=1
        noPrint=1
        if dirSDA == "83" :
            cline="     gpio_dir_set(I2C_SDA);"
        else :
            cline="     gpio_dir_clear(I2C_SDA);"
        print(cline)

    elif "ctrl_rx(0x0001)" in line and  "ctrl_tx(0x0001," in  line1:
        SDA=line1[-4:-2]
        # print("~{}~".format(SDA))
        i+=1
        noPrint=1
        if SDA == "03" :
            cline="     gpio_set(I2C_SDA);"
        else :
            cline="     gpio_clear(I2C_SDA);"
        print(cline)


    elif "ctrl_rx(0x0000)" in line and  "ctrl_tx(0x0000," in  line1:
        SCL=line1[-4:-2]
        # print("~{}~".format(SCL))
        i+=1
        noPrint=1
        if SCL == "74" :
            cline="     gpio_set(I2C_SCL);"
        else :
            cline="     gpio_clear(I2C_SCL);"
        print(cline)
        
    else:
        if noPrint :
            noPrint-=1
            pass
        else :    
            print(line)






