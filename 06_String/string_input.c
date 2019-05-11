#include <stdio.h>

int main()
{
    char str[30];

    printf("Please enter something:\n");
    //scanf("%[^\n]", &str);
    //printf("You entered: %s\n", str);
    gets(str);
    printf("You entered: ");
    puts(str);
    //printf("You entered: %s\n", str);

    return 0;
}
