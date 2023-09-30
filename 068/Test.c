#include <stdio.h>
#include <stdbool.h>

bool is_even(int);

int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // if (is_even(n) == true)
    if (is_even(n))
    {
        printf("%d is even\n", n);
    }

    else
    {
        printf("%d is odd\n", n);
    }

    return 0;
}

bool is_even(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

/*

Enter an integer: 4
4 is even

*/

