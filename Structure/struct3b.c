#include<stdio.h>
#include<conio.h>
#include<string.h>

struct stud
{

        int roll_no;
        char name[40];
        float per;
};  

int main()
{       
        struct stud std1={15,"amey wagh",75.45566};

        struct stud std2;
        std2.roll_no=55;
        strcpy(std2.name,"shubham");
        std2.per=55.344;

        printf(" first student information\n\n");

        printf(" roll no =%d\n",std1.roll_no);
        printf(" name  =%s\n",  std1.name);
        printf(" percentage=%f\n",std1.per);


        printf(" second  student information\n");

        printf(" roll no =%d\n",std2.roll_no);
        printf(" name  =%s\n",  std2.name);
        printf(" percentage=%f\n",std2.per);



    return 0;
}