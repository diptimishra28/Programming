#include <stdio.h>

int calculate_factorial(int);

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, calculate_factorial(n));

    return 0;
}

int calculate_factorial(int n)
{
    int fact = 1;

    while (n >= 2)
    {
        fact = fact * n;
        --n;
    }

    return fact;
}

/*

1)
Enter a positive integer: 1
1! = 1

2)
Enter a positive integer: 5
5! = 120

*/
