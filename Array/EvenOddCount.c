#include<stdio.h>
#include<stdlib.h>
int  EvenCount(int *Arr,int iSize)
{
    int iCnt=0;
    int EvenCount=0;

        printf("Even Elment Are:\n ");

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

int OddCount(int *Arr,int iSize)
{
    int iCnt=0;
    int OddCount=0;

        printf("Odd Elment Are:\n ");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
            if(Arr[iCnt]%2==1)
            {
              printf("%d\n",Arr[iCnt]);
               OddCount++;
            }


    }
             return OddCount;

}
int main()
{
    int iCnt=0;
    int iCount=0;
    int *Ptr=NULL;
    int iRes=0;
    int iAns=0;


    printf("Enter The  Number Of Element You Want:\n ");
    scanf("%d",&iCount);

    Ptr=(int *)malloc(iCount *(sizeof(int)));

    printf("Dynamic Memorey Get Allocated Succesfully:\n");

    printf("Enter the %d Elment\n ",iCount);

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
            printf("Enter the  %d Elment:\n",iCnt+1);
            scanf("%d",&Ptr[iCnt]);

    }

        iRes=EvenCount(Ptr,iCount);
        iAns=OddCount(Ptr,iCount);

        printf("The Even Count is %d\n",iRes);
         printf("The Odd Count is %d\n",iAns);


    free(Ptr);



}