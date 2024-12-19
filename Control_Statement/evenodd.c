#include<stdio.h>
#include<conio.h>
int main()
{

    int no=0;

    printf(" enter a number\n");
    scanf("%d",&no);

    if(no==0)
    {

        printf(" number is neutral\n");
    }
    else if(no % 2 == 0)
    {

        printf(" number is even \n");
    }
    else
    {

        printf(" number is odd\n");
    }

    return 0;
}