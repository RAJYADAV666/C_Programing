#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iValue)
{

        if(iValue  %2==0)
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


    bret=CheckEvenOdd(iNo);

    if(bret==true)
    {

        printf("The Number is Even\n");
    }
    else
    {
        printf("The Number is Odd\n");
    }



    return 0;
}

