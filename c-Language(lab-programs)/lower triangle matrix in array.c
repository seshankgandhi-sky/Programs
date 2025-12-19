#include<stdio.h>
int main()
{
	int a[100][100],n,i,j;
	printf("\nEnter n value:");
	scanf("%d",&n);
	printf("\nEnter %d elements in a matrix:",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);	
		}	
	}
	int lower=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>i&&a[i][j]!=0||j<=i&&a[i][j]==0)
			{
				lower=0;
				break;	
			}
		}
	}
	if(lower==1) printf("Lower triangle of matrix");
	else printf("Not lower triangle of matrix");
	return 0;
}