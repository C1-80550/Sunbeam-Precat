#include<stdio.h>

//conventionally if no.of iterations are not aware in advance then use while / do while loop

int main()
{
    char ch;
    int num;

    printf("Specify a Character\n");
    ch = getchar();

    printf("Specify a Number \n");
    scanf("%d",&num); //1. initial state

    //num = -1;
    while(num>=1) //2. on entry expression 
    {
        printf("%c",ch);
        //num--; //3. modification statement
    }   
    printf("outside num = %d \n",num);
}