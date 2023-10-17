#include<stdio.h>
//  A                   //1
//  A   B               //2
//  A   B   C           //3
//  A   B   C   D       //4
//  A   B   C   D   E   //5

int main()
{
    int r,c,space=10;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=space;c++)
        {
            printf(" ");
        }
        space-=2;
        for(c=r;c>=1;c--)
        {
            printf("%2c",64+c);
        }
        for(c=1;c<=r;c++)
        {
            printf("%2c",64+c);
        }
        printf("\n");
    }
}