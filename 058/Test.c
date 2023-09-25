#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    int c;
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int i = 1;

    while (i <= r)
    {
        int j = 1;

        while (j <= c + r - 1)
        {
            if (((i == r) && (j <= c)) || ((i == 1) && (j >= r + 1))
               || ((i + j == r + 1) || (i + j == c + r)))
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
Enter the number of rows (>= 3): 4
Enter the number of columns (>= 3): 7

      * * * * * * *
    *           *
  *           *
* * * * * * *
*/
