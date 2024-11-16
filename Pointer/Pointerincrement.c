#include<stdio.h>
#include<conio.h>

int main()
{

    int num[5]={12,34,56,22,23};

        int *ptr=num;

        printf(" base address of array is %d\n",num);
        printf(" value in pointer is %d\n",ptr);
        printf(" value of array element where pointer pointing =%d\n",*ptr);

       ptr++;
                    

        printf(" new value in  pointer =%d\n",ptr);
        printf(" value of array element where pointer pointing=%d\n",*ptr);

        return 0;




}