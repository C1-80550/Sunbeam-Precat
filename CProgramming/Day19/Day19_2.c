#include<stdio.h>

//#pragma pack(4)  
/* #pragma pack(1)
typedef struct 
{
    int total;
    char grade;
}RESULT;

int main()
{
    printf("Size = %u \n",sizeof(RESULT));
} */
#pragma pack(1)
typedef struct 
{
    unsigned  day : 5; //31
    unsigned      : 3; //anonymus bit field
    unsigned  month : 4; //12
    unsigned  year : 11; //2023
}DATE;

int main()
{
    printf("size = %u \n",sizeof(DATE));
    DATE today;
    today.day = 31;
    today.month=12;
    today.year = 2023;
    printf("%d-%d-%d\n",today.day,today.month,today.year);
    
    today.day = 49; //001 10001
    printf("%d-%d-%d\n",today.day,today.month,today.year);
    
    //int *p = &today.month;
}


