#include<stdio.h>

int Max(int iValue1,int iValue2,int iValue3)
{
        if((iValue1 >=iValue2) && (iValue1 >=iValue3))
        {
            return iValue1;
        }
        else if((iValue2>=iValue1)&& (iValue2>=iValue3))
        {
            return iValue2;
        }
        else
        {
            return iValue3;
        }


}
int main()
{
        int iNo1=0;
        int iNo2=0;
        int iNo3=0;
        int iAns=0;

        printf("Enter a first  Number:\n");
        scanf("%d",&iNo1);

        printf("Enter a Second Number:\n");
        scanf("%d",&iNo2);

        printf("Enter a Third Number:\n");
        scanf("%d",&iNo3);

          iAns=Max(iNo1,iNo2,iNo3);    

          printf("The %d Number is Maximum",iAns);


          return 0;



      


}

