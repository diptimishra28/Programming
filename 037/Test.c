#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("\n");

    // int p = 0;
    int a = 1;

    while (a <= 9)
    {
        // p = n * a;
        printf("%d x %d = %d\n", n, a, n * a);
        ++a;
    }

    return 0;
}


/*

Enter an integer: 13

13 x 1 = 13
13 x 2 = 26
13 x 3 = 39
...
13 x 9 = 117

 */
