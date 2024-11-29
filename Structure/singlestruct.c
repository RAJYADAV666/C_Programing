#include<stdio.h>
#include<conio.h>
#include<conio.h>

struct product
{
    int p_id;
    char p_name[20];
    float p_p_price;
    float p_s_price;

};
int main()
{           
    struct product pd1,pd2;

        printf(" accept product details \n");

        printf(" enter 1st product id=\n");
        scanf("%d",&pd1.p_id);

         printf(" enter 1st product name=\n");
        scanf("%s",&pd1.p_name);

         printf(" enter 1st product purches price =\n");
        scanf("%f",&pd1.p_p_price);

         printf(" enter 1st product sell price =\n\n");
        scanf("%f",&pd1.p_s_price);
        

            // 2 nd product 
        printf(" enter 2nd product id=\n");
        scanf("%d",&pd2.p_id);

         printf(" enter 2nd  product name=\n");
        scanf("%s",&pd2.p_name);

         printf(" enter 2nd product purches price =\n");
        scanf("%f",&pd2.p_p_price);

         printf(" enter 2nd product sell price =\n\n");
        scanf("%f",&pd2.p_s_price);

        printf(" display product details \n\n");

        printf("1 st product details =>\n id=%d.\n name=%s.\n sales price=%f.\n purches price=%f.\n",pd1.p_id,pd1.p_name,pd1.p_p_price,pd1.p_s_price);

        printf("2 nd product details =>\n id=%d.\n name=%s.\n sales price=%f.\n purches price=%f.\n",pd2.p_id,pd2.p_name,pd2.p_p_price,pd2.p_s_price);

        return 0;





}