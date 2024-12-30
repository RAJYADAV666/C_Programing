#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0, D_sum=0,temp=0, dig=0;

    printf(" Enter a number to find it sum of factorial number\n");
    scanf("%d",&no);

    for(temp=no; temp>0; temp=temp/10)
    {
            dig=temp % 10;
            D_sum=D_sum+dig;


    }
    printf(" sum of digits of given numbers %d =%d",no,D_sum);
    




    return 0;
}