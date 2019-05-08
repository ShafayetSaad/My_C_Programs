#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: \n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("%c is a lowercase letter!\n", ch);
    }
    else{
        printf("%c is a uppercase letter!\n", ch);
    }

    return 0;
}
