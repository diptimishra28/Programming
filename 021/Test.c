#include <stdio.h>

int main(void)
{
    int s1, s2, s3;
    printf("Enter the side lengths: ");
    scanf("%d%d%d", &s1, &s2, &s3);

    if ((s1 + s2 <= s3) || (s1 + s3 <= s2)|| (s2 + s3 <= s1))
    {
        printf("It is an invalid tringle\n");
    }

    else if ((s1 == s2) && (s2 == s3))
    {
        printf("It is an equilateral triangle\n");
    }

    else if ((s1 != s2) && (s2 != s3) && (s3 != s1))
    {
        printf("It is a scalene triangle\n");
    }

    else
    {
        printf("It is an isosceles triangle\n");
    }

    return 0;
}

/*

1)
Enter the side lengths: 4 10 7
It is a scalene triangle

2)
Enter the side lengths: 4 6 4
It is an isosceles triangle

3)
Enter the side lengths: 5 5 5
It is an equilateral triangle

4)
Enter the side lengths: 4 10 6
It is an invalid triangle

 */
