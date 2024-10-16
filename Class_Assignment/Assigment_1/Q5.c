#include<stdio.h>

float Percentage(int iNo1,int iNo2,int iNo3)
{
        float fAns=0.0;

        fAns=(iNo1+iNo2+iNo3)/3;

        return fAns;



}
int main()
{
    int iSub1=0;
    int iSub2=0;
    int iSub3=0;
    float fRet=0.0;

    printf("Enter the Mark 1 st Subject:\n");
    scanf("%d",&iSub1);

    printf("Enter the Mark 2 nd Subject:\n");
    scanf("%d",&iSub2);

    printf("Enter the Mark 3 rd Subject:\n");
    scanf("%d",&iSub3);

    fRet=Percentage(iSub1,iSub2,iSub3);

    printf(" The Percentage is %f",fRet);






    return 0;
}