#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
    int c, nw, lw[100], state;

    for (int i = 0; i < 100; ++i) {
        lw[i] = 0;
    }

    nw = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }

        else if (state == OUT) {
            ++nw;
            ++lw[nw];
            state = IN;
        }

        else if (state == IN) {
            ++lw[nw];
        }
    }

    putchar('\n');

    for (int i = 1; i <= nw; ++i) {
        for (int j = 1; j <= lw[i]; ++j) {
            putchar('#');
        }

        putchar('\n');
    }
}
