#include<stdio.h>

struct student
{
    int rollno;//=101;
    char sname[20];
    int total;
};//pure declaration //no memory allocation

int main()
{
    struct date
    {
        int day,month,year;
    };  

   struct student s1;   //create a variable using struct which is tagged with name student
   struct date d1;
    
}
void validate()
{
    struct date d2;
}//struct date can not accessed here as it is declared in the scope of main

