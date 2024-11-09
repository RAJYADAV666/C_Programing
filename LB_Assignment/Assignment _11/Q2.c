#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{   
    int iDigit=0;

        while(iNo!=0)
        {
                iDigit= iNo % 10;

                 if(iDigit==0)
                {
                    true;
                }
                else
                {
                    false;
                }
                iNo=iNo/10;
              

        }

       
            

}

int main()
{
        int iValue=0;
        bool bRet=false;

        printf("Enter Number:\n");
        scanf("%d",&iValue);


        bRet=ChkZero(iValue);

        if(bRet==true)
        {
            printf("It Contains Zero\n");
        }
        else
        {
            printf("It Contain No zero\n");
        }


    return 0;
}