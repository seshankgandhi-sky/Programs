#include<stdio.h>
int main()
{
	int i,n,r[4];
	printf("\nEnter n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter value at r[%d] position:",i);
		scanf("%d",&r[i]);
	}
	printf("\n Reserve of the given array is:");
	for(i=n-1;i>0;i--)
	{
		printf("\t%d",r[i]);
	}
	return 0;
}
