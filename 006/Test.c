#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
    }

    else // (n % 2 == 1)
    {
        printf("%d is odd\n", n);
    }

    return 0;
}


/*

Enter an integer: 4
4 is even

*/
