//To delete file

#include<stdlib.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){

    unlink("Marvellous.txt");

    return 0;
}