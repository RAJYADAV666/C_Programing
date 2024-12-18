#include<stdio.h>
#include<conio.h>

int main()
{

    int b1=0;
    int b2=0;
    int B_sum=0;

    printf(" enter a first bill\n");
    scanf("%d",&b1);

    printf(" enter a second bill\n");
    scanf("%d",&b2);

    B_sum=b1+b2;

    printf( " the sum of two bills %d +  %d =%d",b1,b2,B_sum);

    return 0;
}