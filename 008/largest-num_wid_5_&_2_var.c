//#include <stdio.h>

// int main(void)
// {
//     int n1, n2, n3, n4, n5;
//     printf("Enter 5 positive integers: ");
//     scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

//     int largest = 0;

//     // Here, we have used if, if, if, if, if.
//     // We cannot use if, else if, else if, else if, else if, because in an
//     // if else ladder, if a condition is true, then all upcoming statements in
//     // that ladder are ignored.

//     if (n1 > largest)
//     {
//         largest = n1;
//     }

//     if (n2 > largest)
//     {
//         largest = n2;
//     }

//     if (n3 > largest)
//     {
//         largest = n3;
//     }

//     if (n4 > largest)
//     {
//         largest = n4;
//     }

//     if (n5 > largest)
//     {
//         largest = n5;
//     }

//     printf("%d is the largest\n", largest);

//     return 0;
// }

/*

Enter 5 positive integers: 3 2 1 2 2
3 is the largest

*/


#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter 5 positive integers: ");
    scanf("%d", &n);

    int largest = 0;

    if (n > largest)
    {
        largest = n;
    }

    scanf("%d", &n);

    if (n > largest)
    {
        largest = n;
    }

    scanf("%d", &n);

    if (n > largest)
    {
        largest = n;
    }

    scanf("%d", &n);

    if (n > largest)
    {
        largest = n;
    }

    scanf("%d", &n);

    if (n > largest)
    {
        largest = n;
    }

     printf("%d is the largest\n", largest);

    return 0;

}
