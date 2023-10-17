#include<stdio.h>

/* int main()
{
    int x = 3, y=2;
    printf("x=%d y=%d &x=%u &y=%u\n",x,y,&x,&y);
} */

//pointer is a variable
//pointer is desgined to store always address
//address should be alive state / in use mode
/* int main()
{
    int x=3,y=2; //x and y is designed store int
    int * p;  //adress of int //int * //p is pointer int //designed to store address of any int location
    //as p here is not initialisd at the time of declaration it called as wild pointer
} */

/* int main()
{
    int x=3,y=2;
    int *p = &x; //p=&x;
} */

/* int main()
{
    int x=3,y=2;
    int *p;
    p = &x;
    printf("x=%d y=%d &x=%u &y=%u\n",x,y,&x,&y);
    printf("p=%u &p=%u *p=%d\n",p,&p,*p);
} */

/* int main()
{
    int x=3,y=2;
    int *p;
    p = &x;
    printf("x=%d y=%d &x=%u &y=%u\n",x,y,&x,&y);
    printf("p=%u &p=%u *p=%d\n",p,&p,*p);
    *p = 7; //via pointer p tried to modify value of x
    printf("x=%d y=%d &x=%u &y=%u\n",x,y,&x,&y);
    printf("p=%u &p=%u *p=%d\n",p,&p,*p);
}  */

/* int main()
{
    int x=3,y=2;
    int *p;
    p = &x;
    printf("x=%d y=%d &x=%u &y=%u\n",x,y,&x,&y);
    printf("p=%u &p=%u *p=%d\n",p,&p,*p);
    p = &y; //pointer is a variable it can store address of any location at a time
    printf("p=%u &p=%u *p=%d\n",p,&p,*p);
}  */

/* int main()
{
    int x=3,y=2;
    int *p;
    p = &y;
    int **pp = &p; //2 indirection level pointer
    printf("p=%u &p=%u *p=%d\n",p,&p,*p);
    printf("pp=%u \n",pp); //address of pointer to int
    printf("&pp=%u \n",&pp);//address of pointer to pointer to int
    printf("*pp=%u \n",*pp);//after one indirection //address of int y
    printf("**pp=%d \n",**pp);//after 2nd indirection int value
}  */

int main()
{
    char *c; //c is designed to store address of char
    float *f ; //f is designed to store address of float
    int *p; // p is designed to store address of int
    double *d; // p is designed to store address of double    

    printf("size=%u size=%u size=%u size=%u\n",sizeof(c),sizeof(f),sizeof(p),sizeof(d));
}
















