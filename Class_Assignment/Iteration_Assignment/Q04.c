#include<stdio.h>
int Factorial(int iValue)
{

    int i=0;
    int Fact=1;

    for(i=1;i<=iValue;i++)
    {

        Fact=Fact*i;

    }
    return Fact;

}
int main()
{
    int No=0;
    int iAns=0;

    printf("Enter the Number :");
    scanf("%d",&No);

    iAns=Factorial(No);

    printf("The Given Number Factorial is %d\n",iAns);

    return 0;
}
