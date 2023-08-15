import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter 2 characters: ");

        char a;
        a = sc.next().charAt(0);

        System.out.print("Your characters are " + a + " and ");

        a = sc.next().charAt(0);
        System.out.print(+ a);

    }
}
