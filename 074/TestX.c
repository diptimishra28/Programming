#include <stdio.h>
#include <stdbool.h>

bool is_prime(int);

int main(void)
{
    int n;
    printf("Enter a positive integr: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1 is neither prime nor composite\n");
    }

    else if (is_prime(n))
    {
        printf("%d is prime\n", n);
    }

    else
    {
        printf("%d is composite\n", n);
    }

    return 0;
}

bool is_prime(int n)
{
    int i = 1;
    int number_of_factors = 0;

    while (i <= n)
    {
        if (n % i == 0)
        {
           ++number_of_factors;
        }

        ++i;
    }

    // if (number_of_factors > 2)
    // {
    //     return false;
    // }

    // else
    // {
    //     return true;
    // }

    return number_of_factors == 2;
}

/*

1)
Enter a positive integer: 1
1 is neither prime nor composite

2)
Enter a positive integer: 10
10 is composite

3)
Enter a positive integer: 13
13 is prime

*/
