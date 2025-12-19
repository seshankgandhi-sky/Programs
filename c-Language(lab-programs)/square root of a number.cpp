#include<stdio.h>
#include<math.h>
int main()
{
	double num,root;
	printf("Enter an integer number :");
	scanf("%lf",&num);
	root=sqrt(num);
	printf("\nThe square root of %.21f is:%.21f",num,root);
	return 0;
}
