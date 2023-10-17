#include<stdio.h>
//example of function do not take any argument and function do not return any value 
void display(void); //declaration

//display a character *
int main(void) //main here do not take any argument
{
    display(); //call to a function
}

//in return type void indicates after completion function do not return any value
void display(void) //display here is not taking any input
{
    printf("*");
}//function definition