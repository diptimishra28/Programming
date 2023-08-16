import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter an integer: ");
        n = sc.nextInt();
        System.out.println("Your integer is " + n);

        char c;
        System.out.print("\nEnter a character: ");
        c = sc.next().charAt(0);
        System.out.println("Your character is " + c);

        System.out.print("\nEnter a character: ");
        c = sc.next().charAt(0);
        System.out.println("Your character is " + c);

        System.out.print("\nEnter an integer: ");
        n = sc.nextInt();
        System.out.println("Your integer is " + n);
    }
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
