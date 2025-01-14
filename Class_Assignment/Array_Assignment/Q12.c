
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
    int iRes=0;

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

    iRes=Max(Ptr,iCount);
    iAns=Min(Ptr,iCount);

    printf("The MAximum Elment is %d\n",iRes);
    printf("The Minimum Elment is %d\n",iAns);


    return 0;
}
