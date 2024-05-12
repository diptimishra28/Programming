/*
Enter 5 integers 1 2 3 4 5
Their sum is - 15
*/


// import java.util.Scanner;

// class Test
// {
//     public static void main(String[] args)
//     {
//         Scanner sc = new Scanner(System.in);

//         int n;
//         System.out.print("Enter the number of integers: ");
//         n = sc.nextInt();

//         // int* arr = (int*) malloc(5 * sizeof (int));
//         int[] arr = new int[n];

//         System.out.print("Enter " + n + " integers: ");

//         for (int i = 0; i < n; ++i)
//         {
//             arr[i] = sc.nextInt();
//         }

//         int sum = 0;

//         for (int i = 0; i < n; ++i)
//         {
//             sum = sum + arr[i];
//         }

//         System.out.print("Their sum is - " + sum);

//         System.out.println();
//     }
// }

import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {

        int arr[] = {2, -3, 6, -5, 4, 2};
        int ps = Integer.MIN_VALUE;
        int index1 = -1;
        int index2 = -1;
        for(int i = 0; i < 5; i++)
        {
            int sum = 0;
            for(int j = i; j < 5; j++)
            {
                sum = sum + arr[j];
                if(sum > ps)
                {
                    index1 = i;
                    index2 = j;
                    ps = sum;
                }
            }
        }
    }
}


