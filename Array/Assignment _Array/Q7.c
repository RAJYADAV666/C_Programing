#include<stdio.h>
#define size 3

int main()
{
    int Arr[size]={0};
    int i=0;

    for(i=0;i<size;i++)
    {
        printf("Enter the %d Element:\n",i+1);
        scanf("%d",&Arr[i]);

    }

    for(i=0;i<size;i++)
    {
        printf("Array Element is %d\n",Arr[i]);
        

    }








    return 0;
}