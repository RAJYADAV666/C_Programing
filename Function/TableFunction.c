#include<stdio.h>

void Display(int iValue)
{
    int i=1;


    while(i<=10)
    {

        printf("%d\n",i*iValue);
        i++;
    }

}
int main()
{
    int iNo=0;

    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    Display(iNo);


}