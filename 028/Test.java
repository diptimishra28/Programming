import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int ul, ll;
        System.out.print("Enter upper and lower limits: ");
        ul = sc.nextInt();
        ll = sc.nextInt();

        while (ul >= ll)
        {
            System.out.print(ul + " ");
            --ul;
        }

        System.out.println();
    }
}
