// this program uses equality sign

#include <stdio.h>

int main(void)
{
    double n;
    printf("Enter the number of units: ");
    scanf("%lf", &n);

    if (n <= 50.0)
    {
        printf("Rs. %.2f\n", n * 0.50);
    }

    else if /*(n > 50) && */ (n <= 150.0)
    {
        printf("Rs. %.2f\n", (50.0 * 0.50) +
                             ((n - 50.0) * 0.75));
    }

    else if (n <= 250.0)
    {
        printf("Rs. %.2f\n", (50.0 * 0.50) +
                             (100.0 * 0.75) +
                             ((n - 150.0) * 1.20));
    }

    else // (n > 250.0)
    {
        printf("Rs. %.2f\n", 1.2 * ((50.0 * 0.50) +
                                    (100.0 * 0.75) +
                                    (100.0 * 1.20) +
                                    ((n - 250.0) * 1.50)));
    }

    return 0;
}

/*

1)
Enter the number of units: 20.3
Rs. 10.15

2)
Enter the number of units: 115.7
Rs. 74.28

3)
Enter the number of units: 180.5
Rs. 136.60

4)
Enter the number of units: 260.2
Rs. 282.36

*/

/*

The bill is calculated as follows :-

For the first 50 units, Rs. 0.50 per unit.
For the next 100 units, Rs. 0.75 per unit.
For the next 100 units, Rs. 1.20 per unit.
For the remaining units, Rs. 1.50 per unit.

Also, if the number of units is more than 250.0, then additional 20% is added
to the bill.

*/

/*

To print a double value only upto 2 decimal places, use %.2f

*/

/*

Using equality-related operators with float/double/long double is not good.
The reason will be explained later.

So, don't use ==, !=, <=, >= with float/double/long double.
Solve this problem only by using < or >.

*/