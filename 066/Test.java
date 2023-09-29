import java.util.Scanner;
import java.lang.Math;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows (odd): ");
        r = sc.nextInt();

        int s = (r - 1) / 2;

        for (int i = -s; i <= s; ++i)
        {
            for (int j = -s; j <= s; ++j)
            {
                System.out.print(Math.max(Math.abs(i), Math.abs(j)) + " ");
            }

            System.out.println();
        }
    }
}

/*

Enter the number of rows (odd): 7

3 3 3 3 3 3 3
3 2 2 2 2 2 3
3 2 1 1 1 2 3
3 2 1 0 1 2 3
3 2 1 1 1 2 3
3 2 2 2 2 2 3
3 3 3 3 3 3 3

*/
