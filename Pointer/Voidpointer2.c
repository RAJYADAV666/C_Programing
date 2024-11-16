#include<stdio.h>
#include<conio.h>
int main()
{
    int no=15;

    int *iptr=&no;
    void *vptr=&no;

    printf("address of no %d\n",&no);
    printf("address of iptr%d\n",&iptr);
    printf(" value in ptr %d\n",iptr);
    printf("value  in no %d\n",no);
    printf("value in no by pointer %d\n",*iptr);

    printf(" adress of vptr :%d\n",&vptr);
    printf("value in vptr:%d\n",vptr);


}