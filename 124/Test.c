#include <stdio.h>
#include <stdlib.h>

int max(int*, int, int);

int main(void)
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int* arr = malloc(n * sizeof (int));
    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &(arr[i]));
    }

    printf("maximum integer of array : %d\n", max(arr, n, 0));

    free(arr);

    return 0;
}

int max(int* arr, int size, int i)
{

    if (i == size - 1)
    {
        return arr[i];
    }

    else
    {
        int temp = max(arr, size, i + 1);

        return ((arr[i] >= temp) ? arr[i] : temp);

        // if (arr[i] >= temp)
        // {
        //     return arr[i];
        // }

        // else
        // {
        //     return temp;
        // }
    }

}
