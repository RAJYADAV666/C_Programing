#include<stdio.h>

///////////////////////////////
//       Function Name: Display
//       Description: To  print the Odd number
//       Input Argument: Integer:
//       output        : Integer
//       Author:   Raj Kishor Yadav 
//       Date: 3/10/2024
/////////////////////////
void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {

        if((iCnt %2)==1)
        {
            printf("%d\t",iCnt);

        }


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