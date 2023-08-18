import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int s1, s2, s3;
        System.out.print("Enter the side lengths: ");
        s1 = sc.nextInt();
        s2 = sc.nextInt();
        s3 = sc.nextInt();

        if ((s1 + s2 <= s3) || (s1 + s3 <= s2)|| (s2 + s3 <= s1))
        {
            System.out.println("It is an invalid triangle");
        }

        else if ((s1 == s2) && (s2 == s3))
        {
            System.out.println("It is an equilateral triangle");
        }

        else if ((s1 != s2) && (s2 != s3) && (s3 != s1))
        {
            System.out.println("It is a scalene triangle");
        }

        else
        {
            System.out.println("It is an isosceles triangle\n");
        }
    }
}





/*

1)
Enter the side lengths: 4 10 7
It is a scalene triangle

2)
Enter the side lengths: 4 6 4
It is an isosceles triangle

3)
Enter the side lengths: 5 5 5
It is an equilateral triangle

4)
Enter the side lengths: 4 10 6
It is an invalid triangle

 */
