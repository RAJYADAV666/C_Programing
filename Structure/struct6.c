#include<stdio.h>
#include<conio.h>
#include<string.h>

struct stud
{
        int rno;
        char name[20];
        float per;



};
int main()
{
    int i=0;

    struct stud std[3];

    for(i=0; i<3; i++)
    {

       printf(" \n \nenter student no %d details",i+1);

        printf(" \nenter a roll number\n");
        scanf("%d",&std[i].rno);

        printf(" enter name\n");
        scanf("%s",&std[i].name);

        printf(" enter a percentage\n");
        scanf("%f",&std[i].per);


    }
        

        printf("==========******=======\n\n");

        printf(" student information\n\n");

        for(i=0;i<3;i++)
        {
                printf(" %d student information is =>",i+1);

                printf(" \nroll no   =%d\n",std[i].rno);
                printf("name       =%s\n",std[i].name);
                printf("percentage =%f\n",std[i].per);


        }
                return 0;
}