/*
Enter 5 integers 1 2 3 4 5
Their sum is - 15
*/

// #include <stdio.h>

// int main(void)
// {
//     int arr[10];

//     printf("Enter 10 integers ");

//     for (int i = 0; i < 10; ++i)
//     {
//         scanf("%d", &(arr[i]));
//     }

//     int sum = 0;

//     for (int i = 0; i < 10; ++i)
//     {
//         sum = sum + arr[i];
//     }

//     printf("Their sum is - %d\n", sum);

//     printf("\n");

//     return 0;
// }

//POINTER NOTATION //

#include <stdio.h>

int main(void)
{
    int arr[10];

    printf("Enter 10 integers ");

    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", arr + i);
    }

    int sum = 0;

    for (int i = 0; i < 10; ++i)
    {
        sum = sum + (*(arr + i));
    }

    printf("Their sum is - %d\n", sum);

    printf("\n");

    return 0;
}
