#include<stdio.h>

int RangeCount(int iNo)
{
    int iDigit=0;
    int iRange=0;

        while(iNo!=0)
        {
            iDigit=iNo % 10;
            if((iDigit >=3) &&(iDigit<=7))
            {
                iRange++;
            }
            iNo=iNo/10;

        }


        return iRange;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=RangeCount(iValue);

    printf(" The  count  is %d",iRet);


    return 0;
}