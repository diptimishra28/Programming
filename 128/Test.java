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



// public class Test
// {
//     public static void main(String[] args)
//     {
//         String a = "dip";
//         System.out.println(a);
//         //System.out.println(args[0]);
//     }
// }



/*

java- class variables, group of methods.

class is necessary bcz java is object oriented

Acess modifiers:-
public
private
protect

memory management

main has a static memory allocation
args - storing user input

static :- constant which does not change over time.
local variables are defined inside methods.

instance variables are those variable which are not defined in class or not in
method. deifined in main function

static variables are defined in class.



*/

/*

pseudo code:-

class ABC
 {
    static int a = 10; // static
    Func()
    {
        int b = 20;// local
    }
    psvm(s args)
    {
        int c = 30; // instance
    }

}

class car
{
    int static me; - object

    snake();
    PSVN(saras)
    {

    }
}

*/

//Simple interest


