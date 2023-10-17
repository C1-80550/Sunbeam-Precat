#include<stdio.h>

/* int main()
{
    int i;
    for(i=1; i<=5 ; i++)
    {
        printf("Inside loop\n");
    }
} */

/* int main()
{
    int i;
    i=1; //i=1
    for( ;  ; )
    {
        if(i>=5) //1>=5 //2>=5 //3>=5 //4>=5 //5>=5//6>=5 
            break;

        printf("Inside loop\n");
        i++; //i=2 //=3 //i=4 //i=5 //i=6
    }
} */
/* 
int main()
{
    int x,y;
    //x=1,y=3 //x=2 y=2 //x=3 y=1 //x=4 y=0 //x=5 y=-1
    for(x=1,y=3 ; x++<=5,y-->=1 ; )
    //1<=5,3>=1 //2<=5, 2>=1 //3<=5,1>=1 //4<=5,0>=1
    {
        printf("x=%d y=%d \n",x,y); //x=2 y=2 // x=3 y=1 //x=4 y=0
    }
} */


/* int main()
{
    int i;
    //i=3
    for(printf("Specify number"),scanf("%d",&i); 1<=i ? 1 : 0 ; printf("%d",i))
    {
        i--;
    }
}
 */

int main()
{
    int i;
    for(i=1;i<=3;i++);
        printf("i=%d \n",i);
}











