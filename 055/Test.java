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
            for (int j = 1; j <= (2 * r) - 1; ++j)
            {
                if ((i > j) || (i + j > 2 * r))
                {
                    System.out.print("  ");
                }

                else
                {
                    System.out.print("* ");
                }
            }

            System.out.println();
        }
    }
}

/*

Enter the number of rows: 5

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

11 12 13 14 15 16 17 18 19
21 22 23 24 25 26 27 28 29
31 32 33 34 35 36 37 38 39
41 42 43 44 45 46 47 48 49
51 52 53 54 55 56 57 58 59
*/
