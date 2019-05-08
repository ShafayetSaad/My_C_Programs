#include <stdio.h>

int main()
{
    int x;

    printf("Enter an integer number: ");
    scanf("%d", &x);

    if (x > 0){
        printf("%d is a positive number!\n", x);
    }
    else if (x < 0){
        printf("%d is a negative number!\n", x);
    }
    else{
        printf("%d is zero!\n", x);
    }

    return 0;
}

