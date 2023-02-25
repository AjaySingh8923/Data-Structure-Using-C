/* WAP that reads 3 variables and passes them to function that called
and returns their sum |*/
#include <stdio.h>
int main()
{
int a,b,c,sum ;
int sumfnc(int,int,int); // function prototype (function declaration)
printf("Enter the values of a,b and c");
scanf("%d%d%d",&a,&b,&c);
sum=sumfnc(a,b,c); // calling the function by passing 3 arguments (passing    argrumennt )
printf("Sum = %d",sum);
}
// following is the definition of the function sumfnc()
int sumfnc(int a1,int b1,int c1)//here a1,b1,c1 are formal parameters(dummy)
{
	int total;
	total=a1+b1+c1;
	return total;
}