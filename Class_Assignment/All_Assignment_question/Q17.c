#include<stdio.h>
#include<conio.h>


int Squre(int iValue)
{
        int iAns=0;

        iAns=iValue*iValue;

        return iAns;

}

int main()
{
    int iNo=0;
    int iRes=0;

    printf("Enter the Nunber:\n");
    scanf("%d",&iNo);

    iRes=Squre(iNo);

    printf("The Number of Squre is %d",iRes);



}


