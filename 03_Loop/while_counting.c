#include <stdio.h>

int main()
{
    int i = 0;
    int end;

    printf("Please enter how much you want to count: ");
    scanf("%d", &end);

    while (i <= end){
        printf("%d\n", i++);
        if (i > 10000){
            printf("Limit exceeded!\n");
            break;
        }
    }

    return 0;
}
