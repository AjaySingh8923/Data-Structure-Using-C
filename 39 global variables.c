/* A sample program demonstrating the working of global variables 
#include <stdio.h>
int n=1000 ;
int main() 
{
void sample();
printf("Value of n3 = %d\n",n);
sample() ; // calling the function
}
// following is the definition(body) of the function sample() 
void sample()
{
void check();// fucntion prototype of check() function
printf("Value of n1 = %d\n",n);
check();// calling check
}
void check() {
printf("Value of n2 = %d\n",n);} */

/* PART 2 GLOBAL VARIABLES
A sample program demonstrating the working of global variables */
#include <stdio.h>
int n=1000 ;
int main() 
{
void sample(); // function prototype
printf("Value of n in main() = %d\n",n);
sample() ; // calling the function
printf("Value of n in main() = %d\n",n);
}
//following is the definition(body) of the function sample() 
void sample() {
printf("Value of n in sample()= %d\n",n);
check() ; // calling the function
printf("Value of n in sample() = %d\n",n);
}
//end of definition of sample() function
void check() {
printf("Value of n in check()= %d\n",n);
n+=500; // calling the function
printf("Value of n in check() = %d\n",n);
}
//end of definition of check() function