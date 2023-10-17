#include<stdio.h>
//int num1;
void test_1();
void test_2();

int main()
{
    //int num1;//declaration //definition //assignment
    extern int num1; //pure declaration
    printf("inside main num1=%d &num1=%d\n",num1,&num1);
    num1=5;
    printf("inside main num1=%d &num1=%d\n",num1,&num1);
    test_1();
    test_2();
    printf("inside main num1=%d &num1=%d\n",num1,&num1);
}

void test_1()
{
    int num1 = 8;
    printf("inside test_1 num1=%d &num1=%d\n",num1,&num1);
    num1++; //num1=9
}
int num1;
void test_2()
{
    printf("inside test_2 num1=%d &num1=%d\n",num1,&num1);
    num1++;
}