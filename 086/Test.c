/*

Enter a non-negative integer: 1234


| 0 | 0 |
| 1 | 1 |
| 2 | 1 |
| 3 | 1 |
| 4 | 1 |
| 5 | 0 |
| 6 | 0 |
| 7 | 0 |
| 8 | 0 |
| 9 | 0 |


// */
// #include <stdio.h>

// int main(void)
// {
//     int n;
//     printf("Enter a non-negative integer: ");
//     scanf("%d", &n);

//     int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

//     while (n >= 1)
//     {
//         int last_digit = n % 10;

//         if (last_digit == 0)
//         {
//             ++count[0];
//         }

//         else if (last_digit == 1)
//         {
//             ++count[1];
//         }

//         else if (last_digit == 2)
//         {
//             ++count[2];
//         }

//         else if (last_digit == 3)
//         {
//             ++count[3];
//         }

//         else if (last_digit == 4)
//         {
//             ++count[4];
//         }

//         else if (last_digit == 5)
//         {
//             ++count[5];
//         }

//         else if (last_digit == 6)
//         {
//             ++count[6];
//         }

//         else if (last_digit == 7)
//         {
//             ++count[7];
//         }

//         else if (last_digit == 8)
//         {
//             ++count[8];
//         }

//         else
//         {
//             ++count[9];
//         }

//         n = n / 10;
//     }

//     for (int i = 0; i < 9; ++i)
//     {
//         printf("| %d | %d |\n", i, count[i]);
//     }

//     return 0;
// }


#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (n >= 1)
    {
        int last_digit = n % 10;
        ++(count[last_digit]);

        n = n / 10;
    }

    for (int i = 0; i < 9; ++i)
    {
        printf("| %d | %d |\n", i, count[i]);
    }

    return 0;
}
