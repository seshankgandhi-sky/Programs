#include <stdio.h>

struct student
{
    int roll;
    float marks;
};

void display(struct student *s2);   // function declaration

int main()
{
    struct student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    display(&s1);   // passing address of structure

    return 0;
}

void display(struct student *s2)     // function definition
{
    printf("\nStudent Details\n");
    printf("\n%d\n%f", s2->roll,s2->marks);
 
}

