
#include<stdio.h>
void Display(char ch)
{
    if((ch=='a')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='e'))
       {
           printf("The %c is Vowel Charchter :\n",ch);
       }
    else if((ch>='a') &&(ch<='z'))
        {
            printf("The %c is consonat",ch);

        }
     else
     {
         printf("This  %c Character is other:",ch);
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
