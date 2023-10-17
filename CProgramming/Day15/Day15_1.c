#include<stdio.h>
#include<string.h>

void mystrcat(char *dest, const char *src)
{
    while(*dest!=NULL)
    {
        dest++;
    }
    while(*src !=NULL)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
} 
int main()
{
    char s1[20];
    char s2[40];

    //++s1; //arays base address is locked //constant 
    printf("Specify source String \n");
    gets(s1);

    printf("Specify destination  String \n");
    gets(s2);
    strcat(s2,s1);
    printf("s1=%s s2=%s \n",s1,s2);
    mystrcat(s2,s1);
    printf("s1=%s s2=%s \n",s1,s2);
}

//s1 - Day
//s2 - Wednes
//s2 =s2 + s1 //to beachieved using strcat


//s2 = s1 //copy processed in case of string to be achieved using strcpy