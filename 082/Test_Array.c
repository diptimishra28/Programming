// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n", *((int*) 9142994778));
//     return 0;
// }


/*
Enter 5 integers 10 20 30 40 50
10 20 30 40 50
*/


// POINTER NOTATION //

#include <stdio.h>

int main(void)
{
    int arr[5];

    printf("Enter 5 integers ");

    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n");

    return 0;
}




// #include <stdio.h>

// int main(void)
// {
//     int arr[5];

//     printf("Enter 5 integers ");

//     for(int i = 0; i < 5; ++i)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for(int i = 0; i < 5; ++i)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");

//     return 0;
// }

