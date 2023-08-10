#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Enter 2 integers: ");
    scanf("%d%d", &x, &y);

    if (x > y)
    {
        printf("%d is greater\n", x);
    }

    else if (x == y)
    {
        printf("They are equal\n");
    }

    else // (x < y)
    {
        printf("%d is greater\n", y);
    }

    return 0;
}

/*

1)
Enter 2 integers: 10 5
10 is greater

2)
Enter 2 integers: 5 5
They are equal

*/
