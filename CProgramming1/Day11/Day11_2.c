#include<stdio.h>

//register int x;

int z =45;

int main()
{
    register int num; //with this instruction it is arequest to identify CPU register and store int value via num idenfier
    printf("&num = %u \n",&num);
}
