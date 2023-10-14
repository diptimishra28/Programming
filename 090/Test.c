/*
Enter 2 integers: 5 7
5 + 7 = 12
*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int* p = (int*) malloc(sizeof (int));
//     printf("Enter an integer: ");
//     scanf("%d", p);

//     printf("Your integer is %d\n", *p);

//     free(p);

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* p = (int*) malloc(sizeof (int));
    int* q = (int*) malloc(sizeof (int));
    printf("Enter two integers: ");
    scanf("%d", p);
    scanf("%d", q);

    printf("Your integer is %d\n", (*p) + (*q));

    free(p);
    free(q);

    return 0;
}
