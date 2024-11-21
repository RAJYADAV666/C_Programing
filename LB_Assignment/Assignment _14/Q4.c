#include<stdio.h>
#include<stdlib.h>

int Frequncy(int*Arr, int iSize)
{
    int iCnt=0;
    int iNum=0;
    
    

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
           
        if(Arr[iCnt]==11)
        {
            iNum++;
        }
       
    }

    return iNum;


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

       iRet=Frequncy(ptr,iCount);

        free(ptr);

       printf("The Frequncy of 11  is  %d ",iRet);
    

    return 0;
}