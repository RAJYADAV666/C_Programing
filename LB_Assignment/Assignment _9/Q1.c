#include<stdio.h>

/////////////////////////////////////
//    
//     Function Name:CircleArea:
//     Description:To Calculate the Area
//     Input Argument: Integer 
//     Output: Float
//     Author:Raj kishor Yadav
//     Date:12/07/2024
//
//  //////////////////////////////

double CircleArea(float fRadius)
{
        float PI=3.14;
        float fArea=0.0;

        fArea=PI*fRadius*fRadius;


        return fArea;

}
int main()
{

    float fValue=0;
    double dRet=0;

    printf("Enter the Radius:\n");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf(" The Area is %f",dRet);

    return 0;
}