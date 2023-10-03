#include <stdio.h>
#include <stdbool.h>

bool is_prime(int);

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("prime factors - ");

    int i = 1;

    while (i <= n)
    {
        if ((n % i == 0) && (is_prime(i)))
        {
            printf("%d ", i);
        }

        ++i;
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

    return number_of_factors == 2;
}


/*
  1)
  Enter a positive integer: 15
  Prime factors - 3 5

  2)
  Enter a positive integer: 48
  Prime factors - 2 3

*/
