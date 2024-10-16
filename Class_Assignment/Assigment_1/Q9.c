#include<stdio.h>
float CalculateArea(float fValue1,float fValue2)
{
    float fArea=0.0;

    fArea=fValue1*fValue2;

    return fArea;


}
int main()
{
    float fheight=0.0;
    float fWidth=0.0;
    float fAns=0.0;

    printf("Enter the Height:\n");
    scanf("%f",&fheight);

    printf("Enter the Width:\n");
    scanf("%f",&fWidth);


       fAns= CalculateArea(fheight,fWidth);

       printf("The Area is %f",fAns);





}