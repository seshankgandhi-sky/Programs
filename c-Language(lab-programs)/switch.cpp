#include<stdio.h>
 int main()
 {
 	char ch;
 	int a,b;
 	printf("******calculation******");
 	printf("\n+.Addition,\n-.Subtraction,\n*.multiplication,\n/.division");
 	printf("\nEnter your choice:");
 	scanf("%c",&ch);
    printf("\nEnter a b values:");
    scanf("%d,%d",&a,&b);
       switch(ch)
       {
       	case '+': printf("\nAddition :%d",a+b);
       	         break;
       	case '-': printf("\nsubtraction:%d",a-b);
		         break; 
		case '*': printf("\nmultiplication :%d",a*b); 
		         break;
		case '/': printf("\nDivision :%d",a/b);
		  		 break;
	    default : printf("\ninvalid choice");
	       		 break;
	   }
	   return 0;
 }
 
 
