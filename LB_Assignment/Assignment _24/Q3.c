#include<stdio.h>
#include<stdbool.h>
bool ChkDigit(char  cValue)
{
        if(cValue>=48 && cValue<=57)
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
    char cNo=0;
    bool bRet=false;

    printf("Enter the Digit  :\n");
    scanf("%c",&cNo);

      bRet=ChkDigit(cNo);

    if(bRet==true)
    {

        printf("True:");

    }
    else
    {
        printf("False:");
    }

    return  0;
}