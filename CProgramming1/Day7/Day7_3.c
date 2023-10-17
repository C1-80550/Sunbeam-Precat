#include<stdio.h>

//enum colors{RED,BLUE=77,GREEN};
//enum months{JAN=1,FEB,MAR=8,APR};
//JAN here represents int constant 1

/* int main()
{
    printf("RED =%d \n",RED);
    printf("MAR =%d \n",MAR);
    printf("GREEN =%d \n",GREEN);
} */

/* int main()
{
    MAR++;
} */


/* enum months {JAN,FEB,MAR};
int main()
{
    enum colors {RED,BLUE,GREEN};
    enum colors c1; //c1 here will receive 4 bytes memory //c1 here can store any enumarated field at time from enum colors
    enum months m1; //m1 here will receive 4 bytes memory//m1 here can store any enumarated field at time from enum months
    c1 = GREEN;
    m1 = FEB;
    printf("c1=%d m1=%d\n",c1,m1);
}

void test()
{
    //enum colors c2; //as enum colors is declared locally inside main we can not access here
    enum months m2;
} */

//anonymous enum
enum {JAN=1,FEB,MAR,APR,MAY,JUN}m1; //use of tag is not compulsory
//m1 here is global variable of anonymous enum type  

typedef enum {SUN,MON,TUE,WED} DAYS; //DAYS here is another name to anonymous enum

typedef enum depts{ACNT,ADMIN,MRKT,SALES}DEPARTMENT; //DEPARTMENT here is another name

//enum depts is real name

int main()
{
    enum {RED,BLUE,GREEN} c1;//c1 here is local variable of anonymous type
    DAYS d1;
    d1=MON;

    enum depts d2; //memory requested using real name
    DEPARTMENT d3; //memory requested using alias/nick name

    printf("Specify your department \n");
    scanf("%d",&d3);
}



