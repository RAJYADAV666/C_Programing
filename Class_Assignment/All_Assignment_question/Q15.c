#include<stdio.h>

int Kilometer(int iValue)
{
    int iRes=0;
    int iKm=1000;

    // 1 Kilometer=1000 m

    iRes=(iValue)*iKm;

    return iRes;
}

int main()
{

    int iNo=0;
    int iAns=0;

    printf("Enter the Distance in the Kilometer :\n");
    scanf("%d",&iNo);


    iAns=Kilometer(iNo);

    printf("Distance in Meter is %d",iAns);



}
