#include <stdio.h>
#define NOT_BLANK '-'

int main() {
    int c;
    int lc;

    lc = NOT_BLANK;

    while ((c = getchar()) != EOF) {

        if (c == ' ')  {
            if (lc != ' ')
                putchar(c);
        }

        else 
            putchar(c);
        
        lc = c;
    }

}





