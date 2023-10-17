#include<stdio.h>

int main()
{
    int r,c;
    //int arr[2][3]={11,22,33,44,55,66};
    //int arr[2][3]={{11,22,33},{44,55,66}};
    //int arr[2][3]={{11,22},{44,55,66}};
    int arr[2][3]={11,22,33,44,55};
    printf("\nArray Elements are \n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%4d",arr[r][c]);
        }
        printf("\n");
    }

}//2 here repesents no. of rows //3 here repesents no. of columns