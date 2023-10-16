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

        // int* arr = (int*) malloc(5 * sizeof (int));
        int[] arr = new int[5];

        System.out.print("Enter 5 integers: ");

        for (int i = 0; i < 5; ++i)
        {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < 5; ++i)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println();

        // free((void*) arr);
        // Not required in Java
    }
}
