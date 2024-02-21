#=======================================================================
import sys

inFile = sys.argv[1]
f = open(inFile, "r")
lines=f.readlines()
for i in range(len(lines)):
    line=lines[i]
    data = bytes(line, 'utf8')
    skipLine=False
    if len(line) == 1 :
        skipLine=True
    if line[0:3] == "//~" :
        skipLine=True
    if data[0] == "\n" :
        skipLine=True    
    if not skipLine :
        print(line[0:-1])


        

