#include<stdio.h>

int main()
{
    int num = 789;
    float fvar = 65.43;
    printf("num = %dvalue \n",num);
    printf("num = %6dvalue \n",num);
    printf("num = %-6dvalue \n",num);

    printf("fvar = %fvalue \n",fvar);
    printf("fvar = %10fvalue \n",fvar);
    printf("fvar = %-10fvalue \n",fvar);
    printf("fvar = %-10.2fvalue \n",fvar);
}