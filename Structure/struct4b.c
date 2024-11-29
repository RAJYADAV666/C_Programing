#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct stud
{

        int roll_no;
        char name[40];
        float per;
};  

int main()
{     
            struct stud std3;

            printf(" enter a 3rd student information\n");

            printf(" enter roll no\n");
            scanf("%d",&std3.roll_no);

            printf(" enter a name\n");
            scanf( "%s",&std3.name);

            printf(" enter a percentage\n");
            scanf("%f",&std3.per);


        printf(" 3rd student information is =>>\n");
        

        printf(" roll no    =%d\n",std3.roll_no);
        printf(" name       =%s\n",  std3.name);
        printf(" percentage =%f\n",std3.per);



    return 0;
}