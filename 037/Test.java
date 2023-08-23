import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter an integer: ");
        n = sc.nextInt();

        int a = 1;

        while (a <= 9)
        {
            System.out.print("\n" + n + " x " + a + " = " + (n * a));
            ++a;
        }
        
        System.out.println();
    }
}



/*

Enter an integer: 13

13 x 1 = 13
13 x 2 = 26
13 x 3 = 39
...
13 x 9 = 117

 */
