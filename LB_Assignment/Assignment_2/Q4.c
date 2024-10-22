#include<stdio.h>
void Display(int iNo,int iFrequncy)
{
        int iCnt=0;

        for(iCnt=iNo;iCnt<=iFrequncy;iCnt++)
        {
                printf("%d",iNo);
        }       

}
int main()
{
        int iValue=0;
        int iCount=0;

        printf(" Enter Number\n");
        scanf("%d",&iValue);

        printf("Enter Frequncy\n");
        scanf("%d",&iCount);

        Display(iValue,iCount);

    return 0;
}