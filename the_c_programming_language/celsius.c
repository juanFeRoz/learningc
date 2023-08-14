#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

float celsius(int fahr);

int main() {

    for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d %6.1f \n", fahr, celsius(fahr));
    }
}

float celsius(int fahr) {
    return (5.0/9.0) * (fahr - 32);
}
