// #include <stdio.h>

// int main(void)
// {
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     int s;
//     printf("Enter starting point: ");
//     scanf("%d", &s);

//     while (s % n != 0)
//     {
//         ++s;
//     }
//     printf("The next multiple is %d\n", s);

//     return 0;
// }

/*

Enter a positive integer: 13
Enter starting point: 50
The next multiple is 52

Enter a positive integer: 20
Enter starting point: 40
The next multiple is 40

*/

#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("Enter 2 positive integers: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    int hcf = 0;
    int i = 1;

    while ((i <= n1) && (i <= n2))
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            hcf = i;
        }

        ++i;
    }

    int lcm = (n1 * n2) / hcf;
    printf("LCM = %d\n", lcm);

    return 0;

}

/*
1)
Enter 2 positive integers: 1 5
LCM = 5

2)
Enter 2 positive integers: 7 8
LCM = 56

*/
