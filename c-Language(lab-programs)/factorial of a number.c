#include<stdio.h>
int main()
{
	int n,a,p=1;
	printf("\nEnter n value:");
	scanf("%d",&n);
	for(a=n;a>=1;a--)
	{
		p=p*a;
	}
	printf("\n%d factorial is:%d",n,p);
	return 0;
}
