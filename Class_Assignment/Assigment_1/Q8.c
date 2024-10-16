#include<stdio.h>

 float CalculateArea(float fradius)
{
        double dAns=0.0;
        float PI=3.14;

        dAns=PI*fradius*fradius;

        return dAns;
}

int main()
{
    float fValue=0.0;

    double dRet=0.0;


printf(" Enter the radius of Circle:\n");
scanf("%f",&fValue);

dRet=CalculateArea(fValue);

printf("The Area of Circle is %f",dRet);

return 0;

}