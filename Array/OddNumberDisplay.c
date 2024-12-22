#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int *Arr,int iSize)
{
    int iCnt=0;

    printf("Odd Elements of Array:\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
            if(Arr[iCnt]%2==1)
            {
                printf("%d",Arr[iCnt]);
            }


    }



}

int main()
{
    int iCnt=0;
    int iCount=0;
    int *Ptr=NULL;


    printf("Enter The  Number Of Element You Want:\n ");
    scanf("%d",&iCount);

    Ptr=(int *)malloc(iCount *(sizeof(int)));

    printf("Dynamic Memorey Get Allocated Succesfully:\n");

    printf("Enter the %d Elment\n ",iCount);

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
            printf("Enter the  %d Elment :\n",iCnt+1);
            scanf("%d",&Ptr[iCnt]);

    }

    OddDisplay(Ptr,iCount);

    free(Ptr);



}