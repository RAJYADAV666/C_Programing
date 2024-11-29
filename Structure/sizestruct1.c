#include<stdio.h>
#include<conio.h>

struct stud1
{
    char name[20];
    char city[10];
    int r_no;
    long int mobile_no;
    float per;

};
struct stud2
{
        int r_no;
        char name[12];
        long int mobile_no;
        char city[5];
        float per;




};
struct stud3
{

         int r_no;
        char name[45];
        long int mobile_no;
        char city[7];
        float per;


};


int main()
{
         struct stud1 std1;
         struct stud2 std2;
         struct stud3 std3;

        printf(" size of  1 st structure object is %d\n",sizeof(std1));
        printf(" size of  2 nd structure object is %d\n",sizeof(std2));
        printf(" size of  3 rd structure object is %d\n",sizeof(std3));

        return 0;
}