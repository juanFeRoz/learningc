#include <stdio.h>

int main(void) {
    int n;
    scanf("%i", &n);
    if (n & 1) {
        printf("is odd\n");
    }
}
