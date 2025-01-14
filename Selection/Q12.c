#include<stdio.h>
void Display(char ch)
{
    if((ch=='a')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='e'))
       {
           printf("The %c is Vowel Charchter :\n",ch);
       }
       else
        {
            printf("The %c is  not Vowel Charchter :\n",ch);

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
