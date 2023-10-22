/*
Enter the details of n student

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
.
.
.
.
*/

// ARRAY NOTATION //

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
//     int n;
//     printf("Enter the number of students :- ");
//     scanf("%d", &n);

//     Student* p = (Student*) malloc(n * sizeof (Student));

//     for (int i = 0; i < n; ++i)
//     {
//         printf("Enter the detail of student %d :-\n", i + 1);

//         printf("Roll_number: ");
//         scanf("%d", &((p[i]).roll_number));

//         printf("marks1: ");
//         scanf("%lf", &((p[i]).marks1));

//         printf("marks2: ");
//         scanf("%lf", &((p[i]).marks2));

//         printf("marks3: ");
//         scanf("%lf", &((p[i]).marks3));
//     }

//     printf("\n");

//     for (int i = 0; i < n; ++i)
//     {
//         printf("Roll_number: %d\n", (p[i]).roll_number);
//         printf("marks1: %g\n", (p[i]).marks1);
//         printf("marks2: %g\n", (p[i]).marks2);
//         printf("marks3: %g\n", (p[i]).marks3);
//     }

//     printf("\n");

//     free((void*) p);

//     return 0;
// }


// POINTER NOTATION //



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
//     int n;
//     printf("Enter the number of students :- ");
//     scanf("%d", &n);

//     Student* p = (Student*) malloc(n * sizeof (Student));

//     for (int i = 0; i < n; ++i)
//     {
//         printf("Enter the detail of student %d :-\n", i + 1);

//         printf("Roll_number: ");
//         scanf("%d", &((*(p + i)).roll_number));

//         printf("marks1: ");
//         scanf("%lf", &((*(p + i)).marks1));

//         printf("marks2: ");
//         scanf("%lf", &((*(p + i)).marks2));

//         printf("marks3: ");
//         scanf("%lf", &((*(p + i)).marks3));
//     }

//     printf("\n");

//     for (int i = 0; i < n; ++i)
//     {
//         printf("Roll_number: %d\n", ((*(p + i)).roll_number));
//         printf("marks1: %g\n", (*(p + i)).marks1);
//         printf("marks2: %g\n", (*(p + i)).marks2);
//         printf("marks3: %g\n", (*(p + i)).marks3);
//     }

//     printf("\n");

//     free((void*) p);

//     return 0;
// }


// ARROW NOTATION //


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
    int n;
    printf("Enter the number of students :- ");
    scanf("%d", &n);

    Student* p = (Student*) malloc(n * sizeof (Student));

    for (int i = 0; i < n; ++i)
    {
        printf("Enter the detail of student %d :-\n", i + 1);

        printf("Roll_number: ");
        scanf("%d", &((p + i)->roll_number));

        printf("marks1: ");
        scanf("%lf", &((p + i)->marks1));

        printf("marks2: ");
        scanf("%lf", &((p + i)->marks2));

        printf("marks3: ");
        scanf("%lf", &((p + i)->marks3));
    }

    printf("\n");

    for (int i = 0; i < n; ++i)
    {
        printf("Roll_number: %d\n", (p + i)->roll_number);
        printf("marks1: %g\n", (p + i)->marks1);
        printf("marks2: %g\n", (p + i)->marks2);
        printf("marks3: %g\n", (p + i)->marks3);
    }

    printf("\n");

    free((void*) p);

    return 0;
}
