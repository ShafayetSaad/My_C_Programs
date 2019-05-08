#include <stdio.h>

int main()
{
    char alf;

    printf("Please enter an alphabet: ");
    scanf("%c" , &alf);

    if (alf == 'a' || alf == 'e' || alf == 'i' || alf == 'o' || alf == 'u'){
        printf("%c is a vowel!\n", alf);
    }
    else if (alf == 'A' || alf == 'E' || alf == 'I' || alf == 'O' || alf == 'U'){
        printf("%c is a vowel!\n", alf);
    }
    else{
        printf("%c is a consonant!\n", alf);
    }

    return 0;
}
