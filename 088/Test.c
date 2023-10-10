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

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int arr[5];
    printf("Enter 5 integers: ");

    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", arr + i);
    }

    int target;
    printf("Enter element to be searched: ");
    scanf("%d", &target);

    bool target_is_found = false;

    int i = 0;

    while (i < 5)
    {
        if (target == arr[i])
        {
            target_is_found = true;
            break;
        }

        ++i;
    }

    if (target_is_found)
    {
        printf("%d found\n", target);
    }

    else
    {
        printf("%d not found\n", target);
    }

    return 0;
}



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


