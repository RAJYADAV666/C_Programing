#include<stdio.h>

int OddCount(int iNo)
{
    int iDigit=0;
    int iOdd=0;
    int iEven=0;
    int iAns=0;

        while(iNo!=0)
        {
            iDigit=iNo % 10;
            if((iDigit % 2)==0)
            {
                iEven=iEven+iDigit;
            }
            else
            {
                iOdd=iOdd+iDigit;
            }

               iAns=iEven-iOdd;

            iNo=iNo/10;

        }
        return iAns;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=OddCount(iValue);

    printf(" The Differnce between Sumation of even digit And Odd Digit is %d",iRet);


    return 0;
}