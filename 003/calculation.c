#include <stdio.h>

int main(void)
{
    int n, a;
    printf("Enter 2 integers: ");
    scanf("%d%d", &n, &a);
    
    printf("%d + %d = %d\n", n, a, n + a);
    printf("%d - %d = %d\n", n, a, n - a);
    printf("%d * %d = %d\n", n, a, n * a);
    
    return 0;
}



/*

Enter 2 integers: 5 10
5 + 10 = 15
5 - 10 = -5
5 * 10 = 50

*/