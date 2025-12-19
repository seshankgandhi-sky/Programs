#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("D:\\ppsc\\code1.txt","a");
	fprintf(fp," world");
	fclose(fp);
	return 0;
}