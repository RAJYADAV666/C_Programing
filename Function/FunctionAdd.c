#include<stdio.h>
#include<conio.h>

int Add(int Value1,int Value2)
{
    int iRes=0;

    iRes=Value1+Value2;

    return iRes;


}
int main()
{
    int No1=0;
    int No2=0;
    int Ans=0;


    printf("Enter the First Number:\n");
    scanf("%d",&No1);
    printf("Enter the Second Number:\n");
    scanf("%d",&No2);

    Ans=Add(No1,No2);
    printf("The Addition is %d",Ans);


return 0;


}