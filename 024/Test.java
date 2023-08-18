// without using equality sign.
import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        double unit;
        System.out.print("Enter the units: ");
        unit = sc.nextDouble();

        if (unit > 250.0)
        {
            System.out.println("Rs. " + (1.2 * (50.0 * 0.50) +
                                        (100.0 * 0.75) +
                                        (100.0 * 1.20) +
                                        ((unit - 250.0) * 1.50)));
        }

        else if (unit > 150.0)
        {
            System.out.println("Rs. " + (50.0 * 0.50) +
                                        (100.0 * 0.75) +
                                        ((unit - 150.0) * 1.20));
        }

        else if (unit > 50.0)
        {
            System.out.println("Rs. " + (50.0 * 0.50) +
                                        ((unit - 50.0) * 0.75));
        }

        else
        {
            System.out.println("Rs. " + unit * 0.50);
        }
    }
}
