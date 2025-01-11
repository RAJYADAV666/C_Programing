#include<stdio.h>

void Swap(int iValue1,int iValue2)
{

    int Temp=0;

    Temp=iValue1;
    iValue1=iValue2;
    iValue2=Temp;

    printf("After Swapping First Number is %d\n",iValue1);
    printf("After Swapping Second Number is %d\n",iValue2);




}

int main()
{
    int iNo1=0;
    int iNo2=0;

    printf("Enter the First Number:\n");
    scanf("%d",&iNo1);

    printf("Enter the Second Number:\n");
    scanf("%d",&iNo2);

    Swap(iNo1,iNo2);

    return 0;




}
