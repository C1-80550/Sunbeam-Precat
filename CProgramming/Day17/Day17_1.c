/* #include<stdio.h> //stdio.h here is enclosed in <> //file will be searched
                // directly inside compiler's installation folder-->include

#include"test.h"

#include"string.h" //string.h --library header file --if it is enclosed in ""
        //then string.h will be searched for its availability in current folder
        //if not found then it will search in compiler's installation folder-->include        

int main()
{
    COLOR c1;
} */


#include<stdio.h>
/* #define CENTERID 442
int main()
{
    printf("CENTERID = %d\n",CENTERID);
    int x = CENTERID;
    printf("CENTERID = %d\n",CENTERID);    
} */

/* #define SQR(x)  x * x 
int main()
{
    int a=2,b=3;
    printf("Square = %d \n",SQR(a));    //a*a
}
 */

/* #define SQR(x)  x * x 
int main()
{
    int a=2,b=3;
    printf("Square = %d \n",SQR(a+b));  //a+b*a+b //2+6+3 
} */

/* #define SQR(x)  (x) * (x) 
int main()
{
    int a=2,b=3;
    printf("Square = %d \n",SQR(a+b));  //(a+b)*(a+b) //5*5=25 
} */

/* #define SWAP(a,b,type) {type temp;temp=a;a=b;b=temp;}
                    
int main()
{
    int x=4,y=6;
    printf("Before SWAP x=%d y=%d \n",x,y);
    SWAP(x,y,int) // { int temp;temp=x; x=y;y=temp;}
    printf("Before SWAP x=%d y=%d \n",x,y);
    SWAP(x,y,int)
    SWAP(x,y,int)
} */

/* #include<string.h>
#define STRINGIZE(x) char s1[20]; printf("%s",strcpy(s1,#x));
int main()
{
    STRINGIZE(SUNBEAM) //char s1[20]; printf("%s",strcpy(s1,"SUNBEAM"));
}
 */

#define PI 0
#define pi 3.14
/* int main()
{
    #if !defined(PI)
        #undef PI
        #define PI pi
        printf("PI = %.2f",PI);
    #else 
        printf("Test this line");
    #endif
    return 0;
}
 */

/* #define TEST(x,y) x##y      //## operator here will simply concatenate 
                            //given 2 tokens
int main()
{
    int a=2,b=3;//,ab=5;
    printf("Result = %d", TEST(a,b)); //x##y ////a##y //ab
} */

int main()
{
    int x=2,y=3;
    ~(x= x ^ x++ & y++);
    printf("x=%d y=%d \n",x,y);
}