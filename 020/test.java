import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int amount;
        System.out.print("Enter an amout: Rs. ");
        amount = sc.nextInt();

        System.out.println("\nThe notes required are :-\n");

        System.out.println("2000: " + amount / 2000);
        amount = amount % 2000;

        System.out.println("500: " + amount / 500);
        amount = amount % 500;

        System.out.println("200: " + amount / 200);
        amount = amount % 200;

        System.out.println("100: " + amount / 100);
        amount = amount % 100;

        System.out.println("50: " + amount / 50);
        amount = amount % 50;

        System.out.println("20: " + amount / 20);
        amount = amount % 20;

        System.out.println("10: " + amount / 10);
        amount = amount % 10;

        System.out.println("5: " + amount / 5);
        amount = amount % 5;

        System.out.println("2: " + amount / 2);
        amount = amount % 2;

        System.out.println("1: " + amount / 1);
    }
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
