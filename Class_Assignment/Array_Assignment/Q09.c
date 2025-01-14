
#include<stdio.h>
#include<stdlib.h>

int Count(int *Arr,int iSize)
{

    int iCnt=0;
    int i=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        i++;

    }

    return i;


}
int main()
{
    int iCnt=0;
    int iValue=0;
    int *Ptr=NULL;
    int iCount=0;


    printf("Enter The Number of Element You Want:\n");
    scanf("%d",&iValue);

    Ptr=(int*)malloc(iValue*sizeof(int));

    printf("Dynamic Memorey Allocated Succefully:\n");

    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        printf("Enter %d Elemnt:\n",iCnt+1);
        scanf("%d",&Ptr[iCnt]);


    }

    iCount=Count(Ptr,iValue);

    printf("The Total Number of Elment is %d\n",iCount);







    return 0;
}

