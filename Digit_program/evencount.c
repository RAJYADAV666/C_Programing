#include<stdio.h>
#include<conio.h>
int main()
{


    long int no=0;
    int temp=0;
    int dig=0;
    int cnt=0;

    printf(" enter the number to find how many even number \n");
    scanf("%d",&no);

    temp=no;

    while(temp>0)
    {
        dig=temp %10;
        
        if(dig %2==0 && dig !=0)
        {
            (cnt++);

        }
        temp=temp/10;

    }
    printf(" the given number of %d and count of even number is %d ",no,cnt);

    return 0;

}