#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
    int c, nc, nw, nl, nt, state;

    nc = nw = nl = nt = 0;

    state = OUT;

    while ((c = getchar()) != EOF) {
        ++nc;

        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;

        if (c == '\n' || c == '\t' || c == ' ') 
            state = OUT;

        else if (state == OUT) {
            state = IN;
            ++nw;
        } 
    }

    printf("%d %d %d %d \n", nc, nw, nl, nt);
}
