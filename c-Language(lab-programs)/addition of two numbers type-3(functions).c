#include<stdio.h>
void add(int x,int y)
{
	int c;
	c=x+y;
	printf("%d",c);
}
int main()
{
	int a,b;
	printf("\nEnter a b values:");
	scanf("%d %d",&a,&b);
	add(a,b);
	return 0;
}