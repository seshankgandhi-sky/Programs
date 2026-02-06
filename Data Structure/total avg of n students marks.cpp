#include<stdio.h>
struct student
{
	int roll,marks;
};
int main()
{
	struct student s[100];
	int n,i,total=0;
	float avg;
	printf("\nenter n size=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter roll no: ");
		scanf("%d",&s[i].roll);
		printf("\nenter marks: ");
		scanf("%d",&s[i].marks);
		total=total+s[i].marks;
	}
	avg=(float)total/n;
	printf("\ntotal marks=%d\naverage marks=%f",total,avg);
	return 0;
}
