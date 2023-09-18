#include <stdio.h>

int main(void)
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int columns;
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    /*

    rows = 3
    columns = 4
    i = 2
    j = 1

    */

    int i = 1;

    while (i <= rows)
    {
        int j = 1;

        while (j <= columns)
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
    Enter the number of rows: 3
    Enter the number of columns: 5

    * * * * *
    * * * * *
    * * * * *

    11 12 13 14 15
    21 22 23 24 25
    31 32 33 34 35
*/

