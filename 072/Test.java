import java.util.Scanner;

class Test
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a non-negative integer: ");
        n = sc.nextInt();

        if (is_palindrome(n))
        {
           System.out.println(n + " is a palindrome");
        }

        else
        {
            System.out.println(n + " is not a palindrome");
        }

    }

    static boolean is_palindrome(int n)
    {
        int x = n;
        int rev = 0;

        while (x > 0)
        {
            rev = rev * 10 + x % 10;
            x = x / 10;
        }

        return rev == n;
    }
}
