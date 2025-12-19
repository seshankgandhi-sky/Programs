#include<stdio.h>
int main()
{
	char a;
	char word[100];
	char sen[1000];
	printf("enter single word:");
	scanf("%c",&a);
	printf("Enter a word:");
	scanf("%s",&word);
	printf("Enter a sentence:");
	scanf(" %[^\n]",&sen);
	printf("\nThe letter:%c\nWord is:%s\nThe sentence is:%s",a,word,sen);
	return 0;
}
