#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int no_of_digits = (int) log10((double) n) + 1;
    int div = (int) pow(10.0, (double) (no_of_digits - 1));
    // int d = div;

    int first_digit = n / div;
    int last_digit = n % 10;

    n = n / 10;
    div = div / 10;
    int middle_part = n % div;

    //int swapped_number = (last_digit) + (middle_part * 10) + first_digit;
    int swapped_number = (((last_digit * div) + middle_part) * 10) + first_digit;
    printf("After swapping first and last digits, %d\n", swapped_number);

    return 0;
}


/*

1)
Enter a positive integer: 1234
After swapping first and last digits, 4231

2)
Enter a positive integer: 1230
After swapping first and last digits, 231

*/

