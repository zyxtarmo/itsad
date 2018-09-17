# pre-conditions: apt-get install gcc-multilib build-essential
# NB! use this set of compiler flags for training purposes only
gcc -fno-stack-protector -z execstack -O0 -g -m32 tcpserver.c -o tcpserver
