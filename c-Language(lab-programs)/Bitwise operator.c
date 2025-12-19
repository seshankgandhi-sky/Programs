#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a b values:");
	scanf("%d %d",&a,&b);
	printf("========Bitwise=======");
	printf("\nBitwise operator %d & %d is:%5d",a,b,a&b);
	printf("\nBitwise operator %d | %d is:%5d",a,b,a|b);
	printf("\nBitwise operator %d ^ %d is:%5d",a,b,a^b);
	printf("\nBitwise operator %d << %d is:%5d",a,b,a<<b);
	printf("\nBitwise operator %d >> %d is:%5d",a,b,a>>b);
	printf("\nBitwise operator (~) %d is:%5d",a,~a);
	return 0;
}
