#include<stdio.h>
#include<math.h>
/* int main()
{
    int x; 
    x = 4 + 6 // expected ; //compile time error
    return 0;
} */
/* 
int main()
{
    7 = 5 + 2;
    int i ;
    i = i +2 = 3;
}//lvalue error //compiletime error */

/* 
int main()
{
    int x = 5;
    double d ;
    d = power(x,2);
    printf("d = %.2f",d);
}//this will cause to linker error as linker will not be in position 
//locate object code of power function hence linking is failed */

/* int main()
{
    char ch = 'A';
    ch = ch + 32;
    printf("ch = %c \n",ch);
} */

/* int main()
{
    char ch = 'A';
    ch = ch - 32;
    printf("ch = %c \n",ch);
}//logical error wanted to toggle case instead */
//accept 2 numbers divide them and show result
int main()
{
    int a,b,c;
    printf("Specify number \n");
    scanf("%d",&a);
    printf("Specify number \n");
    scanf("%d",&b);
    c= a / b; //abonormal  termination //caused to runtime error
    printf("%d / %d = %d \n",a,b,c);
}

