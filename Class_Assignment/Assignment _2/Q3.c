#include<stdio.h>

int Max(int iValue1,int iValue2)
{
        if(iValue1 >iValue2)
        {
            return iValue1;
        }
        else
        {
            return iValue2;
        }


}
int main()
{
        int iNo1=0;
        int iNo2=0;
        int iAns=0;

        printf("Enter a first  Number:\n");
        scanf("%d",&iNo1);

        printf("Enter a Second Number:\n");
        scanf("%d",&iNo2);

          iAns=Max(iNo1,iNo2);    

          printf("The %d Number is Maximum",iAns);


          return 0;



      


}

