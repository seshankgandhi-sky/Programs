#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],r,c,i,j;
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
	printf("Matrix A:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);	
		}	
		printf("\n");
	}
	printf("Transpose of A is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[j][i]=a[i][j];	
		}	
	}
	r=r+c;
	c=r-c;
	r=r-c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);	
		}	
		printf("\n");
	}
	return 0;
}