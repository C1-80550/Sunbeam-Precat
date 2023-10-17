#include<stdio.h>
typedef enum {ACNT=1,ADMIN,MARKT,SALES} DEPARTMENT;

int main()
{
//    int dept;
    DEPARTMENT dept;
    printf("1.Accounts Department \n");
    printf("2.Administration Department \n");
    printf("3.Marketing Department \n");
    printf("4.Sales Department \n");
    scanf("%d",&dept);
    switch(dept)
    {
        case ACNT:
                printf("Accounts Department\n");
                break;
        case ADMIN:
                printf("Administration Department\n");
                break;
        case MARKT:
                printf("Marketing Department\n");
                break;
        case SALES:
                printf("Sales Department\n");
                //break;
    }
    printf("Outside switch ....\n");
    return 0;
}


//break is jump statement 
//can be used inside switch / loop 
//it helps to move execution control forcefully outside switch/loop