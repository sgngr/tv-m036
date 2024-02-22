
#=======================================================================
import sys

print(" //~")
print(" //~ This code is rewritten to use some subroutine functions:")
print(" //~    python {} {}".format(sys.argv[0],sys.argv[1])) 
print(" //~")

inFile = sys.argv[1]
f = open(inFile, "r")
lines=f.readlines()
noPrint=0
for i in range(len(lines)):
    line=lines[i][0:-1]
    if "ctrl_tx(0x0203," in line :
        cline=line.replace("ctrl_tx(0x0203,","sbi_select_device(")
        print("\n//~ ",line)
        print(cline)
    elif "ctrl_tx(0x0204," in line :
        #
        wa=line[-8:-2]
        print("\n//~ ",line)
        i+=1
        line=lines[i][0:-1]
        print("//~ ",line)
        wd=line[-8:-2]
        i+=1
        line=lines[i][0:-1]
        wctrl=line[-8:-2]
        
        noPrint=2
        while not "CONTROL response data: 04" in line :
            print("//~ ",line)
            i+=1
            line=lines[i][0:-1]
            noPrint+=1
        print("//~ ",line)
        if wctrl == "0x0001":
            print("     sbi_write_0({},{});".format(wa,wd))
        else:
            print("     sbi_write({},{});".format(wa,wd))
        
    elif "ctrl_tx(0x0208," in line :
        ra=line[-8:-2]
        print("\n//~ ",line)
        i+=1
        line=lines[i][0:-1]
        noPrint=2
        while not "ctrl_rx(0x0209)" in line :
            print("//~ ",line)
            i+=1
            line=lines[i][0:-1]
            noPrint+=1
        
        print("//~ ",line)
        i+=1
        line=lines[i][0:-1]
        print("//~ ",line)
        rval=line[-2:]
        print("     c = sbi_read({}); // c:0x{}".format(ra,rval))    
        
    elif "ctrl_tx(0x0504," in line :
        mx=line[-8:-2]
        if "ctrl_tx(0x0500,0x008b)" in lines[i+1][0:-1]:
            getmx=True
            print("\n//~ ",line)
            print("//~ ",lines[i+1][0:-1])
            print("//~ ",lines[i+2][0:-1])
            print("//~ ",lines[i+3][0:-1])
            print("//~ ",lines[i+4][0:-1])
            print("//~ ",lines[i+5][0:-1])
            noPrint=5
        else :
            getmx=False
            volL=lines[i+1][-9:-3]
            volH=lines[i+2][-9:-3]
            print("\n//~ ",line)
            print("//~ ",lines[i+1][0:-1])
            print("//~ ",lines[i+2][0:-1])
            print("//~ ",lines[i+3][0:-1])
            noPrint=3
        if getmx:
            print("     w = ai_get_MX({});".format(mx))
        else :
            vol="0x{h}{l}".format(h=volH[-2:], l=volL[-2:])
            print("     ai_set_MX({m},{v});".format(m=mx,v=vol)) 
        
        i+=4
    else:
        if noPrint :
            noPrint-=1
            pass
        else :
            print(line)
