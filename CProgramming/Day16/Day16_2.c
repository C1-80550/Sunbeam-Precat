#include<stdio.h>

void accept_array_elements(int p[2][3])//(int **p)
{
    int r,c;
    printf("\nSpecify Array Elements \n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&p[r][c]);
        }
        printf("\n");
    }
}

void display_array_elements(int p[2][3])//(int **p)
{
    int r,c;
     printf("\nArray Elements are \n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%4d %u ",p[r][c],&p[r][c]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[2][3];
    accept_array_elements(arr);
    display_array_elements(arr);
}