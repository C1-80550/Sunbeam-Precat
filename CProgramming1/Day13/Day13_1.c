#include<stdio.h>

/* int main()
{
    int arr1[]; //it is compulsory to provide last dimention at the time of declaration here
    int arr2[2][];
    int arr3[2][2][];
} */

/* int main()
{
    int arr[5]; //requested memory for 5 int elements here
    printf("size = %u \n",sizeof(arr));
} */

/* int main()
{
    int index;
    int arr[5] = {11,22,33,44,55};//list of members are provided at the time declaration
    printf("arr=%u &arr=%u size=%u \n",arr,&arr,sizeof(arr));

    for(index=0;index<5;index++)
    {    
        printf("%d %u \n",arr[index],&arr[index]);
    }
} */

/* int main()
{
    int index;
    //int arr1[];
    //int arr2[2][] = {11,22,33,44,55,66};
    //we can skip last dimention only in case of 1D array providing list of 
    //members are initilised at the time of declaration
    int arr[] = {11,22,33};//list of members are provided at the time declaration
    printf("arr=%u &arr=%u size=%u \n",arr,&arr,sizeof(arr));

    for(index=0;index<5;index++)
    {    
        printf("%d %u \n",arr[index],&arr[index]);
    } //handling array boundry is job of programmer
    printf("Lets see");
}
 */


/* int main()
{
    int index;
    int arr[5] = {11,22,33};//list of members are provided at the time declaration 
                            //but partially in such case remaining eles are set with default value 0
    printf("arr=%u &arr=%u size=%u \n",arr,&arr,sizeof(arr));

    for(index=0;index<5;index++)
    {    
        printf("%d %u \n",arr[index],&arr[index]);
    } 
    printf("Lets see");
}
 */

int main()
{
    int index;
    int arr[5]; 
    printf("arr=%u &arr=%u size=%u \n",arr,&arr,sizeof(arr));
    arr[0]=11;
    arr[1]=22;
    arr[2]=33;
    for(index=0;index<5;index++)
    {    
        printf("%d %u \n",arr[index],&arr[index]);
    } 
}



