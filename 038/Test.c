#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("%d has ", n);

    int count = 0;

    while (n > 0)
    {
        n = n / 10;
        ++count;
    }

    printf("%d digits\n", count);

    return 0;
}



/*

Enter a positive integer: 1024
1024 has 4 digits

 */
