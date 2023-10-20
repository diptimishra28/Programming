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

    Student arr[5];

    for (int i = 0; i < 5; ++i)
    {
        printf("Enter the detail of student %d :-\n", i + 1);

        printf("Roll_number: ");
        scanf("%d", &((arr[i]).roll_number));

        printf("marks1: ");
        scanf("%lf", &((arr[i]).marks1));

        printf("marks2: ");
        scanf("%lf", &((arr[i]).marks2));

        printf("marks3: ");
        scanf("%lf", &((arr[i]).marks3));
    }

    for (int i = 0; i < 5; ++i)
    {
        printf("Roll_number: %d\n", ((arr[i]).roll_number));
        printf("marks1: %g\n", (arr[i]).marks1);
        printf("marks2: %g\n", (arr[i]).marks2);
        printf("marks3: %g\n", (arr[i]).marks3);
    }

    printf("\n");

    return 0;
}
