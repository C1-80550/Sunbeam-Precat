#include<stdio.h>

/* int main()
{
    int centerid = 442; //int via centerid is modifiable
    printf("centerid = %d \n",centerid);
    centerid++;
    printf("centerid = %d \n",centerid);
} */

/* int main()
{
    const int centerid = 442; //int via centerid is const
    printf("centerid = %d \n",centerid);
    centerid++; //centerid = centerid + 1
    printf("centerid = %d \n",centerid);
} */


/* int main()
{//it is compulsory to initialise const identified memory at the time of declaration 
    const int centerid;
    centerid = 442;
    printf("center id \n",centerid);
} */


/* int main()
{
    const int centerid = 442; //int via centerid is const
    printf("centerid = %d \n",centerid);
    //centerid++; //centerid = centerid + 1
    
    int *p = &centerid;
    *p = 443;
    printf("centerid = %d \n",centerid);
} */


/* int main()
{
    const int centerid = 442; //int via centerid is const
    printf("centerid = %d \n",centerid);
    //centerid++; //centerid = centerid + 1
    
    const int *p = &centerid;
    *p = 443;       //value at p is constant
    printf("centerid = %d *p=%d \n",centerid,*p);

    int num = 789;
    p = &num; //p here is not constant
    printf("centerid = %d *p=%d \n",centerid,*p);

    *p = 444;
}
 */


int main()
{
    const int centerid = 442; //int via centerid is const
    printf("centerid = %d \n",centerid);
    //centerid++; //centerid = centerid + 1
    
    const int * const p = &centerid;
    *p = 443;       //value at p is constant
    printf("centerid = %d *p=%d \n",centerid,*p);

    int num = 789;
    p = &num; //p here is constant
    printf("centerid = %d *p=%d \n",centerid,*p);

    *p = 444;
}
