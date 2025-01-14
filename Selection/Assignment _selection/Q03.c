
#include<stdio.h>

void Display(int iValue1,int iValue2)
{
    if(iValue1>iValue2)
    {
        printf("%d is Maximum",iValue1);
    }
    else
    {

        printf("%d is Maximum",iValue2);
    }

}
int main()
{
    int iNo1=0;
    int iNo2=0;

    printf("Enter the  first Number:\n");
    scanf("%d",&iNo1);

    printf("Enter the  second Number:\n");
    scanf("%d",&iNo2);

   Display(iNo1,iNo2);


    return 0;
}
