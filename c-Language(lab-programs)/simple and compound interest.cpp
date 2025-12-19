#include<stdio.h>
#include<math.h>
main()
{

float principal, rate, si, ci, time, amount;
printf("enter principal amount:");
scanf("%f",&principal);
printf("\n enter interest rate:");
scanf("%f",&rate);
printf("\nenter time in years:");
scanf("%f",&time);
si=(principal*rate*time)/100;
ci=principal* (pow(1+rate/100,time)-1);
printf("\nsimple interest:%.2f",si);
printf("\ncompound interest:%.2f",ci);
return 0;
}
