import java.util.Scanner;

class Test
{
    public static void main(Static[] args)
    {
        Scanner sc = new scanner(System.in);

        int n1, n2;
        System.out.print("Enter 2 positive integers: ");

        n1 = sc.nextInt();
        n2 = sc.nextInt();

        int i = 1;
        int hcf = 0;

        while ((i <= n1) && (i <= n2))//(i is less than or equal to the smaller number)
        {
            if ((n1 % i == 0) && (n2 % i == 0))
            {
                hcf = i;
            }

            ++i;
        }

        System.out.println("HCF = " + hcf);
    }
}


/*

1)
Enter 2 positive integers: 1 5
HCF = 1

2)
Enter 2 positive integers: 7 21
HCF = 7

*/
