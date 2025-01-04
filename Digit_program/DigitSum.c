#include<stdio.h>

int DigitSum(int iValue)
{
    int iDigit=0;
    int Sum=0;

    while(iValue !=0)
    {
        iDigit=iValue % 10;

        Sum=Sum+iDigit;

        iValue=iValue/10;

    }
    return Sum;

}

int main()
{

    int iNo=0;
    int iAns=0;

    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    iAns=DigitSum(iNo);

    printf("The Addition is %d",iAns);

    return 0;
}