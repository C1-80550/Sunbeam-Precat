#include<stdio.h>
void test_1();

/* int main()
{
    test_1();
    test_1();
    test_1();
}

void test_1()
{
    int x=2;
    printf("x=%d \n",x);
    x++;
} */


/* int main()
{
    test_1();
    test_1();
    test_1();
}
void test_1()
{
    static int x; //default value is zero
    printf("x=%d \n",x);
    x++;
} */


/* int main()
{
    test_1();
    test_1();
    test_1();
}
void test_1()
{
    static int x;   //it is compulsory to initialise at the time of declaration 
    x=5; //if we initialise static other declaration area then we spoil a nature of static
    printf("x=%d \n",x);
    x++;
} */

int main()
{
    test_1();
    test_1();
    test_1();
}
void test_1()
{
    int a=2,b=a;
    static int x = a;  //expected to be initialsied with constant value
    printf("x=%d \n",x);
    x++;
}