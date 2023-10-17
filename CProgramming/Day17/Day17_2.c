#include<stdio.h>
#include<stdlib.h>

int main()
{
    int eles,*ptr=NULL;
    printf("Specify no. of elements to be processed \n");
    scanf("%d",&eles);
    //1. request/allocate memory at runtime
    
    ptr =(int *) malloc(sizeof(int)*5);

    if(ptr==NULL)
    {
        printf("Not Enough Memory !!!");
        return 0;
    }//memory is not available
    
    //2.if memmory is received then use
    printf("\n ptr=%u &ptr=%u size=%u\n",ptr,&ptr,sizeof(ptr));
    for(int i=0;i<eles;i++)
    {
        *(ptr+i) = i+10;
        printf("%d %u \n",ptr+i,*(ptr+i));
    }
    //3. deallocate memory
    free(ptr); //free(400) //after deallocation of memory ptr here becomes dangling pointer
    ptr=NULL;
}