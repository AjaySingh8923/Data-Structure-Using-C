//////////// Implementation Program of Linear search
#include<stdio.h>
#include<conio.h>
int main()
{
 int sc[10],i,val;
 
 printf("\n Enter array elements:\n");
 for(i=0;i<10;i++)
 //{printf("enter %d number : ",i+1 );}
 scanf("%d",&sc[i]); 
 
 printf("\nEnter number to find:");
 scanf("%d",&val);
 
 for(i=0;i<10;i++)// search value
 if(sc[i]== val)
   {printf("\nExists at location %d",i+1);
       break;// to exit from Loop
   }
   
if(i==10)
 printf("\n %d This value doesn not exist");
 getch();
}
