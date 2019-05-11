#include <stdio.h>

int main()
{
    int table[10][10];
    int n;

    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 10; j++){
            table[i - 1][j - 1] = i * j;
        }
    }

    printf("Please enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, table[n - 1][i - 1]);
    }

    return 0;
}
