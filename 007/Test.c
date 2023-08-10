#include <stdio.h>

int main(void)
{
    printf("* * * * * * * * * * * * * *\n");
    printf("* Choice   Operation      *\n");
    printf("*                         *\n");
    printf("* 1        Addition       *\n");
    printf("* 2        Subtraction    *\n");
    printf("* 3        Multiplication *\n");
    printf("* * * * * * * * * * * * * *\n\n");

    int a, b;
    printf("Enter 2 integers: ");
    scanf("%d%d", &a, &b);

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    if (choice == 1)
    {
        printf("%d + %d = %d\n", a, b, a + b);
    }

    else if (choice == 2)
    {
        printf("%d - %d = %d\n", a, b, a - b);
    }

    else
    {
        printf("%d * %d = %d\n", a, b, a * b);
    }

    return 0;
}

/*

* * * * * * * * * * * * * *
* Choice   Operation      *
*                         *
* 1        Addition       *
* 2        Subtraction    *
* 3        Multiplication *
* * * * * * * * * * * * * *

Enter 2 integers: 10 5
Enter your choice: 2

10 - 5 = 5

*/

// int sum;
        // sum = a + b;
        // printf("%d\n", sum);

        // int sum = a + b;
        // printf("%d\n", sum);
