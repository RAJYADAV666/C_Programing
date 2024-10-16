#include<stdio.h>
#include<string.h>

int main()
{
        char Name[15];
        int RollNo=0;
        char Course[20];
        char City[10];

        printf(" Enter a Name:\n");
        scanf("%[^'\n']",&Name);

        printf(" Enter a Name of Course:\n");
        scanf("%[^'\n']",&Course);

        printf(" Enter a Name of City:\n");
        scanf("%[^'\n']",&City);

        printf(" Enter a Roll Number:\n");
        scanf("%d",&RollNo);


        printf(" The Name of Student is %s\n",Name);
        printf("RollNo is %d\n",RollNo);
        printf("The Course Name is %s\n",Course);
        printf("The  City Name is %s\n",City);



return 0;


}