#include<stdio.h>
#include<conio.h>
struct student
{
        char name[20];
        char city[40];
        int r_no;
        float per;
        char grade;



    
};
int main()
{

    struct student std1;

    printf("Size of structure object %d\n",sizeof(std1));
    return 0;


}