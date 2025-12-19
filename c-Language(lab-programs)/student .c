#include<stdio.h>
 main()
 {
 	int age;
 	float weigth; 
 	char gender;
 	char name[100];
 	printf("\nEnter your name:");
 	scanf("%s",&name);
 	printf("\nEnter your age:");
 	scanf("%d",&age);
 	printf("\nEnter your weigth:");
 	scanf("%f",&weigth);
 	printf("\nEnter your gender:");
 	scanf(" %c",&gender);
	printf("\nName :%s\nAge :%d\nWeigth :%f\nGender :%c",name,age,weigth,gender);
 	
 }
