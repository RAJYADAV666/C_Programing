#include<stdio.h>
///////////////////////////////////////
//
//      Function Name:Display
//      Description: To Display the factor in the Decrising Order
//      Input Argument:Integer;
//      output:Integer;
//      Author: Raj Kishor Yadav 
//      Date:2/10/2024
//
//
///////////////////////////////////////
void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=iNo/2; iCnt>=1;iCnt--)
    {
            if((iNo % iCnt)==0)
            {

                printf("%d\t",iCnt);
            }


    }




}

int main()
{
    int iValue=0;

    printf(" Enter the Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}