#include<stdio.h>

void test()
{
    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int)*5);
}
int main()
{
    test();
}