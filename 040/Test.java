import java.util.Scanner;
import java.lang.Math;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter an integer: ");
        n = sc.nextInt();

        int no_of_digits = (int) Math.log10((double) n) + 1;
        int div = (int) Math.pow(10.0, (double) (no_of_digits - 1));

        int sum = 0;

        while (n > 9)
        {
            int first_digit = n / div;
            System.out.print(first_digit + " + ");
            sum = sum + first_digit;
            n = n % div;
            div = div / 10;
        }

        System.out.println(n + " = " + (sum + n));
    }
}
