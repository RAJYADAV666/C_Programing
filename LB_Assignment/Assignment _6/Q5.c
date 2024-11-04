#include<stdio.h>

///////////////////////////////
//       Function Name: Display
//       Description: To print the First five multiply Number
//       Input Argument: Integer:
//       output        : Integer
//       Author:   Raj Kishor Yadav 
//       Date: 3/10/2024
/////////////////////////
void Display(int iNo)
{
    int iCnt=0;
    int iTemp=iNo;

    for(iCnt=1;iCnt<=5;iCnt++)
    {
            printf("%d\t",iTemp*iCnt);

    }


}

int main()
{
    int iValue=0.;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}