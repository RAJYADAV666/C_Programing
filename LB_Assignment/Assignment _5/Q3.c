#include<stdio.h>
#include<stdbool.h>

///////////////////////////////
//       Function Name: ChkEqual
//       Description: To check the the number is equal or not
//       Input Argument: Integer:
//       output        : Integer
//       Author:   Raj Kishor Yadav 
//       Date: 3/10/2024
/////////////////////////

bool ChkEqual(int iNo1,int iNo2)
{
        if(iNo1==iNo2)
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
        int iValue1=0;
        int iValue2=0;
        bool bRet=false;

        printf(" Enter the Number First:\n");
        scanf("%d",&iValue1);

         printf(" Enter the Number Second :\n");
        scanf("%d",&iValue2);

        bRet=ChkEqual(iValue1,iValue2);

        if(bRet==true)
        {
            printf(" Equal");

        }
        else
        {
            printf(" Not Equal");
        }


    return 0;
}