#include <stdio.h>

int smaller(int a, int b)
{
    int temp;

    if (a < b){
        temp = a;
    }
    else if (b < a){
        temp = b;
    }
    else {
        temp = 0;
    }
    return temp;
}

int main()
{
    int a, b, small;

    printf("Please enter two numbers: ");
    scanf("%d%d", &a, &b);

    small = smaller(a, b);
    printf("The smaller number is %d!\n", small);

    return 0;
}
