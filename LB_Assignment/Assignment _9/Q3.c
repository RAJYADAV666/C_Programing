#include<stdio.h>
/////////////////////////////////////
//    
//     Function Name:FhtoCs
//     Description:To temperture in fahrenhiet is convert into Celcius
//     Input Argument: float 
//     Output: Float
//     Author:Raj kishor Yadav
//     Date:12/07/2024
//
//  //////////////////////////////

float FhtoCs(float fTemp)
{
        float fAns=0.0;

        fAns=(fTemp-32)*((float)5/9);

        return fAns;



}
int main()
{
    float fValue=0.0;
    float  fRet=0.0;

    printf(" Enter the Temperture in Fahrenheit:\n");
    scanf("%f",&fValue);

    fRet=FhtoCs(fValue);

    printf(" The Celsius is %f",fRet);

    return 0;
}