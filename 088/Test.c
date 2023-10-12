/*

1)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 4

4 found

2)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 6

6 not found

*/

// #include <stdio.h>

// int find(int*, int);

// int main(void)
// {
//     int arr[5];
//     printf("Enter 5 integers: ");

//     for (int i = 0; i < 5; ++i)
//     {
//         scanf("%d", arr + i);
//     }

//     int target;
//     printf("Enter element to be searched: ");
//     scanf("%d", &target);

//     int index_of_target = find(arr, target);

//     if (index_of_target != -1)
//     {
//         printf("%d found at %d index\n", target, index_of_target);
//     }

//     else
//     {
//         printf("%d not found\n", target);
//     }

//     return 0;
// }

// int find(int* arr, int target)
// {
//     int index_of_target = -1;

//     int i = 0;

//     while (i < 5)
//     {
//         if (target == *(arr + i))
//         {
//             index_of_target = i;
//             break;
//         }

//         ++i;
//     }

//     return index_of_target;
// }


/*

1)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 4

4 found at index 3

2)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 6

6 not found

*/




#include <stdio.h>

int find(int*, int);

int main(void)
{
    int arr[5];
    printf("Enter 5 integers: ");

    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &(arr[i]));
    }

    int target;
    printf("Enter element to be searched: ");
    scanf("%d", &target);

    int index_of_target = find(arr, target);

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

int find(int* arr, int target)
{
    int index_of_target = -1;

    int i = 0;

    while (i < 5)
    {
        if (target == arr[i])
        {
            index_of_target = i;
            break;
        }

        ++i;
    }

    return index_of_target;
}
