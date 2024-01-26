#include <stdio.h>
#include <stdlib.h>

int search(int*, int, int, int);

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof (int));

    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &(arr[i]));
    }

    int target;
    printf("Enter element to be searched: ");
    scanf("%d", &target);

    int index_of_target = search(arr, target, 0, n);

    if (index_of_target != -1)
    {
        printf("%d found at %d index\n", target, index_of_target);
    }

    else
    {
        printf("%d not found\n", target);
    }

    return 0;
}

int search(int* arr, int target, int i, int n)
{
    if (i == n)
    {
        return -1;
    }

    else if (target == arr[i])
    {
        return i;
    }

    else
    {
       return search(arr, target, i + 1, n);

    }

}
