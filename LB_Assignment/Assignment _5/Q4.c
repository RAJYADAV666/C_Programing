#include<stdio.h>
///////////////////////////////
//       Function Name: Multiply
//       Description: Calculate the Multiplication 
//       Input Argument: Integer:
//       output        : Integer
//       Author:   Raj Kishor Yadav 
//       Date: 3/10/2024
/////////////////////////

int Multiply(int iNo1, int iNo2,int iNo3)
{
        int iAns=0;
        int iMult=0;

            iMult=(iNo1)*(iNo2);

            iAns=iMult*iNo3;

            return iAns;

}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;



    printf(" Please Enter three value:\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);


    iRet=Multiply(iValue1,iValue2,iValue3);

    printf(" The multiplication is %d",iRet);

    return 0;
}