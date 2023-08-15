import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a character: ");

        char a, b;
        a = sc.next().charAt(0);
        b = sc.next().charAt(0);

        System.out.println("Your characters are " + a + " and " + b);
    }
}

/*

Enter 2 characters: a b
Your characters are a and b

*/
