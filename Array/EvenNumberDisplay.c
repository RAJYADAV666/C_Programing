#include<stdio.h>
#include<stdlib.h>
int  EvenCount(int *Arr,int iSize)
{
    int iCnt=0;
    int EvenCount=0;

        printf(" Even Elment\n ");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
            if(Arr[iCnt]%2==0)
            {
              printf("%d\n",Arr[iCnt]);
               EvenCount++;
            }


    }
             return EvenCount;

}

int main()
{
    int iCnt=0;
    int iCount=0;
    int *Ptr=NULL;
    int Res=0;


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

        Res=EvenCount(Ptr,iCount);

        printf("The Even Count is %d",Res);


    free(Ptr);



}