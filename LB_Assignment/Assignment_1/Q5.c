#include<stdio.h>

void Display(int iNo)
{

        int iCnt=0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {

            printf(" * \n");
        }


}
int main()
{
        int iValue=0;

        printf(" Enter the Number to print * on Screen\n");
        scanf("%d",&iValue);

        Display(iValue);


    return 0;
}