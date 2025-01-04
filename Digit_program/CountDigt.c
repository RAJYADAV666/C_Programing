#include<stdio.h>
int Count(int iValue)
{
    int iCount=0;
    int iDigit=0;

    while(iValue !=0)
    {
        iDigit=iValue %10;

        iCount++;

        iValue=iValue/10;

    }
    return iCount;

}
int main()
{
    int iNo=0;
    int iAns=0;


    printf("Enter The Number:\n");
    scanf("%d",&iNo);


    iAns=Count(iNo);
    printf("The  Count is %d\n",iAns);

    return 0;
}