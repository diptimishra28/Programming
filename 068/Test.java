import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        if (is_even(n) == true)
        {
            System.out.println(n + " is even");
        }

        else
        {
            System.out.println(n + " is odd");
        }
    }

    static boolean is_even(int n)
    {
        if (n % 2 == 0)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
}
