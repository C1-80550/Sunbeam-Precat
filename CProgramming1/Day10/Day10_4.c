#include<stdio.h>

//accept a character from user and display it on console
char accept(void);
void display(char c); //void display(char);
int main()
{
    char ch;
    //accept
    ch = accept(); //call to function //as function return value catch in some location
    display(ch);//ch here is called as actual argument which is passed by value
    //as display function do not return any value no need to catch
}//calling funtion

void display(char c)
//when function is called and if any actual arguments are given then on entry of function
//formal parameter will receive new memory and actual argument ch here will be copied in c 
{
    printf("%c\n",c);
}//called function definition //function takes argument here but do not any value

char accept(void) //function do not take any argument and function returns a value
{
   char c;
   printf("Specify character \n");
   c = getchar();
   return c;
}//called function definition

