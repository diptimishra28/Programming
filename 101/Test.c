/*
    Enter the detail of student 1 :-
    Roll Number: 100
    Marks1: 81.5
    Marks2: 88.0
    Marks3: 90.5

    Enter the detail of student 2 :-
    Roll Number: 101
    Marks1: 80.5
    Marks2: 75.0
    Marks3: 78.5
*/

// #include <stdio.h>
// #include <stdlib.h>

// struct student
// {
//     int roll_number;
//     double marks1;
//     double marks2;
//     double marks3;
// };

// typedef struct student Student;

// int main(void)
// {
//     Student* ptr_s = (Student*) malloc(sizeof (Student));

//     printf("Enter the detail of student 1 :-\n");

//     printf("Roll_number: ");
//     scanf("%d", &((*ptr_s).roll_number));

//     printf("marks1: ");
//     scanf("%lf", &((*ptr_s).marks1));

//     printf("marks2: ");
//     scanf("%lf", &((*ptr_s).marks2));

//     printf("marks3: ");
//     scanf("%lf", &((*ptr_s).marks3));

//     printf("\n");

//     printf("following are the details of student 1 :-\n");

//     printf("Roll_number: %d\n", (*ptr_s).roll_number);
//     printf("marks1: %g\n", (*ptr_s).marks1);
//     printf("marks2: %g\n", (*ptr_s).marks2);
//     printf("marks3: %g\n", (*ptr_s).marks3);

//     free((void*) ptr_s);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

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
    Student* ptr_s = (Student*) malloc(sizeof (Student));

    printf("Enter the detail of student 1 :-\n");

    printf("Roll_number: ");
    scanf("%d", &(ptr_s->roll_number));

    printf("marks1: ");
    scanf("%lf", &(ptr_s->marks1));

    printf("marks2: ");
    scanf("%lf", &(ptr_s->marks2));

    printf("marks3: ");
    scanf("%lf", &(ptr_s->marks3));

    printf("\n");

    printf("Roll_number: %d\n", ptr_s->roll_number);
    printf("marks1: %g\n", ptr_s->marks1);
    printf("marks2: %g\n", ptr_s->marks2);
    printf("marks3: %g\n", ptr_s->marks3);

    free((void*) ptr_s);

    return 0;
}
