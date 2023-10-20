/*
using malloc

Enter 5 integers 10 20 30 40 50
10 20 30 40 50
*/


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int* arr = (int*) malloc(5 * sizeof (int));

//     printf("Enter 5 integers: ");

//     for (int i = 0; i < 5; ++i)
//     {
//         scanf("%d", &(arr[i]));
//     }

//     for (int i = 0; i < 5; ++i)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");

//     free((void*) arr);

//     return 0;
// }

// POINTER notation

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter the no of integers: ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof (int));

    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n");

    free((void*) arr);

    return 0;
}


/*

Enter the number of integers: 7
Enter 7 integers: 1 2 3 4 5 6 7

1 2 3 4 5 6 7

*/
