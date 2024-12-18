#include<stdio.h>
#include<conio.h>

int main()
{

    int bill=0;
    
    int B_sum=0;
    int i=0;
    int B_cnt=0;

    printf(" enter how many bills do you have");
    scanf("%d",&B_cnt);
    

    for(i=1; i<=B_cnt; i++)
    {
            printf(" Enter bill %d \n",i);
            scanf("%d",&bill);

            B_sum=B_sum+bill;

            printf("the sum of given %d bills = %d",B_cnt,B_sum);



    }
    return 0;
}