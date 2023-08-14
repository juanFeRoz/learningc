#include <stdio.h>
#define NOT_BLANK '-'

int main() {
    int c, lc;

    lc = NOT_BLANK;

    while ((c = getchar()) != EOF) {
        if (c == ' '){
            if (lc != ' ')
                putchar('\n');
        }
        else if (c == '\t')
            putchar('\n');
        else
            putchar(c);

        lc = c;
    }
}
