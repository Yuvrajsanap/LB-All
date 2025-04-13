
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int main(){

    char FileName[30];
    char Arr[]={'\0'};
    

    int fd=0, iRet=0;

    printf("Enter the name of file that you want to open from current directory \n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file %d\n",FileName);
    }
    else
    {
        printf("%s gets open succesfully with file description %d\n",FileName,fd);

        iRet=read(fd,Arr,10);

        printf("%d bytes gets written into the file \n",iRet);
        
        printf("Data from file is %s\n:",Arr);

        iRet=read(fd,Arr,12);

        printf("%d byte gets succesfully wiriten into file\n",iRet);

        printf("Data from file %s\n:",Arr);

        close(fd);
    }

    return 0;
}