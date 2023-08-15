import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in)

        System.out.print("Enter 5 characters: ");

        char a, b, c, d, e;
        a = sc.next().charAt(0);
        b = sc.next().charAt(0);
        c = sc.next().charAt(0);
        d = sc.next().charAt(0);
        e = sc.next().charAt(0);

        System.out.println("Your characters are " + a + ","
                                                  + b + ","
                                                  + c + ","
                                                  + d + ","
                                                     + e + );
    }
}
