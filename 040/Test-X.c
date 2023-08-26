#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int a = n;

    int count = 0;

    while (n > 0)
    {
        n = n / 10;
        ++count;
    }

    //printf("%d digits\n", count);

    int div = 1;

    while (count > 1)
    {
        div = div * 10;
        --count;
    }

    //printf("%d\n", div);

    int sum = 0;

    while (a > 9) // (div > 1)
    {
        int first_digit = a / div;
        printf("%d + ", first_digit);
        sum = sum + first_digit;
        a = a % div;
        div = div / 10;
    }

    printf("%d = %d\n", a, sum + a);

    return 0;
}




/*

Enter a positive integer: 1024
1 + 0 + 2 + 4 = 7

Note: Don't reverse the integer.

 */
