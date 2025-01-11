#include<stdio.h>

float Area(float fvalue)
{

    int fAns=0;

    fAns=(fvalue*fvalue);

    return fAns;


}

int main()
{

    float fNo=0.0;
    float fres=0.0;

    printf("Enter the Side of Squre :\n");
    scanf("%f",&fNo);

    fres=Area(fNo);


    printf("Area is %f",fres);





}
