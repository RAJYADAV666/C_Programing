#include<stdio.h>
int Factorial(int iNo)
{
    
        int iCnt=0;
         int iAns=0;


    for(iCnt=iNo;iCnt>1;iCnt--)
    {
        iAns=iAns*iCnt;
    

    }
    return iAns;
    
}
int main()
{
        int iValue=0;
        int iRet=0;


        printf("Enter the Number:\n");
        scanf("%d",&iValue);

        iRet=Factorial(iValue);

    printf("The Facorial Number is %d",iRet);

    return 0;
}