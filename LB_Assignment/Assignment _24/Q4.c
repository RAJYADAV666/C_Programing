#include<stdio.h>
#include<stdbool.h>
bool ChkAlpha(char cValue)
{
        if(cValue>=97 && cValue<=122)
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

        printf("It is Small Letter:\n");

    }
    else
    {
        printf("It is Capital Letter:\n");
    }

    return  0;
}