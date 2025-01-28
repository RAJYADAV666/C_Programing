#include<stdio.h>
 void nSum()
{

    int i=0;
    int iNo=0;
    int iSum=0;

    for(i=1;i<=10;i++)
    {
        prinf("Enter the Number:\n");
        scanf("%d",&iNo);

        iSum=iSum+iNo;
    }

    printf("Tne Number of Addition is %d",iSum);

}
int main()
{
   nSum();

    return 0;
}

