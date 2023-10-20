/*
    Enter the detail of student 1 :-
    Roll Number: 100
    Marks1: 81.5
    Marks2: 88.0
    Marks3: 90.5
*/

#include <stdio.h>

struct student
{
    int roll_number;
    double marks1;
    double marks2;
    double marks3;
};

int main(void)
{
    struct student s;

    // printf("%zu\n", sizeof s);
    printf("Enter the detail of student 1 :-\n");

    printf("Roll_number: ");
    scanf("%d", &(s.roll_number));

    printf("marks1: ");
    scanf("%lf", &(s.marks1));

    printf("marks2: ");
    scanf("%lf", &(s.marks2));

    printf("marks3: ");
    scanf("%lf", &(s.marks3));

    printf("\n");

    printf("Following are the detail of students :-\n");

    printf("Roll_number: %d\n", (s.roll_number));
    printf("marks1: %g\n", (s.marks1));
    printf("marks2: %g\n", (s.marks2));
    printf("marks3: %g\n", (s.marks3));

    return 0;
}



