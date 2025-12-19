#include<stdio.h>
int main()
{
	int *ptr=NULL;
	printf("\n The value of the ptr=%x",ptr);
	printf("\n The address of ptr=%x",&ptr);
	printf("\n The ptr pointing value=%d",*ptr);
	return 0;
}