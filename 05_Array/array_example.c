#include <stdio.h>

int main()
{
    int numbers[5] = {2, 3, 5, 7, 11};

    for (int i = 4; i >= 0; i--){
        printf("%d\n", numbers[i]);
    }

    double maths[5] = {90.5, 92, 80, 95, 99.5};

    for (int roll = 1; roll <= 5; roll++){
        printf("ROll: %d got %.2lf marks in math!\n", roll, maths[roll-1]);
    }

    return 0;
}
