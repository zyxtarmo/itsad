// EXERCISE MATERIAL
// (c) Bernhards 'Lockout' Blumbergs
// 2014. v0.1
// gcc -O0 -ggdb -fno-stack-protector -o password password.c

#include <stdio.h>

int checkpassword(char* password){
        char secret[]="bunny";
        if (strcmp(password,secret)){
                badpassword();
        }
        else{
                goodpassword();
        }
}

int goodpassword(){
        printf("Password good, the secret code is 1337\n");
        return 0;
}

int badpassword(){
        printf("Wrong password, try something nicer!\n");
        return 0;
}

int main(int argc, char* argv[]){
        char password[24];
        printf("Enter password:");
        gets(password);
        checkpassword(password);
        return 0;
}
