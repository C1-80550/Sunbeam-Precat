#include<stdio.h>
//anonymous structure
struct 
{
    int rollno;
    char sname[20];
    int total;
}s1; //s1 here is global variable

typedef struct
{
    int bkid;
    float price;
}BOOK; //BOOK here is alias to anonymous structure declaration

//1. use typedef to create variable
//2. create varaible immediately after declaration of structure before ;
BOOK b1; //b1 her eglobal variable

typedef struct employee
{
    int empno;
    float salary;
}EMPLOYEE;

int main()
{
    struct employee e1; //variable is created using real name
    EMPLOYEE e2; //variable is created using alias

    struct 
    {
        int day,month,year;
    }d1; //d1 here is local variable of type anonymous structure
    BOOK b2; //b2 here is local variable
}