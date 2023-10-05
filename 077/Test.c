#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("Enter 2 integers: ");
    scanf("%d%d", &n1, &n2);

    int* ptr_n1 = &n1;
    int* ptr_n2 = &n2;

    printf("%d + %d = %d\n", n1, n2, *ptr_n1 + *ptr_n2);

    return 0;
}

/*
Enter 2 integers: 5 7
5 + 7 = 12
*/
