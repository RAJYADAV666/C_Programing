#include<stdio.h>
#include<conio.h>
#define no_of_products 5
struct product
{

    int p_id;
    int p_name[20];
    int p_p_price;
    int s_p_price;


};

int main()
{

    struct product p_arr[no_of_products];

            printf(" accepting product details\n\n");

            for(int i=0; i<no_of_products;i++)
            {
                printf("enter %d product id\n\n",i+1);
                scanf("%d",&p_arr[i].p_id);

                printf("enter %d product name\n\n",i+1);
                scanf("%s",&p_arr[i].p_name);
                
                printf(" enter %d product purches price\n \n",i+1);
                scanf("%d",&p_arr[i].p_p_price);

                printf(" enter %d product sell price\n\n",i+1);
                scanf("%d",&p_arr[i].s_p_price);



            }

            for(int i=0; i<no_of_products;i++)
            {
                    printf("\n%d product details \n id=%d.name=%s.\n purches price=%d\n.sell price=%d\n",i+1,p_arr[i].p_id,p_arr[i].p_name,p_arr[i].p_p_price,p_arr[i].s_p_price);

            }

}