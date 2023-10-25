import java.util.Scanner;

class Student
{
    int roll_number;
    double marks1;
    double marks2;
    double marks3;
}

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the number of students :- ");
        n = sc.nextInt();

        Student[] p = new Student[n];

        for (int i = 0; i < n; ++i)
        {
            p[i] = new Student();
        }

        for (int i = 0; i < n; ++i)
        {
            System.out.println("Enter the detail of student " + (i + 1));

            System.out.print("Roll Number: ");
            (p[i]).roll_number = sc.nextInt();

            System.out.print("Marks1: ");
            (p[i]).marks1 = sc.nextDouble();

            System.out.print("Marks2: ");
            (p[i]).marks2 = sc.nextDouble();

            System.out.print("Marks3: ");
            (p[i]).marks3 = sc.nextDouble();
        }

        System.out.println();

        double max_sum = 0.0;
        int topper = 0;

        for (int i = 0; i < n; ++i)
        {
            double sum = ((p[i]).marks1) + ((p[i]).marks2) + ((p[i]).marks3);

            if (sum > max_sum)
            {
                max_sum = sum;
                topper = i;
            }
        }

        System.out.println("Student has got highest marks " + (topper + 1));
    }
}
