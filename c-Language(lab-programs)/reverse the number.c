#include<stdio.h>
int main()
{
	int n,r=0,s=0;
	printf("Enter n value:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("\nThe reverse number is=%d",s);
	return 0;
}
