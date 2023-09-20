#include <stdio.h>

int main(void)
{

    int r;
    printf("Enter number of rows: ");
    scanf("%d", &r);

    int i = 1;

    while (i <= r)
    {
        int j = 1;

        while (j <= r)
        {
            if ((i == 1) || (i == j) || (j == r))
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
Enter the number of rows (>= 4): 5

* * * * *
  *     *
    *   *
      * *
        *

11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
51 52 53 54

*/
