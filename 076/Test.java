import java.util.Scanner;
import java.lang.Math;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Enter lower limit and upper limit: ");
        ll = sc.nextInt();
        ul = sc.nextInt();

        while (ll <= ul)
        {
            boolean ll_is_prime = is_prime(ll);
            boolean ll_is_armstrong = is_armstrong(ll);

            if (ll_is_prime && ll_is_armstrong)
            {
                System.out.println(ll + " is prime as well as armstrong");
            }

            else if (ll_is_prime)
            {
                System.out.println(ll + " is only prime");
            }

            else if (ll_is_armstrong)
            {
                System.out.println(ll + " is only armstrong");
            }

            else
            {
                System.out.println(ll + " is neither prime nor armstrong");
            }

            ++ll;
        }
    }

    static boolean is_prime(int n)
    {
        if (n == 1)
        {
            return false;
        }

        else
        {
            boolean n_is_prime = true;
            int i = 2;

            while (i * i <= n)
            {
                if (n % i == 0)
                {
                    n_is_prime = false;
                    break;
                }

                ++i;
            }

            return n_is_prime;
        }
    }

    static boolean is_armstrong(int i)
    {
        int x = i;
        int y = i;

        int no_of_digits = 0;

        while (i > 0)
        {
            ++no_of_digits;
            i = i / 10;
        }

        int sum = 0;

        while (x > 0)
        {
            int last_digit = x % 10;
            sum = sum + (int) Math.pow((double) last_digit, (double) no_of_digits);
            x = x / 10;
        }

        return sum == y;
    }
}

/*

Enter lower and upper limits: 7 13

7 is prime as well as armstrong
8 is only armstrong
9 is only armstrong
10 is neither prime nor armstrong
11 is only prime
12 is neither prime nor armstrong
13 is only prime

*/
