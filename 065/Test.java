import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows: ");
        r = sc.nextInt();

        int i = 1;
        int alpha = (r + 1) / 2;

        while (i <= alpha)
        {

            int j = 1;

            while (j <= alpha - i)
            {
                System.out.print("  ");
                ++j;
            }

            ///////////////////////////////////////////

            j = 1;

            while (j <= i)
            {
                System.out.print((char) ('A' + j - 1) + " ");
                ++j;
            }
            ///////////////////////////////////////////

            j = 1;

            while (j < i)
            {
                System.out.print((char) ('A' + i - j - 1) + " ");
                ++j;
            }

            System.out.println();
            ++i;
        }

///////////////////////////////////////////////////////////////////////////

        i = alpha - 1;

        while (i >= 1)
        {

            int j = 1;

            while (j <= alpha - i)
            {
                System.out.print("  ");
                ++j;
            }

           //////////////////////////////////////////

            j = 1;

            while (j <= i)
            {
                System.out.print((char) (j + 'A' - 1) + " ");
                ++j;
            }

            ////////////////////////////////////////////

            j = 1;

            while (j < i)
            {
                System.out.print((char) ('A' + i - j- 1) + " ");
                ++j;
            }

            System.out.println();
            --i;
       }

    }
}



/*
Enter the number of rows (odd): 7

      A
    A B A
  A B C B A
A B C D C B A
  A B C B A
    A B A
      A
*/
