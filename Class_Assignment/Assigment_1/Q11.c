#include<stdio.h>

 float CalculateCelsius(float fValue)
 {
        float fAns=0.0;

        fAns=((fValue-32)*5/9);

        return fAns;



 }

int main()
{
    float fTemp=0.0;
    float fRet=0.0;

    printf(" Enter the temperture in Fahrnheit :\n");
    scanf("%f",&fTemp);

    fRet=CalculateCelsius(fTemp);

    printf(" the celsius is %f",fRet);




    return 0;
}