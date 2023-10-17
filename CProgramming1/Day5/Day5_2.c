#include<stdio.h>

/* int main()
{
    char ch;
    printf("Specify a character \n");
    ch = getchar();
    if(ch>=65 && ch<=90);
    printf("Is UpperCase Character\n"); //this line is not part of if
} */

/* int main()
{
    char ch;
    printf("Specify a character \n");
    ch = getchar();
    if(ch>=65 && ch<=90)
       printf("Is UpperCase Character\n"); //this line is part of if
} */

/* int main()
{
    char ch;
    printf("Specify a character \n");
    ch = getchar();
    if(ch>=65 && ch<=90)    //{} brackets are not mentioned only single statement followed by if is part of if true block
       printf("Is UpperCase Character\n"); //this line is part of if
    printf("After Toggle a case %c\n",ch+32);//this is not part of if
} */

/* int main()
{
    char ch;
    printf("Specify a character \n");
    ch = getchar();
    if(ch>=65 && ch<=90)    //{} brackets are  mentioned all statements followed by if are part of if true block
    {
        printf("Is UpperCase Character\n"); //this line is part of if
        printf("After Toggle a case %c\n",ch+32);//this is not part of if
    }
} */

//accept a number from user and show if it +ve or -ve
/* int main()
{
    int num;
    printf("Specify number \n");
    scanf("%d",&num);
    if(num > 0)
        printf("number %d is +ve\n",num);
    else
        printf("number %d is -ve\n",num);
}
 */

int main()
{
    int num;
    printf("Specify number \n");
    scanf("%d",&num);

    num > 0 ? printf("%d is +ve\n",num) : printf("%d is -ve\n",num); 
}


