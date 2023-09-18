import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int rows;
        System.out.print("Enter number of rows: ");
        rows = sc.nextInt();

        int columns;
        System.out.print("Enter number of columns: ");
        columns = sc.nextInt();

        for (int i = 1; i <= rows; ++i)
        {
            for (int j = 1; j <= columns; ++j)
            {
                System.out.print("* ");
            }

            System.out.println();
        }
    }
}

/*
    Enter the number of rows: 3
    Enter the number of columns: 5

    * * * * *
    * * * * *
    * * * * *
*/

/*

int i = 0;

while (i < n)
{
    printf("Hello\n");
    ++i;
}


is equivalent to


for (int i = 0; i < n; ++i)
{
    printf("Hello\n");
}

*/
