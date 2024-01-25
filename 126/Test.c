#include <stdio.h>

int gcd(int, int);

int main(void)
{
    int a, b;
    printf("Enter two non negative integer: ");
    scanf("%d%d", &a, &b);

    int temp = gcd(a, b);

    printf("HCF = %d\n", temp);
    printf("lcm = %d\n", (a * b) / temp);

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    else
    {
        return (gcd(b, a % b));
    }

}
