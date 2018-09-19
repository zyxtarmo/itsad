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

