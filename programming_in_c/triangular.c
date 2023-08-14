#include <stdio.h>

int main(void) {
    for (int i = 5; i <= 50; i += 5) {
        printf("%i \n", (i * (i + 1)) / 2);
    }
}
