#include<stdio.h>
#include<conio.h>
int main()
{
    int ino=21, inum=55;

    int *iptr1=&ino;
    int *iptr2=&ino;

    printf(" value of ino=%d\n",ino);
    printf(" adress of ino=%d\n",&ino);
    printf(" value of ino using its pointer iptr1=%d\n",*iptr1);
    printf(" address of ino using iptr1=%d\n",iptr1);
    printf(" adress of iptr1=%d\n",&iptr1);

     printf(" value of inum=%d\n",inum);
    printf(" adress of inum=%d\n",&inum);
    printf(" value of inum using its pointer iptr1=%d\n",*iptr2);
    printf(" address of inum using iptr1=%d\n",iptr2);
    printf(" adress of iptr2=%d\n",&iptr2);

return 0;

}