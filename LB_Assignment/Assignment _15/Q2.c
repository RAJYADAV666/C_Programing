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
int Check(  int *Arr,int iSize,int iFind)
{
        int iCnt;
        int iTemp=iCnt;
        

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
             if(Arr[iCnt]==iFind)
             {
                printf("Index is %d",iCnt);
             }

        }

        
}
int main()
{
    int iValue=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
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
    printf("Enter the Number to index:\n");
    scanf("%d",&iNo);

    iRet=Check(ptr,iValue,iNo);

        printf("%d",iRet);
   


return 0;

}