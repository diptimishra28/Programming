#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    int i = 1;

    int s = (r + 1) / 2;

    while (i <= r)
    {
        int j = 1;

        while (j <= s)
        {
            if ((j == s) || (i + j == s + 1) || (i - j == s - 1))
            {
                printf("* ");
            }

            else
            {
                printf("  ");
            }

            ++j;
        }

        printf("\n");
        ++i;
    }

    return 0;
}

/*
Enter the number of rows (odd) (>= 5): 9

        *
      * *
    *   *
  *     *
*       *


  *     *
    *   *
      * *
        *
*/
