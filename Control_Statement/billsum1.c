#include<stdio.h>
#include<conio.h>

int main()
{

    int bill=0;
    
    int B_sum=0;
    int i=0;
    

    

    for(i=1; i<=7; i++)
    {
            printf(" Enter bill %d \n",i);
            scanf("%d",&bill);

            B_sum=B_sum+bill;

            printf("the sum of given 7 bills = %d",B_sum);



    }
    return 0;
}