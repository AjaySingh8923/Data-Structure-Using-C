// Mahajan Computers since 1998
include <stdio.h>
#include <stdlib.h>
int main()
{
int *values ; // declaring array values through pointer notation
values = (int *)malloc(sizeof(int)*3);
int c ;
for (c=0;c<3;++ c)
{ I
printf("values[%d] = ",c);
scanf("%d",&values[c]);
}

values = (int * realloc(values, sizeof(int)*5);
printf("\n____________________________________\n\n");
for (c=3;c<5;++ c)
{
printf("values[%d] = ",c);
scanf("%d",&values[c]);
}
printf("\n____________________________________\n\n");
for (c=0;c<5;++ c)
{
printf("values[%d] = ",*(values+c));}//values [c]
}