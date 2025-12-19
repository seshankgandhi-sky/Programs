#include<stdio.h>
int main()
{
	int i,n,r[4];
	printf("\nEnter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter value at r[%d] position:",i);
		scanf("%d",&r[i]);
	}
	printf("\n ARRAY ELEMENTS ARE:");
	for(i=1;i<=n;i++)
	{
		printf("%4d",r[i]);
	}
	return 0;
}
