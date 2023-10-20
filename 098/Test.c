/*
reverse
*/

// #include <stdio.h>

// int main(void)
// {
//    int n;
//    printf("Enter the number of integers :- ");
//    scanf("%d", &n);
//
//    int* arr = (int*) malloc (n * sizeof (int));

//    printf("Enter %d integers :- ", n);

//     for (int i = 0; i < n; ++i)
//     {
//         scanf("%d", (arr + i));
//     }

//     printf("\n");

//     for (int i = 0; i < n / 2; ++i)
//     {
//         int temp = arr[i];
//         arr[i] = arr[(n - 1) - i];
//         arr[(n - 1) - i] = temp;
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         printf("%d ", *(arr + i));
//     }

//     printf("\n");

//     return 0;

// }

/*

reversing an array

*/

#include <stdio.h>
#include <stdlib.h>

void reverse(int*, int);
void swap(int* , int*);

int main(void)
{
    int n;
    printf("Enter the number of integers :- ");
    scanf("%d", &n);

    int* arr = (int*) malloc (n * sizeof (int));

    printf("Enter %d integers :- ", n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &(arr[i]));
    }

    printf("\n");

    reverse(arr, n);

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}

void reverse(int* arr, int n)
{
    for (int i = 0; i < n / 2; ++i)
    {
        swap(&(arr[i]), &(arr[(n - 1) - i]));
    }
}

void swap(int* ptr_a, int* ptr_b)
{
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}
