#include <stdio.h>

int calculate_factorial(int);

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, calculate_factorial(n));

    return 0;
}

while (n <= 1)
{
    
}
/*

1)
Enter a positive integer: 1
1! = 1

2)
Enter a positive integer: 5
5! = 120

*/
