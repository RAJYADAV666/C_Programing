#include<stdio.h>

/////////////////////////////////
//      Fuction Name:Count
//      Description:To count the 4 in the number
//      Input Argument:Integer:
//      Output:Integer
//      Author:Raj Kishor Yadav
//      Date:13/10/2024
/////////////////////////////
int Count(int iNo)
{
    int iDigit=0;
    int iCount=0;

    while(iNo!=0)
    {
        iDigit=iNo % 10;
        if(iDigit < 6)
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


    iRet=Count(iValue);

        printf(" The  count of less than 6 digit is  %d",iRet);

    return 0;
}