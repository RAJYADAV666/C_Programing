#include<stdio.h>
#include<stdbool.h>
bool ChkAlpha(char cValue)
{
        if((cValue>=65 && cValue<=90)||(cValue>=97 && cValue<=122))
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
    char ch='\0';
    bool bRet=false;

    printf("Enter the Charchter :\n");
    scanf("%c",&ch);

      bRet=ChkAlpha(ch);

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