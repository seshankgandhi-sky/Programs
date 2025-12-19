#include<stdio.h>
int main()
{
	int arr[5]={ 10,20,30,40,50},i,index_value,new_value;
	printf("\n Original array");
	for(i=0;i<5;i++)
	{
	printf("\t%d",arr[i]);
    }
    printf("\n Enter index value from (0 to 4)=");
    scanf("%d",&index_value);
    printf("\n Enter new value:");
    scanf("%d",&new_value);
    arr[index_value]=new_value;
    printf("\nAfter modification");
    for(i=0;i<5;i++)
    {
    	printf("\t%d",arr[i]);
	}
	return 0;
}
