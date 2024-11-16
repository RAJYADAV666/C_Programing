#include<stdio.h>
#include<conio.h>
struct demo
{

    char name[20];
    int a;
    float per;
    double j;

};

int main()
{
        char *c;
        int *i;
        float *f;
        double *d;

        struct demo *sptr;

        printf("%d %d %d %d %d",sizeof(c),sizeof(i),sizeof(f),sizeof(d),sizeof(sptr));

        return 0;

}