# pre-conditions: apt-get install gcc-multilib build-essential
# NB! use this set of compiler flags for training purposes only
gcc -O0 -g -m32 spawn_shell.c -o spawn_shell
gcc -fno-stack-protector -z execstack -O0 -g -m32 stack2.c -o stack2
gcc -fno-stack-protector -z execstack -O0 -g -m32 tcpserver.c -o tcpserver
