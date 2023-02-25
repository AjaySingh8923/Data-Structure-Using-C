//WAP a program that demonstrates the working of call by reference
#include <stdio.h>
int main()
{
void somedata(int *,float *) ; // function prototype
int a=100 ;
float b=200.0 ;
somedata(&a,&b) ;// Call by reference(passing the addresses of arg
printf("\n values of a and b after returnung from function = %d\t
}
// following is the definition(body) of the function somedata()
void somedata(int *al, float *b1)
{
	*a1=*a1+100;// same as *a1+=100; *a1 means value store at a1
    *b1=*b1*2;// same as b=b*2;
}