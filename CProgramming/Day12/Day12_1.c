#include<stdio.h>
void fun(void);

int main()
{
    fun();
    printf("Abonormal Termination\n");
}

/* void fun(void)
{
    int x=5;
    printf("x=%d\n",x);
    fun();
    x++;
} */

void fun(void)
{
    static int x=3;
    if(x--)
    {
        fun();
        printf("x=%d\n",x);
    }
}

