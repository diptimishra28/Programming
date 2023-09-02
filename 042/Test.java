import java.util.Scanner;
import java.lang.Math;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        int no_of_digits = (int) Math.log10((double) n) + 1;
        int div = (int) Math.pow(10.0, (double) (no_of_digits - 1));

        int first_digit = n / div;
        int last_digit = n % 10;

        n = n / 10;
        div = div / 10;
        int middle_part = n % div;

        int swapped_number = (((last_digit * div) + middle_part) * 10) + first_digit;
        System.out.println("After swapping first and last digits, " + swapped_number);
    }
}
