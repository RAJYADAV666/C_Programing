#include<stdio.h>

void Display(int iNo)
{

    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("World");
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

