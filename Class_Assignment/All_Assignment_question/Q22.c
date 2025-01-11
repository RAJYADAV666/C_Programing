#include<stdio.h>


void Swap(int iValue1,int iValue2,int iValue3)
{

    int Temp=0;

    Temp=iValue1;
    iValue1=iValue2;
    iValue2=iValue3;
    iValue3=Temp;

    printf("After Swapping First Number is %d\n",iValue1);
    printf("After Swapping Second Number is %d\n",iValue2);
     printf("After Swapping Second Number is %d\n",iValue3);




}

int main()
{
    int iNo1=0;
    int iNo2=0;
    int iNo3=0;

    printf("Enter the First Number:\n");
    scanf("%d",&iNo1);

    printf("Enter the Second Number:\n");
    scanf("%d",&iNo2);

    printf("Enter the Third Number:\n");
    scanf("%d",&iNo3);

    Swap(iNo1,iNo2,iNo3);

    return 0;




}

