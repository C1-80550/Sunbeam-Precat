#include<stdio.h>

/* int main()
{
    int num1,num2,max;
    printf("Specify number \n");
    scanf("%d",&num1);
    printf("Specify number \n");
    scanf("%d",&num2);
    max = num1 > num2 ? num1 : num2 ;
    printf("Maximum Number = %d\n",max);
} */
// = has associativity rule R to L
// ? and : has associativity rule R to L
// ? and : has more precence than = operator

/* int main()
{
    int num1,num2,max;
    printf("Specify number \n");
    scanf("%d",&num1);
    printf("Specify number \n");
    scanf("%d",&num2);
    num1 > num2 ? (max=num1) : (max=num2) ;
    printf("Maximum Number = %d\n",max);
}
 */

int main()
{
    int num1,num2,num3,max;
    printf("Specify number \n");
    scanf("%d",&num1);
    printf("Specify number \n");
    scanf("%d",&num2);
    printf("Specify number \n");
    scanf("%d",&num3);
    if(num1>num2)
    {
        if(num1>num3)
            max=num1;
        else
            max = num3;     //num1>num3 ? num1 : num3
    }
    else
    {
        if(num2 > num3)
            max=num2;
        else
            max = num3; //num2 >num3 ? num2 : num3 
    }//num1 > num2 ? (num1>num3 ? num1 : num3) : (num2 >num3 ? num2 : num3 );
}
