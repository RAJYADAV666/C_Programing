#include<stdio.h>
/////////////////////////////////////
//    
//     Function Name:KMtoMeter
//     Description:To Calculate the Meter
//     Input Argument: Integer 
//     Output: Integer 
//     Author:Raj kishor Yadav
//     Date:12/07/2024
//
//  //////////////////////////////

int KMtoMeter(int iNo)
{
         int iMeter=1000;
         int iAns=0;

        iAns=iNo*iMeter;

        return iAns;



}

int main()
{
        int iValue=0;
        int iRet=0;

        printf("Enter the Distance:\n");
        scanf("%d",&iValue);

        iRet=KMtoMeter(iValue);


        printf("The Meter is %d",iRet);


    return 0;
}