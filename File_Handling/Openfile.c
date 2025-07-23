#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd =0;

    fd = open("Fork.txt",O_RDWR);

    if(fd != -1)
    {
        printf("File is Succesfully opened With FD :%d\n",fd);
    }

    close(fd);

    return 0;

}