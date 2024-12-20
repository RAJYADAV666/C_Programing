#include<stdio.h>
#include<stdio.h>
int main()
{
    int age=0;

    printf( " enter your age \n");
    scanf("%d",&age);

    if(age>=18)
    {
        printf(" you are the eligible for vote\n");
    }
    else
    {

        printf(" your are not eligible for vote\n");
    }

}