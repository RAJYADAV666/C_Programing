#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;
    int res=0;

    printf(" enter  a number\n");
    scanf("%d",&no);

   

    res= ~no;

    printf(" result is %d =%d",no,res);

    return 0;



}