#include<stdio.h>

/* int main()
{
    signed char ch = 'A';
    while(ch<=255)  //-128 to 127
    {
        printf("%d %c\n",ch,ch);
        ch++;
    }
} */

/* int main()
{
    int a = 3;
    while(a--) //while(3) a=2 //while(2) a=1 //while(1) a=0 //while(0) a=-1 
    {
        printf("%4d",a) ;//2 //a=1 //a=0
    } 
    printf("outside a = %d\n",a); //a=-1
} */

/* int main()
{
    int a=3;
    while(a--);  //while(3) a=2 //while(2) a=1 //while(1) a=0 while(0) a=-1
        printf("%4d",a);
    
    printf("outside a = %d\n",a);
}
 */

/* int main()
{
    int a=3,b=1,c;
                            //b=2  //a=2 //B=3 //a=1 //b=4 a=0
    while(b++ <0, a-- >= 1) //while(1 <0 ,3>=1) //while(2 <0 ,2>=1) //while(3 <0 ,1>=1) 
    {           ////while(4 <0 ,0>=1)
        c= a / b;   //c = 2 / 2  //c=1 /3 //c=0/4
        printf("%d / %d = %d\n",a,b,c);
        
    }
}
 */
/* 
int main()
{
    int a=3,b=1,c;
                            //b=2  //a=2 //B=3 //a=1 //b=4 a=0
    while(b++ <0, a-- >= 1) //while(1 <0 ,3>=1) //while(2 <0 ,2>=1) //while(3 <0 ,1>=1) 
    {           ////while(4 <0 ,0>=1)
        c= b/a;   //c = 2 / 2  //c=3 /1 //c=4/0
        printf("%d / %d = %d\n",a,b,c);
    }
    printf("\nOutside ...");
} */


/* int main()
{
    int a=3,b=1,c;
                            //b=2  //a=2 //B=3 //a=1 //b=4 a=0
    while(b++ <0, a-- >= -2) //while(1 <0 ,3>=1) //while(2 <0 ,2>=1) //while(3 <0 ,1>=1) 
    {           ////while(4 <0 ,0>=1)
        if(a==0)
            break;
        c= b/a;   //c = 2 / 2  //c=3 /1 //c=4/0
        printf("%d / %d = %d\n",a,b,c);
    }
    printf("\nOutside ...");
} */

/* int main()
{
    int a=3,b=1,c;
                            //b=2  //a=2 //B=3 //a=1 //b=4 a=0
    while(b++ <0, a-- >= -2) //while(1 <0 ,3>=1) //while(2 <0 ,2>=1) //while(3 <0 ,1>=1) 
    {           ////while(4 <0 ,0>=1)
        if(a==0)
            continue;
        c= b/a;   //c = 2 / 2  //c=3 /1 //c=4/0
        printf("%d / %d = %d\n",a,b,c);
    }
    printf("\nOutside ...");
}
 */

/* int main()
{
    int a=3,b=1,c;
                            //b=2  //a=2 //B=3 //a=1 //b=4 a=0
    while(b++ <0, a-- >= -2) //while(1 <0 ,3>=1) //while(2 <0 ,2>=1) //while(3 <0 ,1>=1) 
    {           ////while(4 <0 ,0>=1)
        if(a==0)
            return 0;
        c= b/a;   //c = 2 / 2  //c=3 /1 //c=4/0
        printf("%d / %d = %d\n",a,b,c);
    }
    printf("\nOutside ...");
} */


int main()
{
    int a=1;
    START:
        if(a<=3)
        {
            printf("a=%d\n",a);
            a++;    
            goto START;
        }
        else
            goto EXIT; //label definition should be in same scope
    EXIT:
        printf("5 mins Break");

}

void fun()
{
    goto EXIT;
    EXIT:
        printf("5 mins Break");

}


