/*
using malloc

Enter 5 integers 10 20 30 40 50
10 20 30 40 50
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
        // int* arr = (int*) malloc(n * sizeof (int));
        int[] arr = new int[n];

        System.out.print("Enter " + n + " integers: ");

        for (int i = 0; i < n; ++i)
        {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < n; ++i)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println();

        // free((void*) arr);
        // Not required in Java
    }
}
