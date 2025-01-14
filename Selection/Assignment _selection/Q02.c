#include<stdio.h>

void Display(int iValue)
{
    if(iValue<0)
    {
        printf("%d is Negative",iValue);
    }
    else
    {

        printf("%d is Positive",iValue);
    }

}
int main()
{
    int iNo=0;

    printf("Enter the Number:\n");
    scanf("%d",&iNo);

   Display(iNo);


    return 0;
}
