#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter number of rows: ");
    scanf("%d", &r);

    int c;
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int i = 1;

    while (i <= c)
    {
        printf("* ");
        ++i;
    }

    printf("\n");

    /////////////////////////////////////////////////////////////////////
    i = 2;

    while (i <= r - 1)
    {
        printf("* ");

        int j = 1;

        while (j <= c - 2)
        {
            printf("  ");
            ++j;
        }

        printf("* \n");
        ++i;
    }

    ////////////////////////////////////////////////////////////////////

    i = 1;

    while (i <= c)
    {
        printf("* ");
        ++i;
    }

    printf("\n");

}

/*

Enter the number of rows (>= 3): 4
Enter the number of columns (>= 3): 5

* * * * *
*       *
*       *
* * * * *

*/
