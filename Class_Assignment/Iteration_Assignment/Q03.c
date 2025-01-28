#include<stdio.h>
void Display(int iNo)
{

    int i=0;

    for(i=1;i<=iNo;i++)
    {
        printf("*\n");
    }

}
int main()
{
    int No=0;

    printf("Enter the Number to print the * on the Screen :\n");
    scanf("%d",&No);



    Display(No);
    return 0;

}


