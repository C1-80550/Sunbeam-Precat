#include<stdio.h>

int main()
{
    char ch ;
    printf("Specify character \n",ch);
    ch = getchar();
    if(ch>=65 && ch<=90)
        printf("%c is Upper Case Character\n");
    else if (ch>=97 && ch<=122)
        printf("%c is lower Case Character\n",ch);
    else if(ch>=48 && ch<=57)
        printf("%c is Digit Character\n",ch);
    else
        printf("%c is speacial Character\n",ch);

    printf("Outside if....\n");
}