#include<stdio.h>
struct student
{
	int roll;
	float marks;
	char grade;
};
int main()
{
	struct student s1,s2;
	s1.roll=101;
	s1.marks=99.2;
	s1.grade='s';
	s2=s1;
	printf("\nstudent roll no=%d\nstudent marks=%f\nstudent grade=%c",s2.roll,s2.marks,s2.grade);
	return 0;
}
