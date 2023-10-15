// #include <stdio.h>

// int* func(void);

// int main(void)
// {
//     int* ptr = 200;
//     printf("%d\n", *ptr);

//     return 0;
// }

// int* func(void)
// {
//     int x = 10;
//     return &x;
// }

/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int* func(void);

int main(void)
{
    int* ptr = func();
    printf("%d\n", *ptr);

    free(ptr);

    return 0;
}

int* func(void)
{
    int* x = (int*) malloc(sizeof (int));
    *x = 10;
    return x;
}
