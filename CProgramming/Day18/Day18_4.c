#include<stdio.h>

typedef struct 
{
    int dd,mm,yy;
}DATE;

typedef struct 
{
    int rollno;
    struct
    {
        char fname[20];
        char mname[20];
        char lname[20];    
    }name;
    DATE dob;
    int total;
}STUDENT;


int main()
{
    printf("size =%u \n",sizeof(STUDENT));
    STUDENT s1;
    s1.dob.dd = 1;
    s1.dob.mm = 4;
    s1.dob.yy = 2023;

    printf("%d-%d-%d\n",s1.dob.dd,s1.dob.mm,s1.dob.yy);
}