#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int numbers[151];
    int i, j;

    for (i = 2; i <= 150; ++i) 
        numbers[i] = 0;

    i = 2;

    while (i <= 150) {
        if (numbers[i] == 0)
            printf("%i ", i);
        for (j = 1; (i * j) <= 150; ++j) 
            numbers[i*j] = 1;
        ++i;
    }

    printf("\n");

}
