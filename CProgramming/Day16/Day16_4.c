#include<stdio.h>

//argc here will collect count of argument given to main
//argv is argument vector //will collect each argument given to main in string format
/* int main(int argc,char **argv) //char *argv[]
{
    printf("Argument count = %d\n",argc);
    printf("\narguments given to main are \n");
    for(int i=0;i<argc;i++)
    {
        printf("%s \n",argv[i]);
    }
} */


/* int main(int argc,char **argv,char **env) 
{
    printf("\nEnvionement Variables \n");
    for(int i=0;i<32;i++)
    {
        printf("%s \n",env[i]);
    }
} */

int main(int argc,char **argv)
{
    int n1,n2,sum;

    if(argv[2][0]=='+')
        sum = atoi(argv[1]) + atoi(argv[3]);
    
    printf("sum = %d \n",sum);
}



