#include<stdio.h>

/* int main()
{
    int a = 5, b= 7 , c;
    c = a>=5 ; //5>=5 //true //1
    printf("c = %d \n",c);
} */

/* int main()
{
    int a = 5;
    unsigned b = 5;
    int c ;
    c = a==b;
    printf("c = %d \n",c);
} */

/* int main()
{
    int a = -5;
    unsigned int b = 5;
    int c ;
    c = a < b;  //-5 < 5        //signed > unsigned //first signed operand will be implicitly converted to unsigned
        //4294967291 < 5
    printf("a=%u b=%u c=%d \n",a,b,c);
}
 */

//10000000 00000000 00000000 00000101 

/* int main()
{
    int a=2,b=3,c;
    c = a<=5 && b>=1;
       // 2<=5 
       //  1   && 3>=1
       //  1   && 1 
    printf("c = %d \n",c);
} */

/* int main()
{
    int a=2,b=3,c;
    c = (a=-1) && (b=2);      
      //  -1 && 
      //   1  && 2
      //   1 && 1 
    printf("c = %d \n",c);

} */

/* int main()
{
    int a=2,b=3,c;  //a=0
    c = (a=0) && (b=2);      
        //0 && <skipped> 
    printf("a=%d b=%d c=%d \n",a,b,c);
} */
//<exp1> && <exp2> if <exp1> results false then <exp2> is skipped from evaluation

/* int main()
{
    int a=2,b=3,c;  //a=0
    c = (a=1) && (b=2);      
    printf("a=%d b=%d c=%d \n",a,b,c);
} */

/* int main()
{
    int a=2,b=3,c;  //a=0
    c = (a=0) || (b=2);      
        // 0 || 2
        // 0 || 1
        // 1 
    printf("a=%d b=%d c=%d \n",a,b,c);
} */
/* 
int main()
{
    int a=2,b=3,c;  //a=0
    c = (a=1) || (b=2);      
         //1 || <skipped>   
    printf("a=%d b=%d c=%d \n",a,b,c);
} */
//<exp1> || <exp2> if exp1 results true
/* int main()
{
    int a=0, b=1;
    printf("!a = %d\n",!a);
    printf("!b = %d\n",!b);

    a=-10 ; b=5;
    printf("!a=%d !b=%d \n ",!a,!b);
    printf("!!!!a = %d\n",!!!!a);
    //!-10 = 0
    //!0 = 1
    //!1 = 0
    //!0 = 1
}
 */
/* int main()
{
    int a=2;
    ++a;    //a=a+1
    printf("a = %d \n",a); //a=3
    a = 2;
    a++;    //a=a+1
    printf("a = %d \n",a); //a=3
} */


/* int main()
{
    int a=2,c; //a=3
    c = ++a;      //c= ++a //c=3
    printf("a = %d \n",a); //a=3
    a = 2;
    //c = 2;    //a=a+1
    printf("a=%d c=%d \n",a,c); //a=3 c=2
} */
//rules for preoperation
//1. Complete ++/-- operation on operand
//2. associate state of a operand at sequence point on which ++/-- is applied

//rules for postoperation
//1. associate state of a operand at sequence point on which ++/-- is applied
//2. Complete ++/-- operation on operand

/* int main()
{
    int a=2,b=3,c;
    c = ++a > b;
    printf("a=%d b=%d c=%d \n",a,b,c); 
}
 */
/* 
int main()
{
    int a=2,b=3,c;
    c = a++ > b;
    printf("a=%d b=%d c=%d \n",a,b,c); 
} */

int main()
{
    int a=-10,b=3, c=0,d;
    d = a++ || ++b && c++;
    printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
    a=-10,b=3, c=0,d;
    d = c++ && ++b || a++;
    printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
}






