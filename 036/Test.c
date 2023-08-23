#include <stdio.h>

int main(void)
{
    int ll, ul;
    printf("Enter lower and upper limits: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    // int new_ll;
    ll = ll + (ll % 2);

    // int new_ul;
    ul = ul - (ul % 2);
    // int new_ll;

    // if (ll % 2 != 0)
    // {
    //     new_ll = ll + 1;
    // }

    // else
    // {
    //     new_ll = ll;
    // }

    // int new_ul;

    // if (ul % 2 != 0)
    // {
    //     new_ul = ul - 1;
    // }

    // else
    // {
    //     new_ul = ul;
    // }

    // int sum = 0;
    // if (new_ll == new_ul)
    // {
    //     printf("%d\n", new_ll);
    // }

    // else

    int sum = 0;

    while (ll < ul)
    {
        sum = sum + ll;
        printf("%d + ", ll);
        ll = ll + 2;
    }

    printf("%d = %d\n", ul, sum + ul);

    return 0;
}



/*

Enter lower and upper limits: 7 14

Sum of even numbers -
8 + 10 + 12 + 14 = 44

 */
