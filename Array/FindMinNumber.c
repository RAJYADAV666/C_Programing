#include<stdio.h>
#include<stdlib.h>

int Min(int *Arr,int iSize)
{
    int i=0;
    int iMin=Arr[0];

    for(i=0;i<iSize;i++)
    {
            if(Arr[i]<iMin)
            {
                iMin=Arr[i];
            }

    }

    return iMin;


}


int main()
{
    int iCnt=0;
    int iCount=0;
    int iAns=0;

    int *Ptr=NULL;

    printf("Enter the Number of Elment you Want:\n");
    scanf("%d",&iCount);

    Ptr=(int*)malloc(iCount*(sizeof(int)));

    printf("Dyanamic Memorey Allocated Succefully:\n");

    printf("Enter the %d Element:\n",iCount);

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("Enter the %d Element:\n",iCnt+1);
        scanf("%d",&Ptr[iCnt]);
    }

    iAns=Min(Ptr,iCount);

    printf("The Minimum Elment is %d",iAns);



    return 0;
}