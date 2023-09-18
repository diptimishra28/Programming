#include <stdio.h>

int main(void)
{
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if (terms == 1)
    {
        printf("0\n");
    }

    else
    {
        int a = 0;
        int b = 1;

        printf("%d", a);

        while (terms > 2)
        {
            printf(", %d", b);

            int sum = a + b;
            a = b;
            b = sum;

            --terms;
        }

        printf(" and %d\n", b);
    }

    return 0;
}


/*

1)
Enter the number of terms: 1
0

2)
Enter the number of terms: 2
0 and 1

3)
Enter the number of terms: 3
0, 1 and 1

4)
Enter the number of terms: 6
0, 1, 1, 2, 3 and 5

*/
