#include <stdio.h>
int main() 
{
float pmt , roi , sint ;
int tm ;
float getinterest(float, int, float); // function prototype
printf("Enter the principal amount, rate of interest and time");
scanf("%f%f%d",&pmt,&roi,&tm);
sint=getinterest(pmt, tm, roi) ; // calling the function by passing 3 ar
printf("Simple Interest = %.2f",sint);
}
// following is the definition of the function getinterest()
float getinterest(float pmt1, int tm1l,float roil)
{
	float s=(pmt1*tm1l*roil)/100;
	return s;
}