#include<stdio.h>
void Display(int iValue)
{
        if(iValue>12)
        {
        printf("Invalid Input:\n");
        }
        if(iValue==1)
        {
            printf("The Month is : January\n");
        }
       else if(iValue==2)
        {
             printf("The Month is : February\n");
        }
        else if(iValue==3)
        {
             printf("The Month is : March\n");
        }
         else if(iValue==4)
        {
             printf("The Month is : Epril\n");
        }
         else if(iValue==5)
        {
             printf("The Month is : May\n");
        }
        else if(iValue==6)
        {
             printf("The Month is : June\n");
        }
         else if(iValue==7)
        {
             printf("The Month is : Julay\n");
        }
         else if(iValue==8)
        {
             printf("The Month is : August\n");
        }
         else if(iValue==9)
        {
             printf("The Month is : September\n");
        }
         else if(iValue==10)
        {
             printf("The Month is : October\n");
        }
         else if(iValue==11)
        {
             printf("The Month is : November\n");
        }
         else if(iValue==12)
        {
             printf("The Month is : December\n");
        }

}

int main()
{
        int iNo=0;

        printf("Enter a day Number:\n");
        scanf("%d",&iNo);

        Display(iNo);




    return 0;
}