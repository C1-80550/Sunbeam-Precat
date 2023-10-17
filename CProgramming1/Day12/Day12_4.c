#include<stdio.h>

int main()
{
    int num;
    accept_number(&num); //actual argument is passed by address
    display_number(num);//actual argument is passed by value
}

void accept_number(int *p)
{
    printf("Specify number \n");
    scanf("%d",p);
}
void display_number(int n)
{
    printf("number =%d\n",n);
}