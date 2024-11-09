#include<stdio.h>

////////////////////////////////////
//    
//     Function Name:RangeDisplayRev
//     Description:To Calculate  the sum of Even number  
//     Input Argument: Integer
//     Output: 
//     Author:Raj kishor Yadav
//     Date:12/07/2024
//
//  //////////////////////////////

int RangeDisplayRev(int iStart,int iEnd)
{
        int iCnt=0;
        int iSum=0;
             
            if( iStart >iEnd) 
            {
                printf("Invalid Range\n");
                
            }
          
        
        for(iCnt=iEnd;iCnt>=iStart;iCnt--)
        {   
               printf("%d\t",iCnt);  

        }

        


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

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}