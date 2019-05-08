#include <stdio.h>

int main()
{
    double num;
    printf("Please enter a floating point number: ");
    scanf("%lf", &num);
    printf("The number you have entered is %f!\n", num);
    printf("The number you have entered is %.2lf!\n", num);

    double x, y, sum;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of y: ");
    scanf("%lf", &y);
    sum = x + y;
    printf("The value of (%lf + %lf) equals %lf.\n", x, y, sum);

    return 0;
}
