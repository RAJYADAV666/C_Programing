#include<stdio.h>
#include<conio.h>

void Display(int iValue)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=10;iCnt++)
    {

        printf("%d\n",iCnt*iValue);
    }

}

int main()
{
            int No=0;

            printf("Enter Number:\n");
            scanf("%d",&No);

            Display(No);


}