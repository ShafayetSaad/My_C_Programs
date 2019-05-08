#include <stdio.h>

int main()
{
    float num;
    printf("Please enter a floating point number: ");
    scanf("%f", &num);
    printf("The number you have entered is %f!\n", num);
    printf("The number you have entered is %.2f!\n", num);

    float x, y, sum;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    sum = x + y;
    printf("The value of (%f + %f) equals %f.\n", x, y, sum);

    return 0;
}
