// without using equality sign.

#include <stdio.h>

int main(void)
{
    double n;
    printf("Enter the number of units: ");
    scanf("%lf", &n);

    if (n > 250.0)
    {
        printf("Rs. %.2f\n", 1.2 * ((50.0 * 0.50) +
                                    (100.0 * 0.75) +
                                    (100.0 * 1.20) +
                                    ((n - 250.0) * 1.50)));
    }

     else if (n > 150.0)
    {
        printf("Rs. %.2f\n", (50.0 * 0.50) +
                             (100.0 * 0.75) +
                             ((n - 150.0) * 1.20));
    }

    else if (n > 50.0)
    {
        printf("Rs. %.2f\n", ((n - 50.0) * 0.75) +
                             (50.0 * 0.50));
    }

    else
    {
        printf("Rs. %.2f\n", n * 0.50);
    }

    return 0;
}



/*
    if (n <= 50.0)
        1
    else if (n <= 150.0)
        2
    else if (n <= 250.0)
        3
    else // (n > 250.0)
        4
*/

/*
    if (n > 250.0)
        4
    else if (n > 150.0)
        3
    else if (n > 50.0)
        2
    else (n > 0.0)
        1

*/
