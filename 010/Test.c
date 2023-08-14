#include <stdio.h>

int main(void)
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0) && (year % 100 != 0))
    {
        printf("It is a leap year\n");
    }

    else if ((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0))
    {
        printf("It is a leap year\n");
    }

    else
    {
        printf("It is not a leap year\n");
    }

    return 0;

}


/*

Enter a year: 1000
It is not a leap year

*/
