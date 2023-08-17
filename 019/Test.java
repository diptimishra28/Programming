import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        char n;
        System.out.print("Enter a lowercase letter: ");
        n = sc.next().charAt(0);

        if ((n == 'a') || (n == 'e') || (n == 'i') || (n == 'o') || (n == 'u'))
        {
        System.out.println(n + " is a vowel");
        }

        else
       {
        System.out.println(n + " is a consonant");
       }

    }
}

/*

1)
Enter a lowercase letter: a
a is a vowel

2)
Enter a lowercase letter: b
b is a consonant

*/
