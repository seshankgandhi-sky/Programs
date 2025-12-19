#include<stdio.h>
int main()
{
	int roll,sub1,sub2,sub3,total;
	char name[100];
	float avg;
	printf("\nEnter your name:");
	scanf("%[^\n]",&name);
	printf("\nEnter your roll no:");
	scanf("%d",&roll);
	printf("\nEnter your three sub marks:");
	scanf("%d %d %d",&sub1,&sub2,&sub3);
	total=sub1+sub2+sub3;
	avg=(total)/3;
	printf("\nName :%s",name);
	printf("\nRoll no :%d",roll);
	printf("\nSub1:%d\nSub2:%d\nSub3:%d",sub1,sub2,sub3);
	printf("\nTotal Marks :%d",total);
	printf("\nAvg Marks :%f",avg);
	if(sub1<40||sub2<40||sub3<40)
	{
		printf("\nfailed");
	}
	else if(avg>80)
	{
	    printf("\n1st Class");
	}
	else if(avg>60)
	{
		printf("\n2nd Class");
	}
	else
	{
		printf("\nPass");
	}
	return 0;
}
