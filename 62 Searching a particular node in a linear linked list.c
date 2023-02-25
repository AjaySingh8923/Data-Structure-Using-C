//Searching a node ///
#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
//#include <alloc.h>
typedef struct linklist
{
int no;// or data
struct linklist *link;
} node;
char ch;
node *create(node *start)
{
node *temp,*P ;
ch='y';
// clrscr();
printf("\n\t\t **** INPUT BLOCK ****\n");
if(start != NULL) {
printf("\n\n\t **** LIST ALREADY EXIST *****");
getch();
return(start);}
fflush(stdin);
while(ch =='y')
{
temp=(node *)malloc(sizeof(node));
printf("\n\t Enter the no :==> " );
scanf("%d",&temp->no);
temp->link = NULL;
if(start == NULL)
 p=start=temp;
else
{
p->link=temp;
p=temp;
}
fflush(stdin);
printf("\t Do you want to continue /n) ? : ");
ch=getchar();
}// end of loop
return (start);
}
void print(node *start)
{
node *temp;
system("cls") ;
printf("\n\n Base address Number Link");
printf("\n ==================== ===");
for(temp=start;temp != NULL;temp=temp->link)
printf("\n%10u %10d %10u", temp,temp->no,temp->link);
printf("\n\n\t Press any key to goto MAIN BLOCK .....");
getch( );
return;
}
node *insf(int item ,node *start)
{
	
	node *p ;
p=(node *) malloc(sizeof(node)); // creating the new node using dyn
p->no=item; // assigning value to new node
p->link=start; // assiging start to Link of new node
start=p; // now new node is the first node
printf("\n\n\t Element is succesfully Inserted ");
getch( ) ;
return(start);
}


node *search1(int item, node *start)
{
node *temp;
for(temp=start;temp != NULL;temp=temp->link)
{
if(temp->no == item) // if found
return(temp);
}
return(NULL); // not found then return NULL
}

int main()
{
node *start;
int item,op ;
start=NULL;
while(1) // infinite Loop
{
system("cls") ; // clears the screen
printf("\n **************** Menu ***************");
printf("\n1) Create the linked list");
printf("\n2) Insert a new node in the beginning");
printf("\n3) search a node");
printf("\n4) Display the linked list");
printf("\n5) Exit");
printf("\nEnter your option please ");
scanf("%d",&op);
switch(op)
{
case 1:
start=create(start) ;
break;
case 2:
	printf("Enter the value");
	scanf("%d",&item);
	start=insf(item,start);
	break;
	
case 3:
 printf("\n\n\t Enter the number to be found ==> ");
 scanf("%d",&item);
 temp=search1(item,start);
 if(temp != NULL)
 {
 printf("\n\n\t The number is found");
 printf("\n\n\t The address of location is = %d",temp);
 }
 else
 printf("\n\n\t Number not found in the linklist ");
 getch();
 break ;	
case 4:
	print(start);
	break;
case 5: 
exit(0);//terminates the program
}//end of switch case
}//end of loop
}//end of main()
