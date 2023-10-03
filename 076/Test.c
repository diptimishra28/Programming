#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int);
bool is_armstrong(int);

int main(void)
{
    int ll, ul;
    printf("Enter lower limit and upper limit: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    while (ll <= ul)
    {
        bool ll_is_prime = is_prime(ll);
        bool ll_is_armstrong = is_armstrong(ll);

        if (ll_is_prime && ll_is_armstrong)
        {
            printf("%d is prime as well as armstrong\n", ll);
        }

        else if (ll_is_prime)
        {
            printf("%d is only prime\n", ll);
        }

        else if (ll_is_armstrong)
        {
            printf("%d is only armstrong\n", ll);
        }

        else
        {
            printf("%d is neither prime nor armstrong\n", ll);
        }

        ++ll;
    }
}

bool is_prime(int n)
{
    // printf("\nChecking prime for %d\n", n);

    if (n == 1)
    {
        return false;
    }

    else
    {
        bool n_is_prime = true;
        int i = 2;

        while (i * i <= n)
        {
            if (n % i == 0)
            {
                n_is_prime = false;
                break;
            }

            ++i;
        }

        return n_is_prime;
    }
}

bool is_armstrong(int i)
{
    // printf("\nChecking armstrong for %d\n", i);

    int x = i;
    int y = i;

    int no_of_digits = 0;

    while (i > 0)
    {
        ++no_of_digits;
        i = i / 10;
    }

    int sum = 0;

    while (x > 0)
    {
        int last_digit = x % 10;
        sum = sum + (int) pow((double) last_digit, (double) no_of_digits);
        x = x / 10;
    }

    return sum == y;
}


/*

Enter lower and upper limits: 7 13

7 is prime as well as armstrong
8 is only armstrong
9 is only armstrong
10 is neither prime nor armstrong
11 is only prime
12 is neither prime nor armstrong
13 is only prime

*/


