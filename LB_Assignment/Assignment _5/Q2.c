#include<stdio.h>
#include<stdbool.h>

///////////////////////////////
//       Function Name: ChkGreater
//       Description: To check the the number greater than 100
//       Input Argument: Integer:
//       output        : Integer
//       Author:   Raj Kishor Yadav 
//       Date: 3/10/2024
/////////////////////////
bool ChkGreater(int iNo)
{
        if(iNo>100)
        {
            return true;
        }
        else
        {
            return false;
        }



}


int main()
{

    int iValue=0;
    bool bRet=false;


    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    bRet=ChkGreater(iValue);


        if(bRet==true)
        {
            printf(" Greater");

        }
        else
        {
            printf(" Smaller");
        }
return 0;

}