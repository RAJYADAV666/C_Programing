#include<stdio.h>

void Display(char cValue1,char cValue2)
{
    char ch='\0';

    for(ch=cValue1; ch<=cValue2;ch++)
    {
        printf("%c",ch);
    }


}

int main()
{

    char cStart;
    char cEnd;

    printf("Enter the charachter to Start:\n");
    scanf("%c",&cStart);

     printf("Enter the Charachter to End:\n");
    scanf("%c",&cEnd);

    Display(cStart,cEnd);

    return 0;
}
