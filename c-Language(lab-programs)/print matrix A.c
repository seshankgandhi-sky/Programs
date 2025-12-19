#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j;
	printf("\nEnter r,c values:");
	scanf("%d %d",&r,&c);
	printf("\nEnter %d elements in a matrix:",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);	
		}	
	}
	printf("\nMatrix A:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}