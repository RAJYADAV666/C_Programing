#include<stdio.h>

int OddCount(int iNo)
{
    int iDigit=0;
    int iOdd=0;

        while(iNo!=0)
        {
            iDigit=iNo % 10;
            if((iDigit % 2)==1)
            {
                iOdd++;
            }
            iNo=iNo/10;

        }


        return iOdd;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=OddCount(iValue);

    printf(" The odd count is %d",iRet);


    return 0;
}