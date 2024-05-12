// #include <stdio.h>
// #include <stdlib.h>

// void reverse_arr(int*, int, int);
// void swap(int*, int*);

// int main(void)
// {
//     int n;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int* arr = (int*) malloc(n * sizeof (int));

//     printf("Enter %d integers: ", n);

//     for (int i = 0; i < n; ++i)
//     {
//         scanf("%d", &(arr[i]));
//     }

//     printf("\n");

//     reverse_arr(arr, 0, n - 1);

//     for (int i = 0; i < n; ++i)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");

//     return 0;
// }

// void reverse_arr(int* arr, int i, int j)
// {
//     if (i < j)
//     {
//         swap(&(arr[i]), &(arr[j]));
//         reverse_arr(arr, i + 1, j - 1);
//     }
// }

// void swap(int* ptr_i, int* ptr_j)
// {
//     int temp = *ptr_i;
//     *ptr_i = *ptr_j;
//     *ptr_j = temp;
// }

