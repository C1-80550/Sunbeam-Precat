#include<stdio.h>
typedef struct
{
    int rollno;
    char sname[20];
    int total;
}STUDENT;

void accept_student_data(STUDENT *p)
{
    printf("Specify Roll no \n");
    scanf("%d",&p->rollno);

    printf("Specify Student Name ");
    scanf("%*c");
    gets(p->sname);

    printf("Specify Total");
    scanf("%d",&p->total);
}

void display_student_data(const STUDENT *p)
{
    printf("%d %s %d \n",p->rollno,p->sname,p->total);
    printf("%d %s %d \n",(*p).rollno,(*p).sname,(*p).total);
}
int main()
{
    STUDENT s1;
    accept_student_data(&s1); //4 bytes base address is passed of  student
    display_student_data(&s1) ;    
}