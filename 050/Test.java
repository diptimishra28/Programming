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
            System.out.println("1 is neither prime nor composite");
        }

        else
        {
            boolean n_is_prime = true;
            int i = 2;

            while (i * i <= n) //(i <= (int) Math.sqrt((double) n))
            {
                if (n % i == 0)
                {
                    n_is_prime = false;
                    break;
                }

                ++i;
            }

            if (n_is_prime == true)
            {
                System.out.println(n + " is prime");
            }

            else
            {
                System.out.println(n + " is composite");
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
