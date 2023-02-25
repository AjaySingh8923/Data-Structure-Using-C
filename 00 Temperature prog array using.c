
// WAP that reads the temperatures ofacity for the last 10 days into an array.
                                                  
#include<stdio.h>
int main()
{
   float tmp[10];
   int n=0;
   while(n<5)
   {
       printf("Enter the temperature of day %d : ",n+1);
       scanf("%f",&tmp[n]);
       ++n;
   }
n=0;// reinitialising the value ofnagain to0.
while(n<5)
{ printf("Temperature of day %d=%.2f\n ",n+1,tmp[n]);
    ++n;
     }      
 }