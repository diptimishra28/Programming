import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter positive integer: ");
        n = sc.nextInt();

        if (n == 1)
        {
            System.out.println("Factors = 1");
        }

        else
        {
            System.out.print("Factors = ");

            int i = 1;

            while (i < n)
            {
                // n % i == 0
                if (n % i == 0)
                {
                    System.out.print(i + ", ");
                }

                ++i;
            }

            System.out.println(" and " + n);
        }
    }
}

/*

1)
Enter a positive integer: 1
Factors = 1

2)
Enter a positive integer: 10
Factors = 1, 2, 5 and 10

3)
Enter a positive integer: 13
Factors = 1 and 13

*/
