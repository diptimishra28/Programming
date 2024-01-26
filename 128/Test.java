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

        reverse_arr(arr, 0, arr.length - 1);

        for (int i = 0; i < arr.length; ++i)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println();
    }

    static void reverse_arr(int[] arr, int i, int j)
    {
        if (i < j)
        {
            swap(arr, i, j);
            reverse_arr(arr, i + 1, j - 1);
        }
    }

    static void swap(int[] arr, int index1, int index2)
    {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}
