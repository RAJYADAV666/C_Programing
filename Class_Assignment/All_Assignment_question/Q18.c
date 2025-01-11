
#include<stdio.h>
#include<conio.h>


int Cube(int iValue)
{
        int iAns=0;

        iAns=iValue*iValue*iValue;

        return iAns;

}

int main()
{
    int iNo=0;
    int iRes=0;

    printf("Enter the Nunber:\n");
    scanf("%d",&iNo);

    iRes=Cube(iNo);

    printf("The Number of Cube is %d",iRes);



}


