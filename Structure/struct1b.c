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



    printf(" size of integer is =%d\n",sizeof(int));
    printf(" size of structure student object =%d\n",sizeof(struct stud));

    return 0;
}