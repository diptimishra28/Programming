import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows: ");
        r = sc.nextInt();

        for (int i = 1; i <= r; ++i)
        {
            System.out.print("* ");
        }

        System.out.println();

    ///////////////////////////////////////////////////////////////

        for (int i = 2; i <= r - 1; ++i)
        {
            // print i - 1 spaces
            for (int j = 1; j <= i - 1; ++j)
            {
                System.out.print("  ");
            }

            // print 1 star
            System.out.print("*");

            // print r - i - 1 spaces
            for (int i = 1; i <= r - i - 1; ++i)

            // print 1 star
            System.out.print("*");

        }

    ///////////////////////////////////////////////////////////////

        for (int i = 1; i <= r - 1; ++i)
        {
            System.out.print("  ");
        }

        System.out.println("*");
    }
}


/*
Enter the number of rows (>= 4): 5

* * * * *
  *     *
    *   *
      * *
        *
*/
