
#include<stdio.h>
#include<stdbool.h>
bool CheckAlpha(char ch)
{
    if((ch>='A') &&(ch<='Z')||(ch>='a') &&(ch<='z'))
        {
            return true;
        }


        }
     else
        {
            return false ;
        }

}

int main()
{
    char cValue='\0';
    bool bret=false;

    printf("Enter the Chrachter :\n");
    scanf("%c",&cValue);

    bret=CheckAlpha(cValue);

    if(bret==true)
    {
        printf("%c is Alphabate",cValue);
    }
    else
    {
        printf("%c is not  Alphabate",cValue);
    }



    return 0;
}



