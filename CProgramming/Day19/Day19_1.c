#include<stdio.h>
#define SIZE 2
typedef struct 
{
    int empno;
    char ename[20];
    float salary;
}EMPLOYEE;

void display_employee_data(EMPLOYEE *p) //EMPLOYEE e[SIZE]
{
    int i;
    /* for(i=0;i<SIZE;i++)
    {
        printf("%d %s %.2f \n",p[i].empno,p[i].ename,p[i].salary);
    } */
    /* for(i=0;i<SIZE;i++)
    {
        printf("%d %s %.2f \n",(p+i)->empno,(p+i)->ename,(p+i)->salary);
    } */
    for(i=0;i<SIZE;i++)
    {
        printf("%d %s %.2f \n",p->empno,p->ename,p->salary);
        p++;//p = p+1 //p=100+1 //p=128
    }
}
int main()
{
    EMPLOYEE earr[SIZE] ={{101,"Smita",5600},{102,"Akshita",4500}};
    //EMPLOYEE earr[SIZE] ={{101,"Smita",5600}};
    printf("size =%u \n",sizeof(earr));
    display_employee_data(earr);
}