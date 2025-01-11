#include<stdio.h>

float Rectangle(float Fvalue1,float Fvalue2)
{

    float fres=0.0;

    fres=Fvalue1*Fvalue2;

    return fres;


}

int main()
{
    float fWidth=0.0;
    float fheight=0.0;

    float fAns=0.0;

    printf("Enter the Width:\n");
    scanf("%f",&fWidth);

    printf("Enter the Height:\n");
    scanf("%f",&fheight);

    fAns=Rectangle(fWidth,fheight);

    printf("Area of Rectangle is %f",fAns);



    return 0;
}
