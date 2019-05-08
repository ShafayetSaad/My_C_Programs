#include <stdio.h>

int main()
{
    int x, y, sum;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    sum = x + y;
    printf("The value of (%d + %d) equals %d.\n", x, y, sum);

    return 0;
}
