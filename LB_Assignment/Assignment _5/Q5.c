#include<stdio.h>

///////////////////////////////
//       Function Name: Percentage
//       Description: To calculate the percentage 
//       Input Argument: Integer:
//       output        : float
//       Author:   Raj Kishor Yadav 
//       Date: 3/10/2024
/////////////////////////

float Percentage(int iNo1,int iNo2)
{
        float fAns=0.0;

        fAns=((float)iNo1/(float)iNo2)*100;

        return fAns;






}

int main()
{

    int iValue1=0;
    int iValue2=0;
    float fRet=0.0;

    printf(" Please enter the total Marks:\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks:\n");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);

    printf(" the total Percentage is %f",fRet);





    return 0;
}