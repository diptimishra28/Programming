import java.util.Scanner;

class Test
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("* * * * * * * * * * * * * *");
        System.out.println("* Choice   Operation      *");
        System.out.println("*                         *");
        System.out.println("* 1        Addition       *");
        System.out.println("* 2        Subtraction    *");
        System.out.println("* 3        Multiplication *");
        System.out.println("* * * * * * * * * * * * * *\n");

        int a, b;
        System.out.print("Enter 2 integers: ");
        a = sc.nextInt();
        b = sc.nextInt();

        int choice;
        System.out.print("Enter your choice: ");
        choice = sc.nextInt();
        System.out.print("\n");

        if (choice == 1)
        {
            System.out.println(a + " + " + b + " = " + (a + b));
        }

        else if (choice == 2)
        {
            System.out.println(a + " - " + b + " = " + (a - b));
        }

        else
        {
            System.out.println(a + " * " + b + " = " + (a * b));
        }

    }

}











/*

* * * * * * * * * * * * * *
* Choice   Operation      *
*                         *
* 1        Addition       *
* 2        Subtraction    *
* 3        Multiplication *
* * * * * * * * * * * * * *

Enter 2 integers: 10 5
Enter your choice: 2

10 - 5 = 5

*/
