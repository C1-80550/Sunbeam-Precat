#include<stdio.h>

typedef union 
{
    int total; //4
    char grade; //1
}RESULT;

int main()
{
    printf("Size = %u \n",sizeof(RESULT));
    RESULT r1;
    r1.total = 789;     
    printf("Total=%d Grade=%d \n",r1.total,r1.grade);
    r1.grade = 'A';
    printf("Total=%d Grade=%d \n",r1.total,r1.grade);
}

//00000000 00000000 000000011 00010101