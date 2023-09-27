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

                z = z + r;
                ++j;
            }

            System.out.println();
            ++i;
        }
    }
}


/*
Enter the number of rows: 5

01 06 11 16 21
02 07 12 17 22
03 08 13 18 23
04 09 14 19 24
05 10 15 20 25

01 04 07
02 05 08
03 06 09

*/
