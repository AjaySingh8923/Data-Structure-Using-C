/* Subtracting two pointer variables 
after literal subtraction, result will be divided by size of the data t */
#include <stdio.h>
int main()
{
int arr[]={100, 200,90,800,1000};
int *a,*b;
a=&arr[4];
b=&arr[2];
int n=&arr[4]-&arr[2];
printf("address of a=%d\n",a);
printf("address of b=%d\n",b);
printf("n = %d\n",n);
//////// /////////// //////// ////////
double amount[]={100.0,200.15,9000.99,1000.11,2500.55} ;
n=&amount[4]-&amount[0];
printf("n = %d\n",n);
}
// u can see it can divided the n by size of data type [byte for ex int has 4 byte] so the answer we get is n/int data type