#include<stdio.h>

/* int main()
{
    int num = 789;
    char ch = 'A';

    char *cptr = NULL; //cptr is designed to store address of char
    cptr = &ch;
    printf("ch=%d *cptr=%d\n",ch,*cptr);

    cptr = &num;
    printf("ch=%d *cptr=%d\n",ch,*cptr); //*100
    printf("ch=%d *cptr=%d\n",ch,*(int *)cptr);

} */
//  103      102         101    100                
//000000000 00000000 00000011 00010101

int main()
{
    int num = 789;
    char ch = 'A';

    void *vptr = NULL; //vptr is designed to store address of any type location
    vptr = &ch;
    printf("ch=%d *vptr=%d\n",ch,*(char *)vptr);

    vptr = &num;
    printf("ch=%d *vptr=%d\n",ch,*(int *)vptr); 
   

}

//001000100001