#include<stdio.h>

/* int main()
{
    int month;
    printf("Specify Month \n");
    scanf("%d",&month);
    switch(month)
    {
        case 4:
                printf("30 Days\n");
                break;
        default:
                printf("Invalid Month");
        case 1:
                printf("31 Days\n");
                break;
        case 2:
                printf("28/29 Days");
    }
    printf("Ouside switch");
} *///if break is not mentioned even though next case is not satified control is given


/* int main()
{
    int month;
    printf("Specify Month \n");
    scanf("%d",&month);
    switch(month)
    {
        case 4:
        case 6:
        case 9:
        case 11:
                printf("30 Days\n");
                break;
        default:
                printf("Invalid Month");
                break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                printf("31 Days\n");
                break;
        case 2:
                printf("28/29 Days");
    }
    printf("Ouside switch");
} */


int main()
{
    typedef enum {JAN=1,FEB,MAR} MONTH;
    int month;
    printf("Specify Month \n");
    scanf("%d",&month);
    switch(month)
    {
        //case 2+5+1/2:   //allowed
        //case 'A':   //allowed
        //case 'A' || 'B' ://allowed
        //case "A":   //not a int constant ///not allowed
        //case 34.56:     //not allowed as it is not an integer
        case JAN:
                    printf("Test");
                    break;
    }
}















