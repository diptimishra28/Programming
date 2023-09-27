#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows (odd): ");
    scanf("%d", &r);

    int digits = (r - 1) / 2;

    int i = 1;

    while (i <= digits)
    {
        int show = digits;

        int j = 1;

        while (j <= i)
        {
            --show;
            printf("%d ", show);
            ++j;
        }

        printf("\n");
        ++i;
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
