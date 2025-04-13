//User la vicharun file create kar

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){

    char FileName[30];
    int fd=0;

    printf("Enter the name of file that you want to creat\n");
    scanf("%s",FileName);

    fd=creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to create file %d\n",FileName);
    }
    else
    {
        printf("%s gets create succesfully with file Discription %d\n",FileName,fd);
        
        close(fd);
    }

    return 0;
}