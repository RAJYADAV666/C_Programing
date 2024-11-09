#include<stdio.h>

////////////////////////////////////
//    
//     Function Name:DisplayRange
//     Description:To Display the Even Number Between the Range 
//     Input Argument: Integer
//     Output: Integer
//     Author:Raj kishor Yadav
//     Date:12/07/2024
//
//  //////////////////////////////

void DisplayRange(int iStart,int iEnd)
{
        int iCnt=0;


        if(iStart>iEnd)
            {
                printf("Inavlid Range");
            }

        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {   
                if(iCnt % 2==0)
                {
                    printf("%d\t",iCnt);
                }
          
        }


}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf(" Enter the Starting Point:\n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Point:\n");
    scanf("%d",&iValue2);

    DisplayRange(iValue1,iValue2);




    return 0;
}