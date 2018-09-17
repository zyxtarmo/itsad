# pre-conditions: apt-get install gcc-multilib build-essential
# NB! use this set of compiler flags for training purposes only
gcc -fno-stack-protector -z execstack -O0 -g -m32 tcpserver.c -o tcpserver
gcc -fno-stack-protector -z execstack -O0 -g -m32 password.c -o password
gcc -fno-stack-protector -z execstack -O0 -g -m32 password1.c -o password1
