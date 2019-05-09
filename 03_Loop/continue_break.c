#include <stdio.h>

int main()
{
    int i = 0;

    printf("Even numbers.\n");
    while (i <= 100){
        i++;
        if (i % 2 == 0){
            continue;
        }
        if (i > 50){
            break;
        }
        printf("%d\n", i);
    }

    printf("Odd numbers.\n");
    for (i = 1; i <= 100; i++){
        if (i % 2 != 0){
            continue;
        }
        if (i > 50){
            break;
        }
        printf("%d\n", i);
    }
}
