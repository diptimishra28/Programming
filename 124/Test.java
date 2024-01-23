import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter size of array: ");
        n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter " + n + " integers: ");

        for (int i = 0; i < n; ++i)
        {
            arr[i] = sc.nextInt();
        }

        System.out.print("maximum integer of array : " + max(arr, n, 0));

        System.out.println();
    }

    static int max(int[] ref, int size, int i)
    {
        if (i == size - 1)
        {
            return ref[i];
        }

        else
        {
            // int temp = max(ref, size, i + 1);

            // if (ref[i] >= temp)
            // {
            //     return ref[i];
            // }
            // else
            // {
            //     return temp;
            // }

            int temp = max(ref, size, i + 1);

            return ((ref[i] >= temp) ? ref[i] : temp);
        }
    }
}

