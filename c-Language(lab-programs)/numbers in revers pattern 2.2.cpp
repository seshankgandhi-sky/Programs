#include<stdio.h>
int main()
{
    int n,i,j;
	printf("\nEnter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		 {
			printf("%d ",i);
		 }
		 printf("\n");
	}
	return 0;
}
