//To write data on file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){

    int fd=0;
    int iRet=0;
    char Arr[]="Angular Web Developmenet";

    fd=open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iRet=write(fd,Arr,22);
        printf("%d byte gets succesfully written into file\n",iRet);

        close(fd);
    }
    
    return 0;
}