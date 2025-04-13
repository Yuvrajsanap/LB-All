//User la vicharun create file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(){

    char FileName[30];
    char Arr[100]={'\0'};
    int fd=0,iRet=0;

    printf("Enter the name of file that you want to open\n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to create file %d\n",FileName);
    }
    else
    {
        printf("%s gets create succesfully with file Discription %d\n",FileName,fd);

        iRet=read(fd,Arr,10);

        printf("%d bytes gets succesfully writen into the file \n",iRet);

        printf("Data from file %s\n",Arr);
        
        close(fd);
    }

    return 0;
}