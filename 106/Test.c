
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
        scanf("%d", &((p[i]).roll_number));

        printf("marks1: ");
        scanf("%lf", &((p[i]).marks1));

        printf("marks2: ");
        scanf("%lf", &((p[i]).marks2));

        printf("marks3: ");
        scanf("%lf", &((p[i]).marks3));
    }

    printf("\n");

    double max_sum = 0.0;
    int topper = 0;

    for (int i = 0; i < 2; ++i)
    {
        double sum = (p[i]).marks1 + (p[i]).marks2 + (p[i]).marks3;

        if (sum > max_sum)
        {
            max_sum = sum;
            topper = i;
        }

    }

    printf("Topper i%d\n", topper);

    return 0;
}
