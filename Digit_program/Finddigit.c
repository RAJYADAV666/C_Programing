#include<stdio.h>
#include<conio.h>
int main()
{
    long int no=0;
    int temp=0,dig=0,cnt=0,u_no=0;

    printf(" enter a number\n");
    scanf("%d",&no);

    printf("enter  a digit to find how many times \n");
    scanf("%d",&u_no);

    temp=no;

    while(temp>0)
    {

        dig=temp%10;
        if(dig==u_no)
        {
            (cnt++);

        }
    
    temp=temp/10;
    }

    printf(" given number of %d and its find of %d",no,u_no,cnt);


    return 0;




}