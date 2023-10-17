#include<stdio.h>
typedef enum {EXIT,ACCEPT,DISPLAY,SUM,MIN,MAX,AVERAGE,REVERSE}MENU;

MENU menu_choice()
{
    MENU mchoice;
    printf("0. Exit \n");
    printf("1. Accept Array Elements\n");
    printf("2. Display Array Elements\n");
    printf("3. Find Sum of  Array Elements\n");
    printf("4. Find Minimum value of Array Elements\n");
    printf("5. Find Maximum value of Array Elements\n");
    printf("6. Find Average of Array Elements\n");
    printf("7. Reverse Array Elements\n");
    scanf("%d",&mchoice);
    return mchoice;
}

void accept_array_elements(int p[5],int size)
{
    int index;
    printf("\nSpecify Array Elements \n");
    for(index=0;index<size;index++)
    {
        scanf("%d",&p[index]);
    }
}
void display_array_elements(int p[5],int size)
{
    int index;
    printf("\n Array Elements are \n");
    for(index=0;index<size;index++)
    {
        printf("%4d",p[index]);
    }
}
int main()
{
    MENU mchoice;
    int arr[5];
    while( (mchoice = menu_choice()) !=EXIT)
    {
        switch(mchoice)
        {
            case ACCEPT:
                        accept_array_elements(arr,5);
                        break;
            case DISPLAY:
                        display_array_elements(arr,5);
                        break;
        }
    }
}