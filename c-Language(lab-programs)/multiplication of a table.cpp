#include<stdio.h>
int main()
{
	int n,i=1;
	printf("\nEnter n value:");
	scanf("%d",&n);
	while(i<=12)
	{
		printf("%dX%d=%d\n",n,i,n*i);
		i++;
	}
	return 0;
}
