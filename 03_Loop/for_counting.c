#include <stdio.h>

int main()
{
    int i;
    int end;

    printf("Please enter how much you want to count: ");
    scanf("%d", &end);

    for (i = 1; i <= end; i++){
        if (i > 10000){
            printf("Limit exceeded!\n");
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}
