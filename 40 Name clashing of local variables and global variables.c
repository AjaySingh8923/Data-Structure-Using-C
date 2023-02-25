
//Name clashing of local variables and global variables
/*
#include<stdio.h>
int n=10;//global variable
int main()
{
int n=90;//local variable
printf("%d\n",n);
}
/*A sample program that illustrates that override local variables so that  we can access global variable so we can access global variable   */
#include<stdio.h>
int n=10;//global variable
int main()
{
int n=90;//local variable
printf("%d\n",n);
{
	extern int n;
	printf("%d\n",n);
}
}