
#include<stdio.h>
void Display(char ch)
{
    if((ch>='A') &&(ch<='Z'))
        {
            printf("The %c is Upper Case",ch);

        }

    else if((ch>='a') &&(ch<='z'))
        {
            printf("The %c is Lower Case",ch);

        }
     else
     {
         printf("This  %c  is  Not A letter :",ch);
     }


}

int main()
{
    char cValue='\0';

    printf("Enter the Chrachter :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

