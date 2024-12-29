#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,temp=0,dig=0,zcnt=0,ocnt=0,ecnt=0;

    printf(" enter a number\n");
    scanf("%d",&no);

    temp=no;

    while(temp!=0)
    {
        dig=temp%10;
        
        if(dig==0)
        {
                zcnt++;
        }
        else if(dig % 2==1)
        {
            ocnt++;
        }
        else
        {
            ecnt++;
        }

    }

    printf("even digit count is %d=%dn\n",no,ecnt);
     printf("odd digit count is %d=%d\n",no,ocnt);
      printf("zero  digit count is %d=%d\n",no,zcnt);


return 0;

}