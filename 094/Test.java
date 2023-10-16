/*
Enter 5 integers 1 2 3 4 5
Their sum is - 15
*/


import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        // int* arr = (int*) malloc(5 * sizeof (int));
        int[] arr = new int[5];

        System.out.print("Enter 5 integers: ");

        for (int i = 0; i < 5; ++i)
        {
            arr[i] = sc.nextInt();
        }

        int sum = 0;

        for (int i = 0; i < 5; ++i)
        {
            sum = sum + arr[i];
        }

        System.out.print("Their sum is - " + sum);

        System.out.println();

    }
}
