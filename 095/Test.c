/*
Enter 5 elements 2 3 4 5 6
6 is maximum and 2 is minimum
*/

// #include <stdio.h>
// #include <stldib.h>

// int main(void)
// {
//     int* arr = (int*) malloc(10 * sizeof (int));

//     printf("Enter 10 integers ");

//     for (int i = 0; i < 10; ++i)
//     {
//         scanf("%d", &(arr[i]));
//     }

//     int max = arr[0];
//     int min = arr[0];

//     for (int i = 1; i < 10; ++i)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }

//         else if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }

//     printf("%d is maximum and %d is minimum\n", max, min);
//     free((void*) arr);

//     return 0;
// }


// POINTER NOTATION //

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* arr = (int*) malloc(10 * sizeof (int));

    printf("Enter 10 integers ");

    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", arr + i);
    }

    int max = *(arr + 0);
    int min = *(arr + 0);

    for (int i = 1; i < 10; ++i)
    {
        if (arr[i] > max)
        {
            max = *(arr + i);
        }

        else if (arr[i] < min)
        {
            min = *(arr + i);
        }
    }

    printf("%d is maximum and %d is minimum\n", max, min);

    free((void*) arr);

    return 0;
}
