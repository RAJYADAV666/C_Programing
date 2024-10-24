#include<stdio.h>
////////////////////////////
//      
//      Function Name:MultFact
//      Descripion: To Display the  Multiplication of factor 
//      Input Argument:Integer
//      output:Integer
//      Author: Raj Kishor Yadav
//      Date:2/10/2024
//
//////////////////////////////

int MultFact(int iNo)
{
    int iCnt=0;
    int iMult=0;

    for(iCnt=1; iCnt<iNo;iCnt++)
    {
            if((iNo % iCnt)==0)
            {

                iMult=(iMult * iCnt);

            }
    

    }


        return iMult;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

        printf("%d",iRet);

    return 0;
}