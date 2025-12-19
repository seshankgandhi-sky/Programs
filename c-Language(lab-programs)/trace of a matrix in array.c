#include<stdio.h>
int main()
{
	int a[100][100],i,j,r,c,s=0;
	printf("\nEnter row and column values:");
	scanf("%d %d",&r,&c);
	printf("\nEnter %d elements in a matrix:",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
			s=s+a[i][i];
	}	
	printf("\nTrace of a matrix is=%d",s);
	return 0;
}