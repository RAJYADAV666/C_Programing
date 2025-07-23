#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
   unlink("Fork.txt");

   printf("File deleted Sucessfully :\n");

}