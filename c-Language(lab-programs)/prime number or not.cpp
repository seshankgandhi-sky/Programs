#include<stdio.h>
int main()
{
	int n,i=0;
	printf("\nEnter n value:");
	scanf("%d",&n);
	for(int a=1;a<=n;a++)
	{
		if(n%a==0)
		i++;
	}
	if(i==2)
	{
		printf("\nPrime number");
	}
	else
	{
		printf("\nNot a Prime number");
	}
	return 0;
}
