#include <stdio.h>

int str_to_int(const char string[]);

int main(void) {
    printf ("%i\n", str_to_int("-245"));
    printf ("%i\n", str_to_int("-100") + 25);
    printf ("%i\n", str_to_int("-13x5"));
}


int str_to_int(const char string[]) {
    int i, int_value, result = 0;

    for (i = (string[0] == '-') ? 1 : 0; string[i] >= '0' && string[i] <= '9'; ++i) {
        int_value = string[i] - '0';
        result = result * 10 + int_value;
    }
    if (string[0] == '-')
        result *= -1;
    return result;
}
