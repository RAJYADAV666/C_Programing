#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////
//
//      Function Name:Check
//      Description:To Check The Number present or Not:
//      Input Argument:Integer
//      Output:Integer
//      Date:21/10/2024
//      Author:Raj Kishor Yadav
//
///////////////////////////////////////////////
bool Check(  int *Arr,int iSize,int iFind)
{
        int iCnt=0;
        

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
                if(Arr[iCnt]==iFind)
                {
                    return true;
                }
                else
                {
                    return false;
                }

        }
}
int main()
{
    int iValue=0;
    int *ptr=NULL;
    int iCnt=0;
    bool bRet=0;
    int iNo=0;

    printf("Enter the count to Display Element:\n");
    scanf("%d",&iValue);

    ptr=(int*)malloc (iValue * sizeof(int));

    printf(" Dyanmic Meorey Allocated Succefully:\n");


    for(iCnt=0;iCnt<iValue;iCnt++)
    {
            printf("Enter the %d Element\n ",iCnt+1);
            scanf("%d",&ptr[iCnt]);

    }
    printf("Enter the Number to Check Present or Not:\n");
    scanf("%d",&iNo);

    bRet=Check(ptr,iValue,iNo);

    if(bRet==true)
    {
        printf("The %d is Present",iNo);
    }
    else
    {
        printf("The %d is Not Present",iNo);
    }


    free(ptr);

return 0;

}