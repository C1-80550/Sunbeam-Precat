#include<stdio.h>

/* int main()
{   //character array 
    int i;
    char carr[7] = {'T','u','e','s','d','a','y'};
    for(i=0;i<7;i++)
    {
        printf("%c",carr[i]);
    }
} */
//#define NULL 0
/* int main()
{   //string is = character array with sentinel element as NULL  OR 0 OR '\0' 
    int i;
    char carr[8] = {'T','u','e','s','d','a','y',NULL};
    //for(i=0;i<8;i++)
    //{
      //  printf("%c",carr[i]);
    //}
    i=0;
    while(carr[i]!=NULL)
    {
        printf("%c",carr[i]);
        i++;
    }
    printf("String = %s\n",carr);

    printf("String = %s\n",carr+4);
} */


/* int main()
{
    char s1[20] = "Tuesday";    
    printf("String s1 = %s size=%u\n",s1,sizeof(s1));
    char s2[] = "Tuesday";
    printf("String s2 = %s size=%u\n",s2,sizeof(s2));
    char s3[] = "Tues\0day";
    printf("String s3 = %s size=%u\n",s3,sizeof(s3));
    char *s4 = "Tuesday";
    printf("String s4 = %s size=%u\n",s4,sizeof(s4));
    printf(s4);
    printf("Tuesday"+4);
} */

/* int main()
{//scanf terminates on white space or new line character whichever is 
    //encountered input first
    //char s1[20];
    int x,y;
    printf("Specify number \n");
    scanf("%d %d",&x,&y);
    printf("x=%d y=%d \n",x,y);
}
 */


/* int main()
{
    char s1[20];
    printf("Specify string \n");
    scanf("%s",s1);
    printf("String = %s \n",s1);
}
 */
/* int main()
{
    char s1[20];
    printf("Specify string \n");
    scanf("%[A-Z]s",s1); //allowed scan only set of chars which are in A-Z
    printf("String = %s \n",s1);
}
 */

/* int main()
{
    char s1[20];
    printf("Specify string \n");
    scanf("%[^A-Z]s",s1); //allowed scan  set of chars which are other than A-Z
    printf("String = %s \n",s1);
} */

/* int main()
{
    char s1[20];
    printf("Specify string \n");
    scanf("%[^.]s",s1); //allowed scan  set of chars which are other than A-Z
    printf("String = %s \n",s1);
}
 */
/* int main()
{
    char s1[20];
    printf("Specify string \n"); //gets by default takes input from stdin
    gets(s1); //designed to accept string //unformatted function
    printf("String = %s \n",s1);
    printf("Test");
}
 */
int main()
{
    char s1[20];
    printf("Specify string \n");
    fgets(s1,sizeof(s1),stdin); //can be used to take input from any input stream e.g. stdin ,filestream
    printf("String=%s test",s1);
}

