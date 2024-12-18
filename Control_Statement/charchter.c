#include<stdio.h>
#include<conio.h>
int main()
{

    char ch='\0';

    printf(" Enter any charchter \n");
    scanf("%c",&ch);

    if(ch>='A'&& ch<='Z')
    {

        printf(" entered charchter is uppercase");
    }
    else if(ch>='a'&& ch<='z')
    {

        printf(" entered charchter is lowercase\n");
    }
    else
    {
        printf(" invalid input \n");
    }

return 0;


}