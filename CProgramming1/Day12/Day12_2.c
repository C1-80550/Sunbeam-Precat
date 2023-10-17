#include<stdio.h>

int main()
{
    int num,factorial;
    printf("Specify number \n");
    scanf("%d",&num);
    factorial = fact(num);
    printf("Factorial of %d is = %d \n",num,factorial);
}

int fact(int n)
{
    if(n==1)
        return 1;

    return n * fact(n-1);
}