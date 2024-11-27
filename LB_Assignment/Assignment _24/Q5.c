#include<stdio.h>
void ChkDiv(char cValue)
{
    if((cValue=='A') ||(cValue=='a'))
    {
        printf("Your exam At 7 Am:\n");

    }
     else if((cValue=='B') ||(cValue=='B'))
    {

         printf("Your exam At 8.30 Am:\n");

    }
      else if((cValue=='C') ||(cValue=='c'))
    {
           printf("Your exam At 9.20 Am:\n");

        
    }
      else if((cValue=='D') ||(cValue=='d'))
    {

         printf("Your exam At 10.30 Am:\n");

    }




}
int main()
{

char ch='\0';

printf("Enter a Division:\n");
scanf("%c",&ch);


ChkDiv(ch);



    return 0;
}