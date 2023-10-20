/*
reverse
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

        for (int i = 0; i < arr.length; ++i)
        {
            arr[i] = sc.nextInt();
        }

        System.out.println();

        reverse(arr);

        for (int i = 0; i < arr.length; ++i)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println();
    }

    static void reverse(int[] arr)
    {
        for (int i = 0; i < arr.length / 2; ++i)
        {
            swap(arr, i, arr.length - i - 1);
        }
    }

    static void swap(int[] arr, int index1, int index2)
    {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}
