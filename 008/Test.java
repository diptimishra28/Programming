// import java.util.Scanner;

// class Test
// {
//     public static void main(String []args)
//     {
//         Scanner sc = new Scanner(System.in);

//         int n;
//         System.out.print("Enter a positive integer: ");
//         n = sc.nextInt();

//         int largest = 0;

//         if (n > largest)
//         {
//             largest = n;
//         }
//         n = sc.nextInt();

//         if (n > largest)
//         {
//             largest = n;
//         }
//         n = sc.nextInt();

//         if (n > largest)
//         {
//             largest = n;
//         }
//         n = sc.nextInt();

//         if (n > largest)
//         {
//             largest = n;
//         }
//         n = sc.nextInt();

//         if (n > largest)
//         {
//             largest = n;
//         }

//         System.out.println(largest + " is the largest");
//     }
// }

import java.util.Scanner;

 class Test
 {
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);

        int n, largest;
        System.out.print("Enter a positive integer: ");

        largest = sc.nextInt();

////////////////////////////////////////////////////////

        // if (n > largest)
        // {
        //     largest = n;
        // }

        n = sc.nextInt();

        if (n > largest)
        {
            largest = n;
        }

/////////////////////////////////////////

        n = sc.nextInt();

        if (n > largest)
        {
            largest = n;
        }
///////////////////////////////////////////
        n = sc.nextInt();

        if (n > largest)
        {
            largest = n;
        }
///////////////////////////////////////////
        n = sc.nextInt();

        if (n > largest)
        {
            largest = n;
        }
////////////////////////////////////////////
        System.out.println(largest + " is the largest");
    }

 }

/*

Enter 5 positive integers: 3 2 1 2 2
3 is the largest

*/
