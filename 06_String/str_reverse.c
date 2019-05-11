#include <stdio.h>

int main()
{
    char str[30], str_rev[30];
    int length = 0, i, j;

    printf("Enter something:\n");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++){
        length += 1;
    }

    for (i = length - 1, j = 0; i >= 0; i--){
        str_rev[j] = str[i];
        j++;
    }
    str_rev[j] = '\0';
    printf("%s\n", str_rev);


    return 0;
}
