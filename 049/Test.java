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

        if (n == 1)
        {
            System.out.println("1 is an armstrong number");
        }

        else
        {
            int no_of_digits = 0;

            int n1 = n;
            int n2 = n;

            while (n > 0)
            {
                ++no_of_digits;
                n = n / 10;
            }

            int sum = 0;

            while (n1 > 0)
            {
                int ld = n1 % 10;
                sum = sum + (int) Math.pow((double) ld, (double) no_of_digits);
                n1 = n1 / 10;
            }

            if (sum == n2)
            {
                System.out.println(n2 + " is an armstrong number");
            }

            else
            {
                System.out.println(n2 + " is not an armstrong number");
            }

        }

    }
}


/*

1)
Enter a positive integer: 1
1 is neither prime nor composite

2)
Enter a positive integer: 10
10 is composite

3)
Enter a positive integer: 13
13 is prime

*/
