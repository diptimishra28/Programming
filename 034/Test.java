import java.util.Scanner;

class test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Enter lower and uper limits: ");
        ll = sc.nextInt();
        ul = scnextInt();

        int sum = 0;
        
        while (ll <= ul)
        {
            sum = sum + ll;
            ++ll;
        }

        System.out.println("The sum is " + sum);
    }
}





/*
Enter lower and upper limits: 5 10
The sum is 45
*/

