
#include<stdio.h>

int main()
{
    int Arr[7]={0};
    int i=0;

    for(i=0;i<7;i++)
    {
        printf("Enter the %d Element:\n",i+1);
        scanf("%d",&Arr[i]);

    }

    for(i=0;i<7;i++)
    {
        printf("Array Element is %d\n",Arr[i]);


    }





    return 0;
}

