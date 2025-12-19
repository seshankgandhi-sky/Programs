#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter fahrenheit value:");
	scanf("%f",&f);
	c=(f*9/5);
	printf("\nTemperature in celsius is:%2f",c);
	return 0;
}
