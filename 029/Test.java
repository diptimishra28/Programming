import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    (
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Enter upper and lower limits: ");
        ul = sc.nextInt();
        ll = sc.nextInt();

        while (ll < ul)
        {
            System.out.println(ll + " ");
            ll++;
        }

        System.out.println();
    )
}
