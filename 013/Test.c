// #include <stdio.h>

// int main(void)
// {
//     printf("Enter 2 characters: ");

//     // char a;
//     // scanf("%c", &a);

//     // char b;
//     // scanf("%c", &b);
//     // scanf("%c", &b);

//     char a, b;
//     scanf("%c%c%c", &a, &b, &b);

//     printf("Your characters are %c and %c\n",a, b);

//     return 0;
// }

#include <stdio.h>

int main(void)
{
    char a;
    printf("Enter 2 characters: ");
    scanf("%c", &a);

    printf("Your characters are %c", a);

    scanf("%c", &a);
    scanf("%c", &a);
    printf(" and %c\n", a);

    return 0;
}


/*

Enter 2 characters: a b
Your characters are a and b

*/


