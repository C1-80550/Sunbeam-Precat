#include<stdio.h>
//int getchar(void);
/* int main()
{
    char ch;
    int num ;
    printf("Specify Character \n"); //formatted function
    ch = getchar(); //unformatted function
    printf("Specify number \n");
    scanf("%d",&num);
    printf("ch =%c num=%d \n",ch,num);
} */

int main()
{
    char ch;
    int num ;
    printf("Specify number \n");
    scanf("%d",&num);
 
    printf("Specify Character \n"); //formatted function
    scanf("%*c"); //supress a character from storage
    ch = getchar(); //unformatted function
 
    printf("ch =%c num=%d \n",ch,num);
}