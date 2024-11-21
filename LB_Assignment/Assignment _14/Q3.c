#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Chek(int*Arr, int iSize)
{
    int iCnt=0;
    int iAns=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
           if(Arr[iCnt]==11)
           {
               return true;
           }
           else
           {

               return  false;
           }
     
    }


}

int main()
{
        int iCount=0;
        int *ptr=NULL;
        int iCnt=0;
        bool bRet=false;


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

       bRet=Chek(ptr,iCount);

        free(ptr);

            if(bRet==true)
            {
                printf(" 11 is Present\n");
            }
            else
            {
                printf(" 11 is Absent\n");
            }
    
    return 0;
}