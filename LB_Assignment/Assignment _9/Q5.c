#include<stdio.h>
/////////////////////////////////////
//    
//     Function Name:RectArea
//     Description:To Calculate the Area
//     Input Argument: Float
//     Output: Double
//     Author:Raj kishor Yadav
//     Date:12/07/2024
//
//  //////////////////////////////


double RectArea( float fWidth,float fheight)
{
        float fArea=0.0;

        fArea=(fWidth*fheight);

        return fArea;

}

int main()
{
        float fValue1=0.0;
        float fValue2=0.0;

        double dRet=0.0;

        printf("Enter Width:\n");
        scanf("%f",&fValue1);

        printf(" Enter height\n");
        scanf("%f",&fValue2);

        dRet=RectArea(fValue1,fValue2);

printf("the Area is %f",dRet);

    return 0;
}