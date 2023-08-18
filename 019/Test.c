#include <stdio.h>

int main(void)
{
    char n;
    printf("Enter a lowercase letter: ");
    scanf("%c", &n);

    if ((n == 'a') || (n == 'e') || (n == 'i') || (n == 'o') || (n == 'u'))
    {
        printf("%c is a vowel\n", n);
    }

    else
    {
        printf("%c is a consonant\n", n);
    }

    return 0;
}

/*

1)
Enter a lowercase letter: a
a is a vowel

2)
Enter a lowercase letter: b
b is a consonant

*/
