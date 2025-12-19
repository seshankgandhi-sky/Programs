#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Maximum of 3 numbers=%d",max);
	return 0;
}
