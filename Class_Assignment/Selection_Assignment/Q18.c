#include<stdio.h>
void Display(int iValue)
{
    if(iValue==1)
    {
        printf("Sunday:\n");
    }
    else if(iValue==2)
    {
        printf("Monday:\n");
    }
     else if(iValue==3)
    {
        printf("Tuesday:\n");
    }
     else if(iValue==4)
    {
        printf("Wednesday:\n");
    }
     else if(iValue==5)
    {
        printf("Thursday\n");
    }
     else if(iValue==6)
    {
        printf("Friday:\n");
    }
    else if(iValue==)
    {
        printf("Saturday:\n");
    }
    else
    {
        printf("Invalid Position:\n");
    }


}
int main()
{


    int iNo=0;

    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;

}


