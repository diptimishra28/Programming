#include <stdio.h>

int main(void)
{
    int ul, ll;
    printf("Enter upper and lower limit: ");
    scanf("%d%d", &ul, &ll);

    while (ul >= ll)
    {
        printf("%d ", ul);
        --ul;
    }

    printf("\n");

    return 0;
}




/*

Enter upper and lower limits: 10 5
10 9 8 7 6 5

*/
