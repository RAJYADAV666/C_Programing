#include<stdio.h>


void Pattern(int iRow,int iCol)
{
        int i=0;
        int j=0;

        for(i=iRow;i>=1;i--)
        {

            for(j=iCol;j>=1;j--)
            {
                if(i %2==0)
                {
                    printf("%d\t",i);
                }
                else
                {
                    printf("%d\t",i);
                }


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