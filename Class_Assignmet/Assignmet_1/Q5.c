#include<stdio.h>
 int CalculateMark(int iNo1,int iNo2,int iNo3)
 {
                int iTotal=0;
                int iper=0;

                iTotal=iNo1+iNo2+iNo3;

                printf(" The Total Mark is %d\n",iTotal);

                iper=iTotal/3;

                return iper;





 }
int main()
{
        int iMark1=0;
        int iMark2=0;
        int iMark3=0;
        int iRet=0.0;

        printf(" Enter the Mark Subject First:\n");
        scanf("%d",&iMark1);

        printf(" Enter the Mark Subject second:\n");
        scanf("%d",&iMark2);

        printf(" Enter the Mark Subject third:\n");
        scanf("%d",&iMark3);

        iRet=CalculateMark(iMark1,iMark2,iMark3);


        printf(" The percentage is %d",iRet);



    return 0;
}