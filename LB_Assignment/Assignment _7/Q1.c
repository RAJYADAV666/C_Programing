#include<stdio.h>
//////////////////////////////
//       Function Name: Display
//       Description: To find Number Small Midium or large
//       Input Argument: Integer:
//       output        : Integer
//       Author:   Raj Kishor Yadav 
//       Date: 3/10/2024
/////////////////////////


 void Display(int iNo)
{
    if(iNo<=50)
    {
        printf("Small");

    }
    else if((iNo>50) && (iNo<100)) 
    {
        printf("Medium");
    }
    else
    {
        printf("Large ");
    }
    



}
int main()
{

    int iValue=0;

    printf("Enter the Numer:\n");
    scanf("%d",&iValue);

    Display(iValue);




    return 0;
}