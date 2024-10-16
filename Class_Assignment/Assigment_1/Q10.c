#include<stdio.h>

int CalculateMeter(float fValue)
{
        int iKm=1000;
        int iAns=0;

        iAns=1000*fValue;

        return iAns;
}

int main()
{
    float fMeter=0.0;

    int iMeter=0;


    printf("Enter the Kilometer to convert Meter:\n ");
    scanf("%f",&fMeter);

    iMeter=CalculateMeter(fMeter);


printf(" The meter is %d",iMeter);

    return 0;
}