/*
Enter 5 integers 1 2 3 4 5
Their sum is - 15
*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int* arr = (int*) malloc(10 * sizeof (int));

//     printf("Enter 5 integers ");

//     for (int i = 0; i < 5; ++i)
//     {
//         scanf("%d", &(arr[i]));
//     }

//     int sum = 0;

//     for (int i = 0; i < 5; ++i)
//     {
//         sum = sum + arr[i];
//     }

//     printf("Their sum is - %d\n", sum);

//     printf("\n");
//     free((void*) arr)

//     return 0;
// }

//POINTER NOTATION //

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* arr = (int*) malloc(10 * sizeof (int));

    printf("Enter 5 integers ");

    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", arr + i);
    }

    int sum = 0;

    for (int i = 0; i < 5; ++i)
    {
        sum = sum + (*(arr + i));
    }

    printf("Their sum is - %d\n", sum);

    printf("\n");

    free((void*) arr);

    return 0;
}








/*

int* count = (int*) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; ++i)
    {
        count[i] = 0;
    }

*/
