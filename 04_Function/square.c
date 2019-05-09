#include <stdio.h>

int square(int x)
{
    int temp;

    temp = x * x;
    return  temp;
}

int main()
{
    int a, sq;
    printf("Please enter a number: ");
    scanf("%d", &a);

    sq = square(a);
    printf("The square of %d is %d.\n", a, sq);

    return 0;
}
