#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d is neither prime nor composite\n", n);
    }

    else if (n % 1 == 0) // && (n % n == 0))
    {
        int i = 1;
        int count = 0; //count of factors

        while (i =< n)
        {
            if (n % i == 0)
            {
                ++count;
            }

            ++i;
        }



    else if
}

/*

1)
Enter a positive integer: 1
1 is neither prime nor composite

2)
Enter a positive integer: 10
10 is composite

3)
Enter a positive integer: 13
13 is prime

*/
