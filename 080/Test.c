// #include <stdio.h>

// void swap(int, int);

// int main(void)
// {
//     int a = 5, b = 10;
//     printf("Before swapping, a = %d and b = %d\n", a, b);

//     swap(&a, &b);

//     printf("After swapping, a = %d and b = %d\n", a, b);

//     return 0;
// }

// void swap(int a, int b)
// {
//     int c = a;
//     a = b;
//     b = c;
// }

#include <stdio.h>

void swap(int*, int*, int, int)

int main(void)
{
    int a = 5, b = 10;
    printf("Before swapping, a = %d and b = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping, a = %d and b = %d\n", a, b);

    return 0;
}

void swap(int* ptr_a, int* ptr_b, int a, int b)
{
    *ptr_a = &b;
    
}




/*

Before swapping, a = 5 and b = 10
After swapping, a = 10 and b = 5

*/
