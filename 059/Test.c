#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    int i = 1;
    int s = (r / 2) + 1;

    while (i <= s)
    {
        int j = 1;

        while (j <= i - 1)
        {
            printf("    ");
            ++j;
        }

        j = 1;

        while (j <= s - i + 1)
        {
            printf("* ");
            ++j;
        }

        printf("\n");
        ++i;
    }
    ////////////////////////////////////////////////////////
    i = s - 1;

    while (i >= 1)
    {
        int j = 1;

        while (j <= i - 1)
        {
            printf("    ");
            ++j;
        }

        j = 1;

        while (j <= s - i + 1)
        {
            printf("* ");
            ++j;
        }
        
        printf("\n");
        --i;
    }

    return 0;
}

/*
Enter the number of rows (odd): 9

* * * * *
    * * * *
        * * *
            * *
                *





            * *
        * * *
    * * * *
* * * * *
*/
