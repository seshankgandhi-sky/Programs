 #include<stdio.h>
int main()
{
	float a,t,u,d;
	printf("Enter acceleration :");
	scanf("%f",&a);
	printf("Enter time :");
	scanf("%f",&t);
	printf("Enter initial velocity :");
	scanf("%f",&u);
	d=u*t+(a*t*t)/2;
	printf("Distance is:%f",d);
	return 0;
}
