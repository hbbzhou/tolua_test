

config_linux.py
#if
CCFLAGS = ['-Iinclude', '-O2', '-ansi', '-Wall']
prefix = '/usr/local'
IBS = ['lua','dl', 'm']
#end

拷贝
#if
将lua头文件拷贝到 ./inclue
#end

命令
#if
yum install scons
#end

命令
#if
scons all
scons install
#end


