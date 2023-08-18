// this program uses equality sign
import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        double unit;
        System.out.print("Enter the units: ");
        unit = sc.nextDouble();

        if (unit <= 50.0)
        {
            System.out.println("Rs. " + unit * 0.50);
        }

        else if (unit <= 150.0)
        {
            System.out.println("Rs. " + (50.0 * 0.50) +
                                        ((unit - 50.0) * 0.75));
        }

        else if (unit <= 250.0)
        {
            System.out.println("Rs. " + (50.0 * 0.50) +
                                        (100.0 * 0.75) +
                                        ((unit - 150.0) * 1.20));
        }

        else
        {
            System.out.println("Rs. " + (1.2 * (50.0 * 0.50) +
                                        (100.0 * 0.75) +
                                        (100.0 * 1.20) +
                                        ((unit - 250.0) * 1.50)));
        }
    }
}








/*

1)
Enter the number of units: 20.3
Rs. 10.15

2)
Enter the number of units: 115.7
Rs. 74.28

3)
Enter the number of units: 180.5
Rs. 136.60

4)
Enter the number of units: 260.2
Rs. 282.36

*/
