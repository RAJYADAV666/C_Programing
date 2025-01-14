#include<stdio.h>
#include<stdbool.h>

bool CheckDiv(int iValue)
{

    if((iValue % 7==0)&&(iValue % 5==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo=0;
    bool bret=false;


    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    bret=CheckDiv(iNo);

    if(bret==true)
    {
        printf("%d is Divisible by 7 and 5",iNo);
    }
     else
    {
        printf("%d is not Divisible by 7 and 5",iNo);
    }




    return 0;
}
