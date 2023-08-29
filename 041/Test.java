import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a non-negative integer: ");
        n = sc.nextInt();

        int a = n;
        int rev = 0;

        while (n > 0)
        {
            rev = (rev * 10) + (n % 10);
            n = n / 10;
        }

        if (rev == a)
        {
            System.out.println(a + " is a palindrome");
        }

        else
        {
            System.out.println(a + " is not a palindrome");
        }
    }
}
