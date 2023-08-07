#include <stdio.h>

int main(void)
{
    printf("Enter the first character: ");
    char a;
    scanf("%c", &a);

    printf("Enter the second character: ");
    char b;
    scanf("%c%c", &b, &b);

    printf("Enter the third character: ");
    char c;
    scanf("%c%c", &c, &c);

    printf("\nYour characters are %c, %c and %c\n", a, b, c);

    return 0;
}




/*

Enter the first character: a
Enter the second character: b
Enter the third character: c

Your characters are a, b and c

*/



