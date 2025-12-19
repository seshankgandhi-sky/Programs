#include<stdio.h>
void add()
{
	int a,b,c;
	printf("\nEnter a b values:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("%d",c);
}
int main()
{
	add();
	return 0;
}