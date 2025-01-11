#include<stdio.h>
#include<conio.h>

float Temp(float fValue)
{
    float fres=0.0;

    fres=(fValue-32)*(5/9);

    return fres;



}

int main()
{

    float fTemp=0.0;
    float fAns=0.0;

    printf("Enter the Temperture in Fahrenheit:\n");
    scanf("%f",&fTemp);

    fAns=Temp(fTemp);


    printf("Temperture in  Celcius is %f",fAns);



    return 0;
}
