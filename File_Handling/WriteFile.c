#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd =0;
    int iRet =0;
    char Arr [] = "Fork Infosystem";

    fd= open("Fork.txt",O_RDWR);

    iRet = write(fd,Arr,15);

    printf("%d Byte gets Written in the file \n",iRet);

    close(fd);

    return 0;

}