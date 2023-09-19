#include <stdio.h>

int main(void)
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int i = 1;

    while (i <= rows)
    {
        int j = 1;

        while (j <= i - 1)
        {
            printf("  ");
            ++j;
        }

        j = 1;

        while (j <= (2 * (rows - i)) + 1)
        {
            printf("* ");
            ++j;
        }

        printf("\n");
        ++i;
    }

    return 0;
}

/*
Enter the number of rows: 5

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
