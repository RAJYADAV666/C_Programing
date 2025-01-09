#include<stdio.h>
float Area(float iValue)
{
    float PI=3.14;
    float fAns=0;
    
    fAns=(PI*iValue*iValue);

    return fAns;



}

int main()
{
    float fArea=0;
    float fAns=0;



    printf("Enter the Radius :\n");
    scanf("%f",&fArea);

    fAns=Area(fArea);

    printf("Calculate Area is %f",fAns);



    return 0;
}