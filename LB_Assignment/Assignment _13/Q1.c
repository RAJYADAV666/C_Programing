#include<stdio.h>
#include<stdlib.h>

int Addition(int*Arr, int iSize)
{
    int iCnt=0;
    int iAns=0;
    int iEven=0;
    int iOdd=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] % 2==0)
        {
            iEven=iEven+Arr[iCnt];
        }
        else
        {
            iOdd=iOdd+Arr[iCnt];

        }

        iAns=iEven-iOdd;

    }


    return iAns;



}

int main()
{
        int iCount=0;
        int *ptr=NULL;
        int iCnt=0;
        int iRet=0;


        printf(" Enter the Number of Count to Allocate the Memoerey:\n");
        scanf("%d",&iCount);

        ptr=(int*)malloc(iCount*sizeof(int));

        printf(" Dyanamic Memorey get Allocatedted Sucefully:\n");


        printf("Enter the Elment %d\n",iCount);

        for(iCnt=0;iCnt<iCount;iCnt++)
        {
            printf("Enter the Elemet %d\n",iCnt+1);
            scanf("%d",&ptr[iCnt]);

        }

        iRet=Addition(ptr,iCount);

        free(ptr);


        printf(" The Diifernce Between Summation of Even And odd Elemet  is %d\n",iRet);

    return 0;
}