/* WAP that creates a students structure , reads it's members viz. reg
marks in 3 subjects. Calculate and display percentage of marks */
#include <stdio.h>
int main() I
{
struct students
{
unsigned long reg_no ;
float mk1,mk2,mk3 ;
} svar;
// struct students svar ; // decl. of structure variable
float pc ;
printf("Enter the registration number,marks in 3 subjects ");
scanf("%lu%f%f%f",&svar.reg_no,&svar.mk1,&svar.mk2,&svar.mk3);
pc=(svar 00:30+svar.mk2+svar.mk3)/300 * 100 :
}