/* WAP that creates a students structure 2 reads it's members viz. res
marks in 3 subjects. Calculate and display percentage of marks */
#include <stdio.h>
int main()
{ 
struct students
{
unsigned long reg_no ;
float mk1,mk2,mk3 ;
} ; // end of structure specification
struct students svar ; // decl. of structure variable
float pc ;
printf("Enter the registration number,marks in 3 subjects ");
scanf("%lu%f%f%f",&svar.reg_no,&svar.mk1,&svar.mk2,&svar.mk3);
pc=(svar.mk1+svar.mk2+svar.mk3)/300 * 100;
printf("Percentage = %.2f",pc);
}