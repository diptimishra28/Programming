#include <stdio.h>

int main (void)
{
    printf("Enter an integer and a character: ");

    int a;
    scanf("%d", &a);
    printf("\nYour integer is %d\n", a);

    char b;
    scanf("%c", &b);
    scanf("%c", &b);
    printf("Your character is %c\n", b);

    return 0;
}

/*

Enter an integer and a character: 10 a

Your integer is 10
Your character is a

*/
