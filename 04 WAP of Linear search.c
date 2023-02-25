/*WAP of Linear search*/
#include<stdio.h>
int main()
{
int a[5],count,val;
for(count=0;count<5;++ count)
{
printf("a[%d]=",count);
scanf("%d",&a[count]);
}

printf("Enter the value to search");
scanf("%d",&val);
for(count=0;count<5;++ count)
   {
    if(val==a[count])
    {
        printf("Found at location number %d ",count+1);
    break;// takes the control out of the Loop block
    }// end of if block
        }// end of for Loop
   if(count == 5)
   printf("No such value exists in the array ....");
   }