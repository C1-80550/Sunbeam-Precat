#include<stdio.h>
typedef struct
{
    int rollno;
    char sname[20];
    int total;
}STUDENT;

STUDENT accept_student_data()
{
    STUDENT s;
    printf("Specify Roll no \n");
    scanf("%d",&s.rollno);

    printf("Specify Student Name ");
    scanf("%*c");
    gets(s.sname);

    printf("Specify Total");
    scanf("%d",&s.total);

    return s;
}

void display_student_data(STUDENT s)
{
    printf("%d %s %d \n",s.rollno,s.sname,s.total);
}
int main()
{
    STUDENT s1;
    s1 = accept_student_data();
    display_student_data(s1) ;//pass by value //passed 28 bytes data
}