import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int x, y;

        System.out.print("Enter 2 integers: ");
        x = sc.nextInt();
        y = sc.nextInt();

        if (x > y)
        {
            System.out.println(x + " is greater");
        }

        else if (x == y)
        {
            System.out.println("They are equal");
        }

        else // (x < y)
        {
            System.out.println(y + " is greater");
        }
    }
}






/*

1)
Enter 2 integers: 10 5
10 is greater

2)
Enter 2 integers: 5 5
They are equal

*/
