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

        for (int i = 0; i < n; ++i)
        {
            System.out.println("Roll Number " + (p[i]).roll_number);
            System.out.println("Marks1: " + (p[i]).marks1);
            System.out.println("Marks2: " + (p[i]).marks2);
            System.out.println("Marks3: " + (p[i]).marks3);
        }
    }
}
