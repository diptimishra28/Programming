#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("\n");

    int i = 1;
    int alpha = (r + 1) / 2;

    while (i <= alpha)
    {
        int j = 1;

        while (j <= alpha - i)
        {
            printf("  ");
            ++j;
        }

        ///////////////////////////////////////////

        j = 1;

        while (j <= i)
        {
            printf("%c ", 'A' + j - 1);
            ++j;
        }
        ///////////////////////////////////////////

        j = 1;

        while (j < i)
        {
            printf("%c ", 'A' + i - j - 1);
            ++j;
        }

        printf("\n");
        ++i;
    }

///////////////////////////////////////////////////////////////////////////

    i = alpha - 1;

    while (i >= 1)
    {
        int j = 1;

        while (j <= alpha - i)
        {
            printf("  ");
            ++j;
        }

       ///////////////////////////////////////////

        j = 1;

        while (j <= i)
        {
            printf("%c ", j + 'A' - 1);
            ++j;
        }

        ////////////////////////////////////////////

        j = 1;

        while (j < i)
        {
            printf("%c ", 'A' + i - j- 1);
            ++j;
        }

        printf("\n");
        --i;
    }

    return 0;
}



/*
Enter the number of rows (odd): 7

      A
    A B  A
  A B C  B A
A B C D  C B A

  A B C  B A
    A B  A
      A
*/
