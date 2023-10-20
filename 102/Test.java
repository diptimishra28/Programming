/*

Enter the details of student 1 :-
Roll Number: 100
Marks1: 80.5
Marks2: 75.0
Marks3: 78.5

Enter the details of student 2 :-
Roll Number: 101
Marks1: 81.0
Marks2: 76.0
Marks3: 79.5

Student 2 scored more than Student 1

*/


import  java.util.Scanner;

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

        Student ref1 = new Student();

        System.out.println("Enter the details of student : ");

        System.out.print("Roll number: ");
        ref1.roll_number = sc.nextInt();

        System.out.print("Marks1: ");
        ref1.marks1 = sc.nextDouble();

        System.out.print("Marks1: ");
        ref1.marks2 = sc.nextDouble();

        System.out.print("Marks1: ");
        ref1.marks3 = sc.nextDouble();

        System.out.println();

        Student ref2 = new Student();

        System.out.println("Enter the details of student : ");

        System.out.print("Roll number: ");
        ref2.roll_number = sc.nextInt();

        System.out.print("Marks1: ");
        ref2.marks1 = sc.nextDouble();

        System.out.print("Marks1: ");
        ref2.marks2 = sc.nextDouble();

        System.out.print("Marks1: ");
        ref2.marks3 = sc.nextDouble();

        System.out.println();

        double sum1 = (ref1.marks1) + (ref1.marks2) + (ref1.marks3);
        double sum2 = (ref2.marks1) + (ref2.marks2) + (ref2.marks3);

        if (sum1 > sum2)
        {
            System.out.println("Student 1 scored more than student 2");
        }

        else
        {
            System.out.println("Student 2 scored more than student 1");
        }
    }
}
