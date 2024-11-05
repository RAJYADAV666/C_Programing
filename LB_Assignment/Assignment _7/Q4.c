#include<stdio.h>
/////////////////////////////
//       Function Name: Table
//       Description: To print the number of  table
//       Input Argument: Integer:
//       output        : Integer
//       Author:   Raj Kishor Yadav 
//       Date: 3/10/2024
/////////////////////////
void Table(int iNo)
{
        int iCnt=0;

        for(iCnt=1;iCnt<=10;iCnt++)
        {
            printf ("%d\t",iCnt*iNo);
        }



}
int main()
{
        int iValue=0;


        printf("Enter the Number:\n");
        scanf("%d",&iValue);

        Table(iValue);





}