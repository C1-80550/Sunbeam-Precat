#include<stdio.h>
#include<string.h>

size_t  mystrlen(const char *p)
{
    char *k = p;
    while(*p !=NULL)
    {
        p++;
    }
    return p - k;
}

int main()
{
    char s1[20];
    size_t len;
    printf("Specify string \n");
    gets(s1);
    len = strlen(s1);
    printf("length = %u\n",len);
    len = mystrlen(s1);
    printf("length = %u\n",len);

}