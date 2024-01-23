import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the value of n: ");
        n = sc.nextInt();

        System.out.print(fibonacci(n));

        System.out.println();
    }

    static int fibonacci(int n)
    {
        if (n == 1)
        {
            return 0;
        }

        else if (n == 2)
        {
            return 1;
        }

        else
        {
            return fibonacci(n - 2) + fibonacci(n - 1);
        }
    }
}

