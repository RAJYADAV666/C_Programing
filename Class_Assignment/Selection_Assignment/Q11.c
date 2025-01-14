#include<stdio.h>
#include<stdbool.h>

bool CheckLeapYear(int iValue)
{

        if((iValue%4) ==0)
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


    bret=CheckLeapYear(iNo);

    if(bret==true)
    {

        printf("The %d is Leap Year\n",iNo);
    }
    else
    {
         printf("The %d is  not Leap Year\n",iNo);
    }



    return 0;
}


