#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter positive integer: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("Factors = 1\n");
    }

    // else
    // {
    //     printf("Factors = ");

    //     int i = 1;

    //     while (i < n)
    //     {
    //         // n % i == 0
    //         if (n % i == 0)
    //         {
    //             printf("%d, ", i);
    //         }

    //         ++i;
    //     }

    //     printf(" and %d\n", n);
    // }

    // return 0;
//}
else
{
int i = 1;

while (i < n)
{
    if (n % i == 0)
    ++i;
}
int s = i; // 2nd last factor

int t = 1; //3rd last factor

while (t < s)
{
    if (n % t == 0)
    {
    printf("%d, ", t);
    ++t;
    }
}

printf("%d and %d", s, t);
}

return 0;
}



/*

1)
Enter a positive integer: 1
Factors = 1

2)
Enter a positive integer: 10
Factors = 1, 2, 5 and 10

3)
Enter a positive integer: 13
Factors = 1 and 13

*/
