#include<stdio.h>

/* int main()
{
    int num1,num2,num3;
    float avg;
    printf("Specify number \n");
    scanf("%d",&num1);
    printf("Specify number \n");
    scanf("%d",&num2);
    printf("Specify number \n");
    scanf("%d",&num3);
    avg = (num1+num2+num3)/3;
            //(int + int ) + int / int      3 + 5 + 9 / 3
               // int + int                 8 + 9 / 3
                // int / int                17 / 3
                // int                      5
                //float = int
    printf("Average = %10.2f \n",avg);
    return 0;
}  */

/* int main()
{
    char ch = 65; //implicit typecasting
    //char = int //here int will be typecasted to char //implicit typecasting
    printf("ch = %d \n",ch); //after downcasting no loss in data //65 is accomadable in 1 byte
    ch = 789 ;//here after downcast loss data is expected
    printf("ch = %d \n",ch);      
} */

/* int main()
{
    int val = 45.67; //implicit typecasting
    // int = double //there will be loss of data
      //val = 45
    float var = 45.67;  //no loss of data as value is accomadable in var
    //float = double 
    printf("val = %d var =%.2f\n",val,var);
} */

/* int main()
{
    float var = 5; //implicit typecasting
    //float = int   //data is promoted from int to float //no loss of data
    printf("var = %10.2f\n",var);
} */

/* int main()
{
    int num1,num2,num3;
    float avg;
    printf("Specify number \n");
    scanf("%d",&num1);
    printf("Specify number \n");
    scanf("%d",&num2);
    printf("Specify number \n");
    scanf("%d",&num3);
    avg = ((float)(num1+num2+num3))/3;
            //(float)int / int  //explicit typecasting
            //float / int  //here left and right operand data type is diffrent
                           //compiler will convert implicitly lower type of operand into 
                           //higher type 
            //float / float //right operand will implicitly promoted to float
            //float
    printf("Average = %10.2f \n",avg);
    return 0;
}  */

/* int main()
{
    int num1,num2,num3;
    float avg;
    printf("Specify number \n");
    scanf("%d",&num1);
    printf("Specify number \n");
    scanf("%d",&num2);
    printf("Specify number \n");
    scanf("%d",&num3);
    avg = (num1+num2+num3)/3.0;
            //int / double  //implicit typecasting
            //int / double  //here left and right operand data type is diffrent
                           //compiler will convert implicitly lower type of operand into 
                           //higher type 
            //double / double //left operand will implicitly promoted to double
            //double
    printf("Average = %10.2f \n",avg);
    return 0;
}  */

/* int main()
{
    float var = 45.67f;
    //float = float // f here is type character added post to operand converts 
                 //explicitly double type data into float
    int a = 100L;//             //explicitly int type data into long
} */


/* int main()
{
    short int val1 ; //2 bytes   -32768 to 32767
    int val2; //4 bytes 
    long int val3;
    printf("size=%u size=%u size=%u\n",sizeof(val1),sizeof(val2),sizeof(float));
    printf("sizeof(45.67) = %u \n",sizeof(45.67));
    printf("sizeof(45.67f)= %u \n",sizeof(45.67f)); 
}
 */

/* int main()
{
    char ch = 'D';
    printf("sizeof(ch)=%u \n",sizeof(ch)); //operand is ch which is variable 
    printf("sizeof(char)=%u \n",sizeof(char)); //opearnd is data type keyword
    printf("sizeof('A')=%u \n",sizeof('A')); //operand is hardcoded data
}
 */

/* int main()
{
    float fvar = 34.45;
    printf("sizeof(fvar)=%u \n",sizeof(fvar)); //operand is fvar which is variable 
    printf("sizeof(float)=%u \n",sizeof(float)); //opearnd is data type keyword
    printf("sizeof(34.45)=%u \n",sizeof(34.45)); //operand is hardcoded data
}
 */
/* int main()
{
    float f = 45.67;
    double d = 1.0;
    int a = 3;
    printf("size = %u \n",sizeof(f+d/a)); 
} */

int main()
{
    float f = 45.67;
    double d = 1.0;
    int a = 3;
    double x = 0;
    printf("size = %u \n",sizeof(x = f+d/a)); 
    printf("x= %.2f",x);
}
//sizeof is a operator which is processed at "COMPILE TIME"









