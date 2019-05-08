#include <stdio.h>

int main()
{
    int x, y, sum;
    printf("Enter the value of x:\n");
    scanf("%d", &x);
    printf("Enter the value of y:\n");
    scanf("%d", &y);
    sum = x + y;
    printf("The value of (%d + %d) equals %d.\n", x, y, sum);

    return 0;
}
