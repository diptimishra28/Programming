#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows (odd): ");
    scanf("%d", &r);
    printf("\n");

    int s = (r - 1) / 2;

    int i = 1;

    while (i <= s)
    {
        int no_to_be_printed = s;

        int j = 1;

        while (j <= i)
        {
            printf("%d ", no_to_be_printed);
            --no_to_be_printed;
            ++j;
        }

        ++no_to_be_printed;

        j = 1;

        while (j <= r - 2 * i)
        {
            printf("%d ", no_to_be_printed);
            ++j;
        }

        j = 1;

        while (j <= i)
        {
            printf("%d ", no_to_be_printed);
            ++no_to_be_printed;
            ++j;
        }

        printf("\n");
        ++i;
    }

    ////////////////////////////////////////////////////////////////////

    int z = 1;
    int to_be_printed = s;

    while (z <= s)
    {
        printf("%d ", to_be_printed);
        --to_be_printed;
        ++z;
    }

    z = 1;

    while (z <= s + 1)
    {
        printf("%d ", to_be_printed);
        ++to_be_printed;
        ++z;
    }
    printf("\n");

    ////////////////////////////////////////////////////////////////////

    i = s;

    while (i >= 1)
    {
        int no_to_be_printed = s;

        int j = 1;

        while (j <= i)
        {
            printf("%d ", no_to_be_printed);
            --no_to_be_printed;
            ++j;
        }

        ++no_to_be_printed;

        j = 1;

        while (j <= r - 2 * i)
        {
            printf("%d ", no_to_be_printed);
            ++j;
        }

        j = 1;

        while (j <= i)
        {
            printf("%d ", no_to_be_printed);
            ++no_to_be_printed;
            ++j;
        }

        printf("\n");

        --i;
    }

    return 0;
}

/*

Enter the number of rows (odd): 7

3 3 3 3 3 3 3
3 2 2 2 2 2 3
3 2 1 1 1 2 3
3 2 1 0 1 2 3
3 2 1 1 1 2 3
3 2 2 2 2 2 3
3 3 3 3 3 3 3

*/
