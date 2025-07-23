#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd =0;
    int iRet =0;
    char Arr [] = "C Programing";

    fd= open("Fork.txt",O_RDWR | O_APPEND);
 
    iRet = write(fd,Arr,strlen(Arr));

    printf("%d Byte gets Written in the file \n",iRet);

    close(fd);

    return 0;

}