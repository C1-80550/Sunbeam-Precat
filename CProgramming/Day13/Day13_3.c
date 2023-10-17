#include<stdio.h>

void test_array(int *p,int size)//(int p[5],int size) //int *p 
{
    printf("p=%u &p=%u size=%u \n",p,&p,sizeof(p));
    printf("p[1]=%d\n",p[1]);
    printf("p+1=%u *(p+1)=%d \n",p+1,*(p+1));
    int i=0;
    printf("\nArray Elements are \n");
    while(i<size)
    {
        printf("p+%d=%u *(p+i)",i,p+i,*(p+i)); //p[i]
        i++;
    }
    printf("\nArray Elements are \n");
    int *k=p;
    while(i<size)
    {
        printf("p=%u *p=%d",p,*p);
        p++;    //p = p + 1 //p=100+1=104 //p=104+1=108 //p=108+1=112//p=112+1=116//p=116+1=120
        i++;
    }
    printf("p[-2]= \n",p[-2]); //*(p-2)
    printf("p - k =%d \n",p-100); //120 - 100 = 20 /4 = 5 //no. of elements in between
                           //address of int - address of int 
    //printf("p + k = %d\n",p+k); //addition two address //not allowed
    //printf("p + k = %d\n",*p+*k); //addition of int value //allowed
}
int main()
{
    int arr[5] = {11,22,33,44,55};
    printf("arr=%u &arr=%u size=%u \n",arr,&arr,sizeof(arr));
    test_array(arr,5);
    printf("arr[1]=%d\n",arr[1]);
    printf("arr+1=%u  *(arr+1)=%d \n",arr+1,*(arr+1));

    printf("2+arr=%u  *(2+arr)=%d \n",2+arr,*(2+arr));
    printf("2[arr]=%d \n",2[arr]);
    
    printf("&arr+1=%u",&arr+1);
    return 0;
}