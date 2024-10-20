#include<stdio.h>
#include<stdbool.h>
bool ChkDiv(int iValue)
{
    if((iValue %7)==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{

    int iNo1=0;
    bool bRet=false;

    printf("Enter a Number:\n");
    scanf("%d",&iNo1);

    bRet=ChkDiv(iNo1);

    if(bRet==true)
    {
        printf("The Number is Divisible 7:\n");
    }
    else
    {
        printf(" The number is Not Divisble by 7:\n");
    }


    return 0;
}