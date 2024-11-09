#include<stdio.h>

////////////////////////////////////
//    
//     Function Name:RangeSumEven
//     Description:To Calculate  the sum of Even number  
//     Input Argument: Integer
//     Output: Integer
//     Author:Raj kishor Yadav
//     Date:12/07/2024
//
//  //////////////////////////////

int RangeSumEven(int iStart,int iEnd)
{
        int iCnt=0;
        int iSum=0;
             
            if( iStart >iEnd) 
            {
                printf("Invalid Range\n");
                
            }
          
        
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {   
                if((iCnt % 2)==0)
                {

                   iSum=iSum+iCnt;
                }       

        }

        return iSum;


}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0.0;

    printf(" Enter the Starting Point:\n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Point:\n");
    scanf("%d",&iValue2);

   iRet  = RangeSumEven(iValue1,iValue2);

   printf(" The sum of Even Number is %d",iRet);




    return 0;
}