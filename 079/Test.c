#include <stdio.h>

void calculate_area_and_perimeter(double*, double*, double, double);

int main(void)
{
    double l, b;
    printf("Enter the length and breadth: ");
    scanf("%lf", &l);
    scanf("%lf", &b);

    double area;
    double perimeter;
    calculate_area_and_perimeter(&area, &perimeter, l, b);

    printf("Area of rectangle is %g\n", area);
    printf("Area of perimeter is %g\n", perimeter);

    return 0;
}

void calculate_area_and_perimeter(double* ptr_area, double* ptr_perimeter, double l, double b)
{
    *ptr_area = l * b;
    *ptr_perimeter = 2 * (l + b);
}
