#include<stdio.h>
#include<stdbool.h>

bool Check( int iNo)
{
        if((iNo % 5)==0)
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
        bool bRet=false;

        printf("Enter the Number:\n");
        scanf("%d",&iValue);

           bRet= Check(iValue);

           if(bRet==true)
           {
            printf(" Divisible by 5\n");

           }
           else
           {
            printf(" Not Divisible 5\n");
            
           }

    return 0;
}