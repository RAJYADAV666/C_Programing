#include<stdio.h>

int EvenCount(int iNo)
{
    int iDigit=0;
    int iEven=0;

        while(iNo!=0)
        {
            iDigit=iNo % 10;
            if((iDigit % 2)==0)
            {
                iEven++;
            }
            iNo=iNo/10;

        }


        return iEven;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=EvenCount(iValue);

    printf(" The Even count is %d",iRet);


    return 0;
}