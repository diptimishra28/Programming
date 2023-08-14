import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int year;
        System.out.print("Enter a year:");
        year = sc.nextInt();

        if ((year % 4 == 0) && (year % 100 != 0))
        {
            System.out.println("It is a leap year");
        }

        else if ((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0))
        {
            System.out.println("It is a leap year");
        }

        else
        {
            System.out.println("It is not a leap year");
        }

    }
}





/*

Enter a year: 1000
It is not a leap year

*/
