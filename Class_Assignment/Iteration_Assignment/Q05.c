//Q Write the program Which Accept two number from user and Display first number in second number of times

#include<stdio.h>
void Display(int iValue1,int iValue2)
{
    int i=0;

    for(i=1;i<=iValue2;i++)
    {

        printf("%d\n",iValue1);
    }

}

int main()
{
    int No1=0;
    int No2=0;


    printf("Enter the Number to Display :\n");
    scanf("%d",&No1);

    printf("Enter the Number to print Number of Times :\n");
    scanf("%d",&No2);

    Display(No1,No2);
    return 0;
}
