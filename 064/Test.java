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

        while (i <= r)
        {
            int z = i;
            int j = 1;

            while (j <= r)
            {
                if (z < 10)
                {
                    System.out.print("0" + z + " ");
                }

                else
                {

                    System.out.print(z + " ");
                }

                z = z + r - j;
                ++j;

            }

            System.out.println();
            ++i;
        }
    }

}

/*
Enter the number of rows: 5

01
02 06
03 07 10
04 08 11 13
05 09 12 14 15

*/
