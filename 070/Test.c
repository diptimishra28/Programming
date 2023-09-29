#include <stdio.h>

int sum(int, int);

int main(void)
{
    int ll, ul;
    printf("Enter lower a: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    printf("Their sum is %d\n", sum(ll, ul));

    return 0;
}

int sum(int ll, int ul)
{
    return ll + ul;
}


/*
Enter lower and upper limits: 5 10
The sum is 45
*/
