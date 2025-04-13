//User la vicharun Delete file 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){

    char FileName[30];
    int fd=0;

    printf("Enert the file that you want to delete in current directory \n",FileName);
    scanf("%s",FileName);

    unlink(FileName);

    return 0;
}