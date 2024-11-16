#include<stdio.h>
#include<conio.h>
int main()
{

    int no1=21;
    int no2=50;

    int *res=NULL;
    int *ptr1=&no1;
    int *ptr2=&no2;

    printf(" base address of variable 1st is =%d\n",&no1);
     printf(" base address of variable 2nd is =%d\n",&no2);

     printf(" value in pointer is %d\n",ptr1);
      printf(" value in pointer is %d\n",ptr2);

      printf(" value of varible to which pointer to pointing =%d\n",*ptr1);
         printf(" value of varible to which pointer to pointing =%d\n",*ptr2);

     res=ptr1/ptr2; // this are the not allowed 

         printf(" value of pointer varible is =%d",res);




    return 0;
}