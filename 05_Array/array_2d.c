#include <stdio.h>

int main()
{
    double maths[2][5];

    for (int c = 0; c < 2; c++){
        for (int r = 0; r < 5; r++){
            //printf("Enter your number: \n");
            scanf("%lf", &maths[c][r]);
        }
    }

    for (int c = 0; c < 2; c++){
        for (int r = 0; r < 5; r++){
            printf("Class: %d  Roll: %d  Marks: %.2lf\n", c+6, r+1, maths[c][r]);
        }
    }
    return 0;
}

