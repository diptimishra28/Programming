#include <stdio.h>

int main(void)
{
    int ll, ul;
    printf("Enter lower and upper limits: ");
    scanf("%d%d", &ll, &ul);

    if (ll == ul)
    {
        printf("%d\n", ll);
    }

    else if (ll == (ul - 1))
    {
        printf("%d and %d\n", ul, ll);
    }

    else
    {
        while (ll <= (ul - 2))
        {
            printf("%d, ", ll);
            ll++;
        }

        printf("%d and %d\n", ll, ll + 1);
    }

    return 0;
}

/*

1)
Enter lower and upper limits: 5 5
5

2)
Enter lower and upper limits: 5 6
6 and 5

3)
Enter lower and upper limits: 5 10
10, 9, 8, 7, 6 and 5

4)
Enter lower and upper limits: 7 9
9, 8 and 7

*/
