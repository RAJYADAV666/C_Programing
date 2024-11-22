#include<stdio.h>
///////////////////////////////////////
//
//      Function Name: Display
//      Description:To Display The Pattern
//      Input Argument:Integer
//      output:Integer
//      Date:22/10/2024
//      Author: Raj Kishor Yadav
///////////////////////////

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
            
        
            printf("  #\t %d\t *\t",iCnt);
        

    }



}


int main()
{

int iValue=0;

printf("Enter the Number:\n");
scanf("%d",&iValue);


Display(iValue);

    return 0;
}