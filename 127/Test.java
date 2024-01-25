import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int a, b;
        System.out.print("Enter two non negative integers: ");
        a = sc.nextInt();
        b = sc.nextInt();

        int temp = gcd(a, b);

        System.out.print("Hcd = " + temp);
        System.out.println();

        System.out.print("LCM = " + (a * b) / temp);
        System.out.println();
    }

    static int gcd(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }

        else
        {
            return (gcd(b, a % b));
        }
    }
}

