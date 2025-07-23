#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd =0;
    int iRet =0;
    char Arr[15];

    fd= open("Fork.txt",O_RDWR | O_APPEND);
 
    iRet = read(fd,Arr,10);

    printf("%d Byte gets read from the file \n",iRet);
    printf("Data is :%s \n",Arr);

    
    close(fd);

    return 0;

}