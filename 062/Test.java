import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows (odd) (>= 3): ");
        r = sc.nextInt();

        int s = (r + 1) / 2;

        int i = 1;

        while (i <= r)
        {
            System.out.print("* ");
            ++i;
        }

        System.out.println();
        /////////////////////////////////////////////////////////////////////

        i = 2;

        while (i <= s - 1)
        {
            System.out.print("* ");

            /////////////////////////////////////////////////////

            int j = 1;

            while (j <= i - 2)
            {
                System.out.print("  ");
                ++j;
            }

            /////////////////////////////////////////////////////

            System.out.print("* ");

            ////////////////////////////////////////////////

            j = 1;

            while (j <= r - (i * 2))
            {
                System.out.print("  ");
                ++j;
            }

            ///////////////////////////////////////////////

            System.out.print("* ");

            /////////////////////////////////////////////

            j = 1;

            while (j <= i - 2)
            {
                System.out.print("  ");
                ++j;
            }

            /////////////////////////////////////////////

            System.out.print("* ");

            ////////////////////////////////////////////

            System.out.println();
            ++i;
        }
        ////////////////////////////////////////////////////////////////////

        System.out.print("* ");
        ///////////////////////////////////////////////

        i = 1;

        while (i <= s - 2)
        {
            System.out.print("  ");
            ++i;
        }
        System.out.print("* ");

        i = 1;

        while (i <= s - 2)
        {
            System.out.print("  ");
            ++i;
        }
        System.out.println("* ");
////////////////////////////////////////////////////////////////////////////////


        i = s - 1;

        while (i >= 2)
        {
            System.out.print("* ");

            /////////////////////////////////////////////////////

            int j = 1;

            while (j <= i - 2)
            {
                System.out.print("  ");
                ++j;
            }

            /////////////////////////////////////////////////////

            System.out.print("* ");

            ////////////////////////////////////////////////

            j = 1;

            while (j <= r - (i * 2))
            {
                System.out.print("  ");
                ++j;
            }

            ///////////////////////////////////////////////

            System.out.print("* ");

            /////////////////////////////////////////////

            j = 1;

            while (j <= i - 2)
            {
                System.out.print("  ");
                ++j;
            }

            /////////////////////////////////////////////

            System.out.print("* ");

            ////////////////////////////////////////////

            System.out.println();
            --i;
        }

        /////////////////////////////////////////////////

        i = 1;

        while (i <= r)
        {
            System.out.print("* ");
            ++i;
        }

        System.out.println();
    }
}


/*
Enter the number of rows (odd) (>= 5): 9

* * * * * * * * *  1
* *           * *  2
*   *       *   *  3
*     *   *     *  4
*       *       *  5
*     *   *     *  4
*   *       *   *  3
* *           * *  2
* * * * * * * * *  1

*/

