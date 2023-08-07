#include <stdio.h>

int main(void)
{
    printf("Enter 5 characters: ");

    char a, b, c, d, e;
    scanf("%c%c%c%c%c%c%c%c%c",&a, &b, &b, &c, &c, &d, &d, &e, &e);

    printf("Your characters are %c, %c, %c, %c and %c\n", a, b, c, d, e);

    return 0;
}

/*

Enter 5 characters: a b c d e
Your characters are a, b, c, d and e

*/

