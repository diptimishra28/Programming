#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int);

int main(void)
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (is_palindrome(n))
    {
        printf("%d is a palindrome\n", n);
    }

    else
    {
        printf("%d is not a palindrome\n", n);
    }

    return 0;
}

bool is_palindrome(int n)
{
    int x = n;
    int rev = 0;

    while (x > 0)
    {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }

//     if (rev == n)
//     {
//         return true;
//     }

//     else
//     {
//         return false;
//     }

    return rev == n;
}


/*

1)
Enter a non-negative integer: 1234
1234 is not a palindrome

2)
Enter a non-negative integer: 1000
1000 is not a palindrome

3)
Enter a non-negative integer: 12321
12321 is a palindrome

*/
