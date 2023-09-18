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

        while (j <= rows - i)
        {
            printf("  ");
            ++j;
        }

        j = 1;

        while (j <= i)
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

        *
      * *
    * * *
  * * * *
* * * * *

    *
  * *
* * *

11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55

*/
