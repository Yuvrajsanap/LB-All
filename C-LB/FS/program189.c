#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

int main(){

    char FileName[30];
    char Arr[BUFFERSIZE]={'\0'};
    

    int fd=0, iRet=0;

    printf("Enter the name of file that you want to open from current directory \n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file %s\n",FileName);
    }
    else
    {
       printf("%s gets succesfully open with file description %d\n",FileName,fd);

       while((iRet = read(fd,Arr,sizeof(100))) !=0)
       {
        printf("%s",Arr);
    
       }
       
        close(fd);
    }

    return 0;
}