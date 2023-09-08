#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int factorial = 1;
    printf("%d! = ", n);

    if (n == 1)
    {
        printf("%d\n", n);
    }

    else
    {
        while (n > 1)
        {
            factorial = factorial * n;
            printf("%d x ", n);
            --n;
        }

        printf("%d = %d\n", n, factorial);
    }

    return 0;
}


/*
1)
Enter a positive integer: 1
1! = 1

2)
Enter a positive integer: 5
5! = 5 x 4 x 3 x 2 x 1 = 120

*/
