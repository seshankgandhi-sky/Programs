#include<stdio.h>
int main()
{
	int i,n,r[n],s=0;
	printf("\nEnter n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter value at r[%d] position:",i);
		scanf("%d",&r[i]);
	}
	printf("\n ARRAY ELEMENTS ARE:");
	for(i=0;i<n;i++)
	{
		s=s+r[i];
	}
	printf("\nSum of the array digits is:%d",s);
	return 0;
}
