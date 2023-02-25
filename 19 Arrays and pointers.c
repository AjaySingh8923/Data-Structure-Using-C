//WAP that illustrates the fact that An array name is pointer to base address
#include <stdio.h>
int main()
{
int arr[]={100,200,900},i;
printf("Base address = %u\n",arr);
/*
printf("Address of second element arr[1] = %u\n",arr+1);// Add 4 byte 
printf("Address of third element arr[2] = %u\n",arr+2);//Add 2x4 byte
printf("Value of the first element = %d\n",*arr);
printf("Value of the second element = %d\n",*(arr+1));
printf("Value of the third element = %d\n",*(arr+2)); 

my code

for(i=0;i<3;++i){
	printf("Adress of %d element arr[%d] : %u\n ",i+1,i+1,(arr+i));
	printf("value of %d element          : %u\n ",i+1,*(arr+i));
}
}
*/
for (i=0;i<3;++ i)
{
printf("%u = %d\n",(arr+i),*(arr+i));

}
}