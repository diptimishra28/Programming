/*
reverse
*/

// #include <stdio.h>

// int main(void)
// {
//     int arr[20];

//     printf("Enter 20 integers: ");

//     for (int i = 0; i < 20; ++i)
//     {
//         scanf("%d", &(arr[i]));
//     }

//     printf("\n");

//     for (int i = 0; i < 20 / 2; ++i)
//     {
//         int temp = arr[i];
//         arr[i] = arr[19 - i];
//         arr[19 - i] = temp;
//     }

//     for (int i = 0; i < 20; ++i)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");

//     return 0;

// }


// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

#include <stdio.h>

void reverse(int*);
void swap(int*, int*);

int main(void)
{
    int arr[20];
    printf("Enter 20 integers: ");

    for (int i = 0; i < 20; ++i)
    {
        scanf("%d", &(arr[i]));
    }

    printf("\n");

    reverse(arr);

    for (int i = 0; i < 20; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

void reverse(int* arr)
{
    for (int i = 0; i < 20 / 2; ++i)
    {
        // int temp = arr[i];
        // arr[i] = arr[19 - i];
        // arr[19 - i] = temp;
        swap(&(arr[i]), &(arr[19 - i]));
        // swap(300, 376);
    }
}

void swap(int* ptr_a, int* ptr_b)
{
    int c = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = c;
}
