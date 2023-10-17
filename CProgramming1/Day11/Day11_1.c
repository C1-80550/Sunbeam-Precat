#include<stdio.h>
/* 
int main()
{
    auto int num = 5;
    printf("inside main num =%d &num=%u \n",num,&num);
    test_1();
}

void test_1()
{
    printf("inside test_1 num =%d &num=%u \n",num,&num);
} //as num is declared in the scope of main test fun is not aware of who is num*/


/* int main()
{
    int num = 5;
    printf("inside main num =%d &num=%u \n",num,&num);  
    test_2(num);
    printf("inside main num =%d &num=%u \n",num,&num);  
}
void test_2(int num)
{
    printf("inside test_2 num =%d &num=%u \n",num,&num);  
    num ++;
    printf("inside test_2 num =%d &num=%u \n",num,&num);      
} */


/* int main()
{
    int num = 5;
    if( num-- )
    {
        int num = 2;
        num +=10; //num = num + 10
        printf("inside block num = %d  &num=%u\n",num,&num);
    }
    printf("inside main num = %d &num=%u\n",num,&num);
} */

int main()
{
    int a=2,b=3;
    {
        int a=5,c=7;
        printf("a=%d b=%d c=%d \n",a,b,c);
    }//inner block can access members of outer block //precedence will be given to inner block
    printf("a=%d b=%d c=%d \n",a,b,c);
}//outer block can not access members of inner block












