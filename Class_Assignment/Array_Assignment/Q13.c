
#include<stdio.h>
#include<stdlib.h>
void Display(int *Arr,int iSize)
{
    int iCnt=0;


    printf(" Even Element Of the Array:\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {

            if(Arr[iCnt]%2==0)
            {
                printf("%d\n",Arr[iCnt]);
            }


    }
}
int main()
{
    int iCnt=0;
    int iCount=0;
    int *Ptr=NULL;

    printf("Enter the Number of Element that You Want:\n");
    scanf("%d",&iCount);


    Ptr=(int*)malloc( iCount *sizeof(int));

    printf("Dyanamic Memorey get Allocateted Succesufully:\n");

    printf("Enter the %d Elemnet :\n",iCount);

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("Enter the %d Element:",iCnt+1);
        scanf("%d",&Ptr[iCnt]);

    }

        Display(Ptr,iCount);


        free(Ptr);

}
