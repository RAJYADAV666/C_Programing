#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
        if((iNo % 2)==0)
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
        int iValue=0;
        bool bret=false;


        printf(" Enter the Number:\n");
        scanf("%d",&iValue);

        bret=Check(iValue);

        if(bret==true)
        {
            printf(" Number is Even\n");
        }
        else
        {
            printf(" Number is Odd\n");
        }

    return 0;
}