#include<stdio.h>
#include<conio.h>
int main()
{


    long int no=0;
    int temp=0;
    int dig=0;
    int cnt=0;

    printf(" enter the number to find its count \n");
    scanf("%d",&no);

            temp=no;
           
        while(temp>0)
        {
            dig=temp%10;
            cnt++;
            temp=temp/10;
        }
    

    
    printf(" the given number of %d and its count is %d",no,cnt);

    return 0;

}