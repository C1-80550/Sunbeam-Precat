#include<stdio.h>

int main()
{
    char ch;
    FILE *fp;
    //fp = fopen( "d:\\smita\\precat-pm24\\abc.txt", "");
    fp = fopen( "abc.txt", "w");//load file in memory
    //if file is not successfully associated to fp in such case fopen will return NULL
    if(fp==NULL)
    {
        printf("Write Access Denied !!!");
        return 0;
    }

    printf("Specify file data \n");
    
    while((ch = getchar())!=EOF)
    {
        fputc(ch,fp); //pick data from ch memory and write to a file which is associated to fp

    }

    
    fclose(fp); //unload file from memory
}