import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        double base;
        System.out.print("Enter the base: ");
        base = sc.nextDouble();

        int exponent;
        System.out.print("Enter the integral exponent: ");
        exponent = sc.nextInt();

        double result = 1.0;
        int exp = exponent;

        if ((base > 0.0) && (exponent > 0))
        {
            System.out.println(base + " ^ " + exponent);

            while (exponent >= 1)
            {
                result = result * base;
                --exponent;
            }

            System.out.println(" = " + result);
        }

        else if ((base > 0.0) && (exponent == 0))
        {
            System.out.println(base + " ^ " + exponent);
        }

        else if ((base > 0.0) && (exponent < 0))
        {
            System.out.println(base + " ^ " + exponent);

            while(exponent < 0)
            {
                result = result * base;
                ++exponent;
            }

            System.out.println(" = " + 1 / result);
        }

        else if ((base == 0.0) && (exponent > 0))
        {
            System.out.println(base + " ^ " + exponent + " = 0");
        }

        else if ((base == 0.0) && (exponent == 0))
        {
            System.out.println("0 ^ 0 is undefined");
        }

        else if ((base == 0.0) && (exponent < 0))
        {
            System.out.println("Dividing by 0 is undefined");
        }

        else if ((base < 0.0) && (exponent > 0))
        {
            while (exponent >= 1)
            {
                System.out.print(" = " + result);
                result = result * base;
                --exponent;
            }

            System.out.println(base + " ^ " + exponent);
        }

        else if ((base < 0.0) && (exponent == 0))
        {
            System.out.println(base + " ^ " + exponent + " = 1");
        }

        else if ((base < 0.0) && (exponent < 0))
        {
            System.out.println(base + " ^ " + exponent);

            while (exponent < 0)
            {
                result = result * base;
                ++exponent;
            }

            System.out.println(" = " + (1 / result));
        }
    }
}



/*

Note: Try using %g with printf() to print double values.

1)
Enter the base: 1.2
Enter the integral exponent: 3

1.2 ^ 3 = 1.728

2)
Enter the base: -2.5
Enter the integral exponent: -2

-2.5 ^ -2 = 0.16

3)
Enter the base: 7
Enter the integral exponent: 0

7 ^ 0 = 1

4)
Enter the base: 0
Enter the integral exponent: 4

0 ^ 4 = 0

5)
Enter the base: 0
Enter the integral exponent: 0

0 ^ 0 is undefined

6)
Enter the base: 0
Enter the integral exponent: -3

Dividing by 0 is undefined

*/
