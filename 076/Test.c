#include <stdio.h>
#include <stdbool.h>

bool is_prime(int);
bool is_armstrong(int);

int main(void)
{
    int n;
    printf("Enter a positive integr: ");
    scanf("%d", &n);

    int i = 1;

    while (i <= n)
    {
        bool n_is_prime = is_prime(i);
        bool n_is_armstrong = is_armstrong(i);

        if (n_is_armstrong && n_is_prime)
        {
            printf("%d is prime as well as armstrong\n", i);
        }

        else if (n_is_prime)
        {
            printf("%d is only prime\n", i);
        }

        else if (n_is_armstrong)
        {
            printf("%d is only armstrong\n", i);
        }

        else
        {
            printf("%d is neither prime nor armstrong\n", i);
        }

        ++i;
    }
}

boolean is_prime(int n)
{
    boolean n_is_prime = true;
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


bool is_armstrong(int i)
{
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
        sum = sum + pow(last_digit, no_of_digits);
        x = x / 10;
    }

    return sum == ;
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
