#include<stdio.h>
#include<conio.h>
int main()
{

    int no1=0;
    int no2=0;

    printf(" enter a first number \n");
    scanf("%d",&no1);

    printf(" enter a second number\n");
    scanf("%d",&no2);

    if(no1>no2)
    {
        printf(" number 1 %d is maximum",no1);
    }
    else
    {
        printf("number 2 %d is maximum",no2);

    }
    return 0;
}