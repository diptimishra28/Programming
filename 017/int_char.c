#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Your integer is %d\n\n", n);

    char c;
    printf("Enter a character: ");
    scanf("%c%c", &c, &c);
    printf("your character is %c\n\n", c);

    char d;
    printf("Enter a character: ");
    scanf("%c%c", &d, &d);
    printf("your character is %c\n\n", d);

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Your integer is %d\n", num);

    return 0;
}




/*

Enter an integer: 10
Your integer is 10

Enter a character: a
Your character is a

Enter a character: b
Your character is b

Enter an integer: 20
Your integer is 20

*/
