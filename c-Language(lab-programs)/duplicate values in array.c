#include<stdio.h>
int main()
{
	int n,i,j,arr[100],found=0;
	printf("Enter n value=");
	scanf("%d",&n);
	printf("\nEnter %d value=",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nDuplicate values are:");

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]=arr[j])
			{
			printf("\t%d",arr[i]);
			found=1;
			break;
			}
		}
	}
	if(found==0) printf("\n No duplicate values");
}
