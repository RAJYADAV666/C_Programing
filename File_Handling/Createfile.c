#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd =0;

    fd = creat("Fork.txt",0777);

    if(fd !=-1)
    {
        printf("File is Succesfully created with FD : %d\n",fd);
    }

    return 0;
}