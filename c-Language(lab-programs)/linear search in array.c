#include<stdio.h>
int main()
{
	int n,i,arr[100],found=0,search;
	printf("\nEnter array size:");
	scanf("%d",&n);
	printf("\nEnter %d values :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}    
	printf("\nEnter searching element:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==arr[i])
		{
			printf("\nSearching element found at location :%d",i);
			found=1;
			break;
		}
	}
	if(found==0) printf("\nSearching element is not found");
	return 0;
}
