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
{           struct stud std1={21,"raj yadav",77.555};  
            struct stud std2;
            struct stud std3;
            
            std2.roll_no=12;
            strcpy(std2.name,"shubham gharge");
            std2.per=67.44;

            printf(" enter a 3rd student information\n");

            printf(" enter roll no\n");
            scanf("%d",&std3.roll_no);

            printf(" enter a name\n");
            scanf( "%s",&std3.name);

            printf(" enter a percentage\n");
            scanf("%f",&std3.per);


            printf(" student inforamation\n\n");

                printf(" first student information\n\n");

        printf(" roll no    =%d\n",std1.roll_no);
        printf(" name       =%s\n",std1.name);
        printf(" percentage =%f\n",std1.per);

                 printf(" first student information\n\n");

        printf(" roll no    =%d\n",std2.roll_no);
        printf(" name       =%s\n",std2.name);
        printf(" percentage =%f\n",std2.per);

                printf(" first student information\n\n");

        printf(" roll no    =%d\n",std3.roll_no);
        printf(" name       =%s\n",std3.name);
        printf(" percentage =%f\n",std3.per);


    return 0;
}