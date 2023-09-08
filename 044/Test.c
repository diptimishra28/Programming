#include <stdio.h>

int main(void)
{
    double base;
    printf("Enter the base: ");
    scanf("%lf", &base);

    int exponent;
    printf("Enter the integral exponent: ");
    scanf("%d", &exponent);

    double result = 1.0;
    int exp = exponent;

    if ((base == 0.0) && (exponent > 0))
    {
        printf("%g ^ %d = 0\n", base, exponent);
    }

    else if (/* ((base > 0.0) || (base < 0.0)) && */ (exponent > 0))
    {
        while (exponent >= 1)
        {
            result = result * base;
            --exponent;
        }

        printf("%g ^ %d = %g\n", base, exp, result);
    }

    else if ((base == 0.0) && (exponent == 0))
    {
        printf("0 ^ 0 is undefined\n");
    }

    else if (exponent == 0)
    {
        printf("%g ^ %d = 1\n", base, exponent);
    }

    else if ((base == 0.0) && (exponent < 0))
    {
        printf("Dividing by 0 is undefined\n");
    }

    else if (exponent < 0)
    {
        while (exponent < 0)
        {
            result = result * base;
            ++exponent;
        }

        printf("%g ^ %d = %g\n", base, exp, 1 / result);
    }

    return 0;
}
// cases:-
// ++
// +0
// +-

// 0+
// 00
// 0-

// -+
// -0
// --




/*

Note: Try using %g with printf() to print double values.

1)
Enter the base: 1.2
Enter the integral exponent: 3

1.2 ^ 3 = 1.728

2)
Enter the base: -2.5
Enter the integral exponent: -2

-2.5 ^ -2 = 0.16

3)
Enter the base: 7
Enter the integral exponent: 0

7 ^ 0 = 1

4)
Enter the base: 0
Enter the integral exponent: 4

0 ^ 4 = 0

5)
Enter the base: 0
Enter the integral exponent: 0

0 ^ 0 is undefined

6)
Enter the base: 0
Enter the integral exponent: -3

Dividing by 0 is undefined

*/
