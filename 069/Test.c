#include <stdio.h>

int sum(int, int);
int difference(int, int);
int product(int, int);

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
        printf("%d + %d = %d\n", a, b, sum(a, b));
    }

    else if (choice == 2)
    {
        printf("%d - %d = %d\n", a, b, difference(a, b));
    }

    else
    {
        printf("%d * %d = %d\n", a, b, product(a, b));
    }

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int difference(int a, int b)
{
    return a - b;
}

int product(int a, int b)
{
    return a * b;
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
