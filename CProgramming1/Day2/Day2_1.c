    #include<stdio.h> //this statement will be processed by preprocessor
    //1. declaration of library functions
    //2. definition of symbolic constants/macros
    //3. typedefinitions
    //4. data type declarations
    /*
        Write a program to test compiler 
        hello world
    */
   //int printf(const char *,...); //declaration
    
    //main is identifier //main is function
    //int here is return type of function
/*     int main() //entry point function
    {
        printf("\t\tHello World"); //call to library function 
        return 0; //0 indicates sucessful completion
    }//main is user defined function //called by system

    void show()
    {
        printf("Show ()");        
    }


 */

    void main(void) //void here indicates function do not return any value
    {               //void inside () indicates function do not take any input 
        printf("One \n");
        printf("Twoooo \n");
        //return ; //it moves execution control outside function forcefully
        printf("Three \n");
        printf("Four \n");
    }//if return is not mentioned execution control will take out of function automatically










