#include<stdio.h>
#include<conio.h>
int main()
{
    int year=0;

        printf(" enter any year \n");
        scanf("%d",&year);

        if(year % 4==0)
        {
            printf(" this year i leapb year\n");
        }
        else
        {

            printf(" the year is not leap year \n");
        }



    return 0;
}