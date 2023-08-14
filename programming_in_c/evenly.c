#include <stdio.h>

int main() {
    int n, m;

    scanf("%i", &n);
    scanf("%i", &m);

    if (n % m == 0) {
        printf("%i is evenly divisible by %i \n", n, m);
    }
}
