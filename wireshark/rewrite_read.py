
import sys




inFile = sys.argv[1]
f = open(inFile, "r")
lines=f.readlines()


for i in range(len(lines)):
    line=lines[i][0:-1]
    if i+1 < len(lines) :
        line1=lines[i+1][0:-1]
    else :
        line1=""
        
    skipLine=False
    if "Request in" in line :
        skipLine=True

    if "Request in" in line1 :
        rcmd=line[:29]
        rval=line1[-2:]
        line="{}c:0x{}".format(rcmd,rval)

    if not skipLine:
        print(line)
