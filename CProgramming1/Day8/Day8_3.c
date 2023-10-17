#include<stdio.h>

typedef enum {EXIT,SUMOFDIGIT,REVERSE,PALINDROM,ARMSTRONG}MENU;

int main()
{
    MENU mchoice;
    int onum,num,rem,sum;
    do
    {
        printf("0. Exit\n");
        printf("1. Find sum of Digits \n");
        printf("2. Find Reverse Number \n");
        printf("3. Conclude Palindrom Y/N \n");
        printf("4. Conclude Armstrong Y/N \n");
        scanf("%d",&mchoice);
        if(mchoice!=EXIT)
        {
            printf("Specify Number \n");
            scanf("%d",&onum);//123
        }
        switch(mchoice)
        {
            case SUMOFDIGIT:
                            sum = 0;
                            num = onum;// num=123
                            while(num!=0) //while(123!=0) //while(12!=0) while(1!=0) //while(0!=0)
                            {
                                rem = num%10;   //rem = 123%10=3    //rem=12%10=2 //rem =1%10=1
                                sum=sum + rem; //sum=0+3=3 //sum=3+2=5 //sum=5+1=6
                                num = num / 10;//num =123/10=12 //num=12/10 num=1 //num=1/10=0
                            }
                            printf("Sum = %d \n",sum);
                            break;
            case REVERSE:
                            printf("Reverse");
                            break;
            case PALINDROM: 
                            printf("Palindrom");
                            break;
            case ARMSTRONG:
                            printf("Armstrong");
                            break;
        }
    }while(mchoice!=EXIT);
}