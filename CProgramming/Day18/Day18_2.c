#include<stdio.h>

struct student
{
    int rollno;
    char sname[20];
    int total;
};

int main()
{
    struct student s1 = {101,"abc",678} ;
    struct student s2 = {102};
    struct student s3; 

    printf("s1 = %d %s %d\n",s1.rollno,s1.sname,s1.total);
    printf("s1 = %d %s %d\n",&s1.rollno,&s1.sname,&s1.total);
    printf("s2= %d %s %d\n",s2.rollno,s2.sname,s2.total);
    s3 = s1;
    printf("s3 = %d %s %d\n",s3.rollno,s3.sname,s3.total);
}