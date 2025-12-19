#include<stdio.h>
int add(int x,int y)
{
	int c;
	c=x+y;
	return c;
}
int main()
{
	int a,b,z;
	printf("\nEnter a b values:");
	scanf("%d %d",&a,&b);
	z=add(a,b);
	printf("%d",z);
	return 0;
}