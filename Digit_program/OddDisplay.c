#include<stdio.h>
void  DisplayOdd(int iValue)
{
    
    int iDigit=0;

    while(iValue !=0)
    {
        iDigit=iValue %10;

        if(iDigit %2==1)
        {

            printf(" The  Odd Digit is %d\n",iDigit);
        }

        iValue=iValue/10;

    }
   

}
int main()
{
    int iNo=0;

    printf("Enter The Number:\n");
    scanf("%d",&iNo);


    DisplayOdd(iNo);
   

    return 0;
}