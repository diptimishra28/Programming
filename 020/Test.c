#include <stdio.h>

int main(void)
{
    int amount;
    printf("Enter an amount: Rs. ");
    scanf("%d", &amount);

    printf("\nThe notes required are :-\n");

    // 5423 / 2000 = 2 (quotient)
    printf("2000: %d\n", amount / 2000);
    amount = amount % 2000; // 5423 % 2000 = 1423(remainder)

    // 1423 / 500 = 2(quotient)
    printf("500: %d\n", amount / 500);
    amount = amount % 500; // 1423 % 500 = 423

     // 423 / 200 = 2
    printf("200: %d\n", amount / 200);
    amount = amount % 200; // 423 % 200 = 23

    // 23 / 100 = 0
    printf("100: %d\n", amount / 100);
    amount = amount % 100; // 23 % 100 = 23

    // 23 / 50 = 0
    printf("50: %d\n", amount / 50);
    amount = amount % 50; //23 % 50 = 23

    // 23 / 20 = 1
    printf("20: %d\n", amount / 20);
    amount = amount % 20; //23 % 20 = 3

    // 3 / 10 = 0
    printf("10: %d\n", amount / 10);
    amount = amount % 10; // 3 % 10 = 3

    // 3 / 5 = 0
    printf("5: %d\n", amount / 5);
    amount = amount % 5; // 3 % 5 = 3

    // 3 / 2 = 1
    printf("2: %d\n", amount / 2);
    amount = amount % 2; // 3 % 2 = 1

    // 1 / 1 = 1
    printf("1: %d\n", amount / 1); // 1 % 1 = 0

    return 0;
}

/*

Enter an amount: Rs. 5423

The notes required are :-
2000: 2
500: 2
200: 2
100: 0
50: 0
20: 1
10: 0
5: 0
2: 1
1: 1

*/
