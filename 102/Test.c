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
    Student* ptr_s1 = (Student*) malloc(sizeof (Student));

    printf("Enter the detail of student 1 :-\n");

    printf("Roll_number: ");
    scanf("%d", &(ptr_s1->roll_number));

    printf("marks1: ");
    scanf("%lf", &(ptr_s1->marks1));

    printf("marks2: ");
    scanf("%lf", &(ptr_s1->marks2));

    printf("marks3: ");
    scanf("%lf", &(ptr_s1->marks3));

    printf("\n");

    Student* ptr_s2 = (Student*) malloc(sizeof (Student));

    printf("Enter the detail of student 1 :-\n");

    printf("Roll_number: ");
    scanf("%d", &(ptr_s2->roll_number));

    printf("marks1: ");
    scanf("%lf", &(ptr_s2->marks1));

    printf("marks2: ");
    scanf("%lf", &(ptr_s2->marks2));

    printf("marks3: ");
    scanf("%lf", &(ptr_s2->marks3));

    printf("\n");

    double sum1 = (ptr_s1->marks1) + (ptr_s1->marks2) + (ptr_s1->marks3);
    double sum2 = (ptr_s2->marks1) + (ptr_s2->marks2) + (ptr_s2->marks3);

    if (sum1 > sum2)
    {
        printf("Student 1 scored more than student 2\n");
    }

    else
    {
        printf("Student 2 scored more than student 1\n");
    }

    free(ptr_s1);
    free(ptr_s2);

    return 0;
}

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
//     Student* ptr_s1 = (Student*) malloc(sizeof (Student));

//     printf("Enter the detail of student 1 :-\n");

//     printf("Roll_number: ");
//     scanf("%d", &((*ptr_s1).roll_number));

//     printf("marks1: ");
//     scanf("%lf", &((*ptr_s1).marks1));

//     printf("marks2: ");
//     scanf("%lf", &((*ptr_s1).marks2));

//     printf("marks3: ");
//     scanf("%lf", &((*ptr_s1).marks3));

//     printf("\n");

//     Student* ptr_s2 = (Student*) malloc(sizeof (Student));

//     printf("Enter the detail of student 1 :-\n");

//     printf("Roll_number: ");
//     scanf("%d", &((*ptr_s2).roll_number));

//     printf("marks1: ");
//     scanf("%lf", &((*ptr_s2).marks1));

//     printf("marks2: ");
//     scanf("%lf", &((*ptr_s2).marks2));

//     printf("marks3: ");
//     scanf("%lf", &((*ptr_s2).marks2));

//     printf("\n");

//     double sum1 = ((*ptr_s1).marks1) + ((*ptr_s1).marks2) + ((*ptr_s1).marks3);
//     double sum2 = ((*ptr_s2).marks1) + ((*ptr_s2).marks2) + ((*ptr_s2).marks3);

//     if (sum1 > sum2)
//     {
//         printf("Student 1 scored more than student 2\n");
//     }

//     else
//     {
//         printf("Student 2 scored more than student 1\n");
//     }

//     free((void*) ptr_s1);
//     free((void*) ptr_s2);

//     return 0;
// }
