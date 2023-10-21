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

    for (int i = 0; i < 2; ++i)
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

    double max_sum = 0.0;
    int topper = 0;

    for (int i = 0; i < 2; ++i)
    {
        double sum = (arr[i]).marks1 + (arr[i]).marks2 + (arr[i]).marks3;

        if (sum > max_sum)
        {
            max_sum = sum;
            topper = i;
        }

    }

    printf("Topper i%d\n", topper);

    return 0;

}
