#include<stdio.h>
//////////////////////////////
//       Function Name: Display
//       Description: To Display the Digit in the Word
//       Input Argument: Integer:
//       output        : Integer
//       Author:   Raj Kishor Yadav 
//       Date: 3/10/2024
/////////////////////////


    
void Display(int iNo)
{
      iNo=-iNo;  

    if(iNo>10)
    {
        printf(" Invalid Input\n");
    }
    
    else if(iNo==0)
    {
        printf("Zero");
    }
    else if(iNo==1)
    {
        printf("One");
    }
    else if(iNo==2)
    {
        printf("Two");
    }
    else if(iNo==3)
    {
        printf("Three");
    }
    else if(iNo==4)
    {
        printf("Four");
    }
    else if(iNo==5)
    {
        printf("Five ");
    }
    else if(iNo==6)
    {
        printf("Six");
    }
    else if(iNo==7)
    {
        printf("Seven");
    }
    else if(iNo==8)
    {
        printf("Eight");
    }
    else if(iNo==9)
    {
        printf("Nine");
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