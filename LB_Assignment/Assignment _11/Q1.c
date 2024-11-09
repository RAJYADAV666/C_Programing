#include<stdio.h>

///////////////////////////////////
//
//      Function Name:DisplayDigit
//      Description:Display the Digit in the Reverse order
//      Input Argument:Integer
//      Output:Integer
//      Author:RAJ kishor Yadav
//      Date:13/10/2024
/////////////////////////////////



void DisplayDigit(int iNo)
{

    int iDigit=0;

        while(iNo!=0)
        {
               iDigit=iNo %10 ;
              printf("%d\n",iDigit);

                iNo=iNo/10;
                

        }

}

int main()
{
    int iValue=0;

    printf(" Enter the number:\n ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

return 0;

}