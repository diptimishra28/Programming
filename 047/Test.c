#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("Enter 2 positive integers: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    int i = 1;
    int hcf = 0;

    while ((i <= n1) && (i <= n2))//(i is less than or equal to the smaller number)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            hcf = i;
        }

        ++i;
    }

    printf("HCF = %d\n", hcf);
}


/*

1)
Enter 2 positive integers: 1 5
HCF = 1

2)
Enter 2 positive integers: 7 21
HCF = 7

*/
