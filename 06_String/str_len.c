#include <stdio.h>

int main()
{
    char str[30];
    int length = 0;

    printf("Enter something:\n");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++){
        length += 1;
    }

    printf("Length of %s is %d.\n", str, length);

    return 0;
}
