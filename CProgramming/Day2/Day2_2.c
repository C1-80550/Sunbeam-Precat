#include<stdio.h>

int main()
{
    int num;//local variable //request to memory //will receive memory of 4 bytes from stack section
            //default value will be garbage
    printf("\t\tSpecify number \n");
    scanf("%d",&num); //accept input from user
    printf("\t\tnum = %d Value",num);

    printf("num=%d num=%c num=%o num=%x \n",num,num,num,num);
}

// 00000000 00000000 00000000 01000001