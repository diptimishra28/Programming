import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        char character;
        System.out.print("Enter a character: ");
        character = sc.next().charAt(0);

        System.out.println("Your character is " + character);
    }
}

/*
Enter a character: a
Your character is a
*/
