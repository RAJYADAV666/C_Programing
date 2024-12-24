#include<stdio.h>
#include<stdlib.h>
int Max(int *Arr,int iSize)
{
    int i=0;
    int iMax=0;

    iMax=Arr[0];

    for(i=0;i<iSize;i++)
    {
        if((Arr[i])>iMax)
        {
            iMax=Arr[i];
        }

    }
return iMax;


}

int main()
{
    int iCount=0;
    int iCnt=0;
    int *Ptr=NULL;
    int iAns=0;

    printf("Enter The Number of Element you Want:\n");
    scanf("%d",&iCount);

    Ptr=(int*)malloc(iCount*sizeof(int));

    printf("Dyanmic Memorey Get Allocateted Succesfully:\n");

    printf("Enter the %d Element:",iCount);

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("Enter the %d Element:\n",iCnt+1);
        scanf("%d",&Ptr[iCnt]);
    }

    iAns=Max(Ptr,iCount);

    printf("The Maximum Element is %d\n",iAns);




    return 0;
}