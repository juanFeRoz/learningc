#include <stdio.h>

int main(void) {
    int n = 0xff;
    printf("%x \n", n);
    n >>= 1;
    printf("%x \n", n);
}
