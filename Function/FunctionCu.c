#include<stdio.h>
#include<conio.h>

int Cube(int iValue)
{
    int iRes=0;

    iRes=iValue*iValue*iValue;
    return iRes;

}
int main()
{
    int No=0;
    int iAns=0;

    printf("Enter the Number:\n");
    scanf("%d",&No);

    iAns=Cube(No);

    printf("The Cube is %d",iAns);

    return 0;
}