#include<stdio.h>
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
	
}
int main()
{
	int n,result;
	printf("\nEnter n value:");
	scanf("%d",&n);
	result=fact(n);
	printf("\n %d Factorial is %d",n,result);
	return 0;
}