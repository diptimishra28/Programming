/*

Enter the details of student 1 :-
Roll Number: 100
Marks1: 80.5
Marks2: 75.0
Marks3: 78.5

Enter the details of student 2 :-
Roll Number: 101
Marks1: 81.0
Marks2: 76.0
Marks3: 79.5

Student 2 scored more than Student 1

*/

#include <stdio.h>

struct student
{
    int roll_number;
    double marks1;
    double marks2;
    double marks3;
};

typedef struct student Student;

int main(void)
{
    // struct student s1;
    Student s1;

    // printf("%zu\n", sizeof s);
    printf("Enter the detail of student 1 :-\n");

    printf("Roll_number: ");
    scanf("%d", &(s1.roll_number));

    printf("marks1: ");
    scanf("%lf", &(s1.marks1));

    printf("marks2: ");
    scanf("%lf", &(s1.marks2));

    printf("marks3: ");
    scanf("%lf", &(s1.marks3));

    printf("\n");

    // printf("Enter the detail of student 2 :-\n");

    // printf("Roll_number: %d\n", (s.roll_number));
    // printf("marks1: %g\n", (s.marks1));
    // printf("marks2: %g\n", (s.marks2));
    // printf("marks3: %g\n", (s.marks3));
    student s2;

    // printf("%zu\n", sizeof s);
    printf("Enter the detail of student 2 :-\n");

    printf("Roll_number: ");
    scanf("%d", &(s2.roll_number));

    printf("marks1: ");
    scanf("%lf", &(s2.marks1));

    printf("marks2: ");
    scanf("%lf", &(s2.marks2));

    printf("marks3: ");
    scanf("%lf", &(s2.marks3));

    printf("\n");

    double sum1 = (s1.marks1) + (s1.marks2) + (s1.marks3);
    double sum2 = (s2.marks1) + (s2.marks2) + (s2.marks3);

    if (sum2 > sum1)
    {
        printf("Student 2 scored more than Student 1\n");
    }

    else
    {
        printf("Student 1 scored more than Student 2\n");
    }

    return 0;
}
