import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter an integer and a character: ");

        int n;
        n = sc.nextInt();
        System.out.println("\nYour integer is " + n);

        char c;
        c = sc.next().charAt(0);
        System.out.println("Your character is " + c);
    }
}


/*

Enter an integer and a character: 10 a

Your integer is 10
Your character is a

*/
