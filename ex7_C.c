#include <stdio.h>

int main() {
    int numbers [5];

    numbers[0] = 1;
    numbers[1] =  numbers[0] * 2;
    numbers[2] =  numbers[1] * 2;
    numbers[3] =  numbers[2] * 2;
    numbers[4] =  numbers[3] * 2;

    for(int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;

    
}