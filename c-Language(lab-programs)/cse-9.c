#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int i=0;
	fp=fopen("D:\\CSE-(1st-year)\\c-Language\\Unit-3\\files\\cse9.txt","w");
	while(i<10)
	{
		ch=getchar(ch,fp);
		fputc(ch,fp);
		i++;
	}
	fclose(fp);
	return 0;
}