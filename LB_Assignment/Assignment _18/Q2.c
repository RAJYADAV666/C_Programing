#include<stdio.h>
///////////////////////////////////////
//
//      Function Name:Pattern
//      Description:To display the Pattern
//      Input Argument:Integer 
//      Output:-
//      Date:23/10/2024
//      Author:Raj Kishor Yadav
///////////////////////////////////////

void Pattern(int iNo1,int iNo2)
{
        int i=0;
        int j=0;

        for(i=1;i<=iNo1;i++)
        {
            for(j=1;j<=iNo2;j++)
            {
                    if(j %2==1)
                    {
                        printf("%d\t",j);
                    }
                    else
                    {
                        printf("%d\t",j);
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