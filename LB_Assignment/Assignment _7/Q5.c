#include<stdio.h>
/////////////////////////////
//       Function Name: RevTable
//       Description: To print the number of  table in the reverse order
//       Input Argument: Integer:
//       output        : Integer
//       Author:   Raj Kishor Yadav 
//       Date: 3/10/2024
/////////////////////////
void RevTable(int iNo)
{
        int iCnt=0;

        for(iCnt=10;iCnt>=1;iCnt--)
        {
            printf ("%d\t",iNo*iCnt);
        }



}
int main()
{
        int iValue=0;


        printf("Enter the Number:\n");
        scanf("%d",&iValue);

        RevTable(iValue);





}