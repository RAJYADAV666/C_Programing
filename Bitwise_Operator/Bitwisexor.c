#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0;
    int no2=0;
    int res=0;

    printf(" enter a first number\n");
    scanf("%d",&no1);

    printf(" enter a second number\n");
    scanf("%d",&no2);

    res=no1  ^ no2 ;

    printf(" result is %d ^ %d =%d",no1,no2,res);

    return 0;



}