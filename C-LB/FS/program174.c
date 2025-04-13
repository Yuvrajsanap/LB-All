#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){

    int fd=0;

   fd==open("Demo.txt",O_RDONLY);

   if(fd == -1)
   {
    printf("Unable to open file \n");
   }
   else
   {
    printf("File is succesfully open with fd %d\n,fd");

    close(fd);
    printf("\nFile close succesfully");
   }

    return 0;
}