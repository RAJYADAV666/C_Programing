#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit=0;
    int iMult=0;

        while(iNo!=0)
        {
            iDigit=iNo % 10;
            
            iMult=iMult*iDigit;

            iNo=iNo/10;

        }


        return iMult;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=MultDigit(iValue);

    printf(" The Multiplication is  is %d",iRet);


    return 0;
}