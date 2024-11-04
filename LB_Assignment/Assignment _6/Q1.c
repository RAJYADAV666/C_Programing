#include<stdio.h>

///////////////////////////////
//       Function Name:Display
//       Description: To Print the in linear $ and *
//       Input Argument: Integer:
//       output        : 
//       Author:   Raj Kishor Yadav 
//       Date: 3/10/2024
/////////////////////////

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo*2;iCnt++)
    {
            if((iCnt %2)==1)
            {
                printf(" $\t");
            }
            else
            {
                printf("*\t");
            }




    }




}


int main()
{
        int iValue=0;

        printf(" Enter the Number:\n");
        scanf("%d",&iValue);

        Display(iValue);




    return 0;
}