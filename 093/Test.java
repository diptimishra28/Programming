/*

1)
Enter 10 integers: 1 0 -2 3 4 -5 -7 8 9 5
1 3 4 8 9 5

2)
Enter 10 integers: -1 0 0 -1 -2 -3 0 -4 -5 0


*/


import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the number of integers: ");
        n = sc.nextInt();

        // int* arr = (int*) malloc(5 * sizeof (int));
        int[] arr = new int[n];

        System.out.print("Enter " + n + " integers: ");

        for (int i = 0; i < n; ++i)
        {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] > 0)
            {
                System.out.print(arr[i] + " ");
            }
        }

        System.out.println();
    }
}
