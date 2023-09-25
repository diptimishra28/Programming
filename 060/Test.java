import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows (odd) (>=5): ");
        r = sc.nextInt();

        int i = 1;
        int s = (r / 2) + 1;

        while (i <= s - 1)
        {
            System.out.print("  ");
            ++i;
        }

        System.out.println("*");

        ///////////////////////////////////////////////////////////////////

        i = 2;

        while (i <= s)
        {
            int j = 1;

            while (j <= s -i)
            {
                System.out.print("  ");
                ++j;
            }
            ////////////////////////////////////////////////////////////////
            System.out.print("* ");
            ////////////////////////////////////////////////////////////////
            int k = 1;

            while (k <= i - 2)
            {
                System.out.print("  ");
                ++k;
            }
            ////////////////////////////////////////////////////////////////
            System.out.println("* ");
            ++i;
        }
////////////////////////////////////////////////////////////////////////////////

        i = s - 1;

        while (i >= 2)
        {
            int j = 1;

            while (j <= s - i)
            {
                System.out.print("  ");
                ++j;
            }

            System.out.print("* ");

            int k = 1;

            while (k <= i - 2)
            {
                System.out.print("  ");
                ++k;
            }

            System.out.println("* ");
            ++i;
        }

        int l = 1;

        while (l <= s - 1)
        {
            System.out.print("  ");
            ++l;
        }

        System.out.println("*");
    }
}


/*
Enter the number of rows (odd) (>= 5): 9

        *
      * *
    *   *
  *     *
*       *
  *     *
    *   *
      * *
        *
*/
