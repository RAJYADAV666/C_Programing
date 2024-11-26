#include<stdio.h>


void Pattern(int iRow,int iCol)
{
        int i=0;
        int j=0;
        int iDigit=1;

        for(i=1;i<=iRow;i++)
        {

            for(j=1;j<=iCol;j++)
            {
               printf("%d\t",iDigit);

                iDigit++;

            }

                printf("\n");
        }



}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter the Row Size:\n");
    scanf("%d",&iValue1);

    printf("Enter the Coloumn Size:\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}