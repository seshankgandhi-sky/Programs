#include<stdio.h>
int main()
{
	int r,n,s=0,temp;
	printf("\nEnter n value :");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(temp==s)
	{
		printf("\nPalindrome");
	}
	else
	{
		printf("\n Not a Palindrome");
	}
	return 0;
}
