#include <stdio.h>

int main(void) {
    float numbers[10], number;
    int sum, i;
    
    sum = 0;

    for (i = 0; i < 10; ++i) {
        scanf("%f", &number);
        numbers[i] = number;
        sum = sum + number;
    }

    printf("The average is: %f \n", (sum / 10.0));
}
