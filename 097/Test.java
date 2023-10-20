/*

1)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 4

4 found

2)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 6

6 not found

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

        int target;
        System.out.print("Enter element to be searched: ");
        target = sc.nextInt();

        int index_of_target = find(arr, target);

        if (index_of_target != -1)
        {
            System.out.println(target + " found at " + index_of_target  + " index");
        }

        else
        {
            System.out.println(target + " not found");
        }

    }

    static int find(int[] arr, int target)
    {
        int index_of_target = -1;

        int i = 0;

        while (i < arr.length)
        {
            if (target == arr[i])
            {
                index_of_target = i;
                break;
            }

            ++i;
        }

        return index_of_target;
    }

}
