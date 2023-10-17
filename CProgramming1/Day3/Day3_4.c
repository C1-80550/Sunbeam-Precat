#include<stdio.h>

/* int main()
{
    char ch1='A'; //-128 to 127
    char ch2 = 66;
    printf("ch1=%c ch2=%c \n",ch1,ch2);   
}
 */
/* int main()
{
    char ch1='A'; //-128 to 127
   // char ch2 = 127;
    //char ch2 = 128;
    char ch2 = 789; //001100010101
    printf("ch1=%d ch2=%d \n",ch1,ch2);   
}
 */

int main()
{
    signed char ch1 = 'A';
    signed char ch2 = 'B';
    unsigned char ch3;
    ch3 = ch1 + ch2;
    printf("%d + %d = %u \n",ch1,ch2,ch3);
}


