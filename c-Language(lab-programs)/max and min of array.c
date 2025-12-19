#include<stdio.h>
int main()
{
	int n,i,arr[100],max,min;
	printf("Enter array size=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter value at position arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max) max=arr[i];
		if(arr[i]<min) min=arr[i];
	}
	printf("\n max value is =%d",max);
	printf("\n min value is =%d",min);
	return 0;
}
