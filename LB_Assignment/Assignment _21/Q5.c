#include<stdio.h>

void Pattern(int iNo1,int iNo2)
{
        int i=0;
        int j=0;

        for(i=1;i<=iNo1;i++)
        {
            for(j=1;j<=iNo2;j++)
            {
                if((i==1)||(i==iNo1)||(j==1)||(j==iNo2))
                {
                    printf("%d\t",j);
                }
                else
                {
                    printf("*\t");
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


}