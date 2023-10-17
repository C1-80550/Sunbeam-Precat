#include<stdio.h>

/* int main()
{
    char ch;
    printf("Specify Chaarcter \n");
    ch = getchar();
    if(ch>=65 && ch<=90)
    {
        printf("Upper Case Character");   
    }
} */

/* int main()
{
    char ch;
    printf("Specify Chaarcter \n");
    ch = getchar();
    if(ch>=65)
    {
        if(ch<=90)
        {
            printf("Upper Case Character");   
        }//inner if
    }//outer if
} */

//conclude given year is leap year or not
/* int main()
{
    int year;
    printf("Specify Year \n");
    scanf("%d",&year);
    if( (year%4==0 && year%100!=0) || (year%400==0))
        printf("%d is a leap Year",year);
    else
        printf("%d is not a leap Year",year);
}    */

int main()
{
    int year;
    printf("Specify Year \n");
    scanf("%d",&year);
    
    if(year%400 ==0)
    {
        printf("%d is a leap Year",year);
    }
    else
    {
        if(year%4==0)
        {
            if(year%100!=0)
                printf("%d is a leap Year",year);
            else
                printf("%d is a not leap Year",year);    
        }
        else 
                printf("%d is a not leap Year",year);
    }

}   



