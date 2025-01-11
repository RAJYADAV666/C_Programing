#include<stdio.h>

float Circumference (float fvalue)
{

        float fres=0.0;

        fres=fValue*fValue;

        return fres;


}

int main()
{

    float fradius=0.0;
    float fAns=0.0;


    printf("Enter the Radius:\n");
    scanf("%f"&fradius)


    fAns=Circumference(fradius);
    printf("Circumfernce is %f",fAns);




}
