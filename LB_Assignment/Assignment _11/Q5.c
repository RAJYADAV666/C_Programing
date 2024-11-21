#include<stdio.h>

/////////////////////////////////
//      Fuction Name:Count
//      Description:To count the 2 in the number
//      Input Argument:Integer:
//      Output:Integer
//      Author:Raj Kishor Yadav
//      Date:13/10/2024
/////////////////////////////
int CountFour(int iNo)
{
    int iDigit=0;
    int iCount=0;

    while(iNo!=0)
    {
        iDigit=iNo % 10;
        if(iDigit==4)
        {
            iCount++;
        }

        iNo=iNo/10;

    }

    return iCount;



}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);


    iRet=CountFour(iValue);

        printf(" The Count of 4 is %d",iRet);

    return 0;
}