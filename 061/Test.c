#include <stdio.h>

int main(void)
{
  int r;
  printf("Enter the number of rows (odd) (>= 3): ");
  scanf("%d", &r);

  int s = (r + 1) / 2;
  int i = 1;

  while (i <= r)
  {
    int j = 1;

    while (j <= r)
    {
      if ((i + j == s + 1) || (i - j == s - 1) ||(j - i == s - 1)
         || (i + j == r + s))
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
Enter the number of rows (odd) (>= 3): 7

      *
    *   *
  *       *
*           *
  *       *
    *   *
      *
*/
