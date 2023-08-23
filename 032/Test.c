#include <stdio.h>

int main(void)
{
    int ll, ul;
    printf("Enter lower and upper limits: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    int new_ll;

    if (ll % 2 != 0)
    {
        new_ll = ll + 1;
    }

    else //(ll % 2 = 0)
    {
        new_ll = ll;
    }

    int new_ul;

    if (ul % 2 != 0)
    {
        new_ul = ul - 1;
    }

    else //(ll % 2 = 0)
    {
        new_ul = ul;
    }

    if (new_ll == new_ul)
    {
        printf("%d\n", new_ll);
    }

    // else if (new_ll + 2 == new_ul)
    // {
    //     printf("%d and %d\n", new_ll, new_ul);
    // }

    else
    {
        while (new_ll <= new_ul - 4)
        {
            printf("%d, ", new_ll);
            new_ll = new_ll + 2;
        }

        printf("%d and %d\n", new_ll, new_ul);
    }

    return 0;
}


/*

Enter lower and upper limits: 7 15
8, 10, 12 and 14

*/

