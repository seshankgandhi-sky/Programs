#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],mul[100][100],i,j,k,r1,c1,r2,c2;
	printf("Enter row and column sizes:");
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
	printf("Enter the %d elements:",r1*c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the %d elements:",r2*c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(c1!=r2)
	{
		printf("\nThe matrix multiplication is not possible");
	}
	else
	{
		for(i=0;i<r1;i++)
	    {
		    for(j=0;j<c2;j++)
		    {
		    	mul[i][j]=0;
		    	for(k=0;k<c1;k++)
		    	{
		    		mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
				}
				
		    }
	    }

    }
    printf("The multiplication of a matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}