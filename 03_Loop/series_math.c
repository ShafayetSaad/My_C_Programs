#include <stdio.h>

int main()
{
    int n, sum, start, diff, end;

    printf("Enter where to start: ");
    scanf("%d", &start);
    printf("Enter where to end: ");
    scanf("%d", &end);
    printf("Enter how much difference: ");
    scanf("%d", &diff);

    for (n = start, sum = 0; n <= end; n += diff){
        sum += n;
    }
    printf("Sum is %d\n", sum);

    return 0;
}
