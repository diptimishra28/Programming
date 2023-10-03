import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        System.out.print("Prime factors - ");

        for (int i = 1; i <= n; ++i)
        {
            if ((n % i == 0) && (is_prime(i)))
            {
                System.out.print(i + " ");
            }
        }
    }

    static boolean is_prime(int z)
    {
        if (z == 1)
        {
            return false;
        }

        else
        {
            boolean z_is_prime = true;
            int i = 2;

            while (i * i <= z)
            {
                if (z % i == 0)
                {
                    z_is_prime = false;
                    break;
                }

                ++i;
            }

            return z_is_prime;
        }
    }
}

/*
  1)
  Enter a positive integer: 15
  Prime factors - 3 5

  2)
  Enter a positive integer: 48
  Prime factors - 2 3

*/

