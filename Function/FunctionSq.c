#include<stdio.h>
#include<conio.h>

int Square(int iValue)
{
    int iRes=0;

    iRes=iValue*iValue;
    return iRes;

}
int main()
{
    int No=0;
    int iAns=0;

    printf("Enter the Number:\n");
    scanf("%d",&No);

    iAns=Square(No);

    printf("The Square is %d",iAns);

    return 0;
}