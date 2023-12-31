// this program uses equality sign

#include <stdio.h>

int main(void)
{
    double unit;
    printf("Enter the number of units: ");
    scanf("%lf", &unit);

    if (unit <= 50.0)
    {
        printf("Rs. %.2f\n", unit * 0.50);
    }

    else if (unit <= 150.0)
    {
        printf("Rs. %.2f\n", (50.0 * 0.50) +
                             ((unit - 50.0) * 0.75));
    }

    else if (unit <= 250.0)
    {
        printf("Rs. %.2f\n", (50.0 * 0.50) +
                             (100.0 * 0.75) +
                             ((unit - 150.0) * 1.20));
    }

    else
    {
        printf("Rs. %.2f\n", 1.2 * ((50.0 * 0.50) +
                                    (100.0 * 0.75) +
                                    (100.0 * 1.20) +
                                    ((unit - 250.0) * 1.50)));
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
