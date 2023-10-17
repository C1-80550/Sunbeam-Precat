#include<stdio.h>
//when comma operator is used and it is precendence follow steps to solve expression
//1. solve each expression separated by comma from left to right
//2. associate result of right most expression at sequence point  

/* int main()
{
    int a=2,b=3,c=4;
    printf("%d %d %d",a,b,c); // here we are not using comma operator
                              //here comma is used to separate list of arguments to function
} */


/* int main()
{
    int a=2,b=3,c=4,d;
    d = a,b,c;  //here we are using comma operator //= has more precedence than comma 
    printf("d = %d \n",d);
    
    d = (a,b,c);  //here we are using comma operator 
    printf("d = %d \n",d);
}   
 */

/* int main()
{
    int a=2,b=3,c=4,d;
    d = (++a,a++,a=2); //a=3 //a=4 //a=2
    //d=     (3,3,2)    
    printf("a=%d d=%d \n",a,d);
}    */

/* int main()
{
    int a=7,d; 
    d = printf("1");
    printf("d=%d\n",d);

    d = printf("22");
    printf("d=%d\n",d);
    
    d = printf("%d",a);
    printf("d=%d\n",d);

    d = printf("%5d",a);    // _ _ _ _ 7
    printf("d=%d\n",d);

    d = printf("%5d\t",a);    // _ _ _ _ 7
    printf("d=%d\n",d);
}
 */

/* int main()
{
    int d ;
    d = (printf("%5d",1),printf("%4d",22),printf("%10d",333));
    //d = (5 , 4, 10);
    printf("d=%d\n",d);
} */


int main()
{
    int a=2; //a=1 //a=0
    if(a--,--a,a)   //if(2,0,0) //if(0)
    {
        printf("True");
    }
}










