#include<stdio.h>
#include<conio.h>
int main()
{
        int no1=0;
        int no2=0;

        up:

            printf(" enter a number 1:");
            scanf("%d",&no1);

            printf(" enter a number 2:");
            scanf("%d",&no2);

            if(no1==no2)
            {
                printf(" given number are same enter a differnet numbers \n");
                goto up;

            }
            (no1>no2) ? printf("%d is max \n",no1) : printf("%d is max",no2);

            printf("thanks");
            return 0;



    return 0;
}