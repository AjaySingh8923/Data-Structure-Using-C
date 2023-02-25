/* Sample program to show the working of Local variables */
#include <stdio.h>
int main()
{
//int n=200 ; //local to calling function main()
void sample() ; // function prototype
sample(); // calling the function
// printf("Value of n = %d",n);
}
/* following is the definition of the function sample() */
void sample()
{
int n=100 ;//local to calling function sample()
printf("Value of n = %d",n);
}//end of declaration (body) of the function sample