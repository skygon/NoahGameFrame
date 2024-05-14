import os
import sys

cmd_template = '..\protoc.ext --cpp_out=.\ .\%s'

for f in os.listdir('.'):
    t = f.split('.')[-1]
    if t != 'proto':
        continue
    cmd =  '..\protoc.exe --cpp_out=.\ .\%s' %(f)
    print(cmd)
    os.system(cmd)