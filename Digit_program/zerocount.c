#include<stdio.h>
#include<conio.h>
int main()
{


    long int no=0;
    int temp=0;
    int dig=0;
    int cnt=0;

    printf(" enter the number to find how many  0 \n");
    scanf("%d",&no);

   for (temp =no; temp >0;dig=temp%10,temp=temp/10)
           
        if(dig ==0)
        {
            (cnt++);

        }
    

    
    printf(" the given number of %d and count of 0 number is %d ",no,(cnt-1));

    return 0;

}