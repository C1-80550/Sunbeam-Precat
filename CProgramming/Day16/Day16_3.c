#include<stdio.h>

/* int main()
{
    int arr[2][3] = {{11,22,33},{44,54,66}};
    printf("arr = %u \n",arr); //address of row //address of pointer to int
    printf("*arr = %u \n",*arr); //address of col //address of  int
    printf("**arr = %d \n",**arr); //address of row //address of pointer to int
    printf("size=%u size=%u sizeof(**arr)=%u \n",sizeof(arr),sizeof(*arr),sizeof(**arr));
} */

int main()
{
    int arr[2][3] = {{11,22,33},{44,54,66}};
    printf("arr = %u \n",arr);//100 //address of row //address of pointer to int
    printf("arr+1 = %u \n",arr+1);//100+1=112 //address of row //address of pointer to int
    printf("*(arr+1) = %u \n",*(arr+1));//*(100+1)=*(112)=112 //address of int/colmn
    printf("*(arr+1)+2 = %u \n",*(arr+1)+2);//*(100+1)=*(112)=112+2=120  //address of int/column
    printf("*(*(arr+1)+2) = %d \n",*(*(arr+1)+2));//*(100+1)=*(112)=112+2=*(120)  //int

}