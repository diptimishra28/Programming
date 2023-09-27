#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    int i = 1;

    while (i <= r)
    {
        int z = i;
        int j = 1;

        while (j <= i)
        {
            printf("%02d ", z);
            z = z + r - j;
            ++j;
        }

        printf("\n");
        ++i;
    }

    return 0;
}


/*
Enter the number of rows: 5

01
02 06
03 07 10
04 08 11 13
05 09 12 14 15

01
02 07
03 08 12
04 09 13 16
05 10 14 17 19
06 11 15 18 20 21

*/
