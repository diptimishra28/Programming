#include <stdio.h>

int main(void)
{
    int ll, ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d", &ll, &ul);

    if (ll % 2 != 0)
    {
        ll = ll + 1;
    }

    else // (ll % 2 == 0)
    {
        ll;
    }

    if (ul % 2 != 0)
    {
        ul = ul - 1;
    }

    else // (ul % 2 == 0)
    {
        ul;
    }

    //////////////////////////////////////////////////////////////

    if (ll == ul)
    {
        printf("%d\n", ll);
    }

    else if (ll == ul - 2)
    {
        printf("%d and %d\n", ll, ul);
    }

    else
    {
        while (ll <= ul - 4)
        {
            printf("%d, ", ll);
            ll = ll + 2;
        }

        printf("%d and %d\n", ll, ll + 2);
    }

    return 0;
}
