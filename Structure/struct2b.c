#include<stdio.h>
#include<conio.h>

struct stud
{

        int roll_no;
        char name[40];
        float per;
};  

int main()
{
        struct stud std1;

        printf(" roll no =%d\n",std1.roll_no);
         printf(" name  =%s\n",std1.name);
          printf(" percentage=%f\n",std1.per);


    return 0;
}