#include<stdio.h>
/////////////////////////////////////
//    
//     Function Name:SquareMeter
//     Description:To convert Squarefeet into SquareMeter
//     Input Argument: Integer 
//     Output: double
//     Author:Raj kishor Yadav
//     Date:12/07/2024
//
//  //////////////////////////////


double SqureMeter(int iNo)
{
        double dSquareMeter=0.0929; // fix
        double dAns=0.0;

        dAns=(iNo*dSquareMeter);


        return dAns;





}
int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter Area in Squre\n");
    scanf("%d",&iValue);

    dRet= SqureMeter(iValue);  

    printf(" The Area in Squre meter is %f",dRet);

    return 0;
}