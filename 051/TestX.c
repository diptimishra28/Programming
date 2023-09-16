#include <stdio.h>

int main(void)
{
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    int a = 0, b = 1;

    while (terms > 0)
    {
        printf("%d ", a);

        int sum = a + b;
        a = b;
        b = sum;

        --terms;
    }

    // int n = 0;

    // if (term == 1)
    // {
    //     printf("%d\n", n);
    // }

    // /*
    // term = 6
    // n = 0
    // n1 = 1
    // sum = 0
    // */

    // else
    // {
    //     int n1 = 1;
    //     int sum = 0;

    //     printf("%d ", n);

    //     while (n <= term)
    //     {
    //         printf("%d", n1);

    //         sum = n + n1;
    //         n = n1;
    //         n1 = sum;
    //         printf("%d \n", n1);

    //         ++n;
    //     }
    // }

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
