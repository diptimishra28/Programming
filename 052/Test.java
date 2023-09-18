import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Enter the number of terms: ");
        ll = sc.nextInt();
        ul = sc.nextInt();

        while (ll <= ul)
        {
            int i = 1;
            System.out.println();

            while (i < 10)
            {
                System.out.println(ll + " x " + i + " = " + (ll * i));
                ++i;
            }

            ++ll;
        }
    }
}


/*
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45

6 x 1 = 6
6 x 2 = 12
6 x 3 = 18
6 x 4 = 24
6 x 5 = 30
6 x 6 = 36
6 x 7 = 42
6 x 8 = 48
6 x 9 = 54

7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63

*/
