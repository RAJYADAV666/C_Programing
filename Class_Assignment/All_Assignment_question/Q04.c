#include<stdio.h>
int Mult(int iValue1,int iValue2)
{

    int iAns=0;

    iAns=iValue1+iValue2;

    return iAns;


}

int main()
{


int iNo1=0;
int iNo2=0;

int iRes=0;

printf("Enter the First Number:\n");
scanf("%d",&iNo1);

printf("Enter the Second Number:\n");
scanf("%d",&iNo2);

iRes=Mult(iNo1,iNo2);

printf("The Multiplication is %d and %d =%d",iNo1,iNo2,iRes);



return 0;


}