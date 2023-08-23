import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Enter lower and upper limits: ");
        ll = sc.nextInt();
        ul = sc.nextInt();

        int new_ll = ll + (ll % 2);
        int new_ul = ul - (ul % 2);

        if (new_ll == new_ul)
        {
            System.out.println(new_ll);
        }

        else
        {
            while (new_ll <= new_ul - 4)
            {
                System.out.print(new_ll + ", ");
                new_ll = new_ll + 2;
            }

            System.out.println(new_ll + " and " + new_ul);
        }
    }
}
