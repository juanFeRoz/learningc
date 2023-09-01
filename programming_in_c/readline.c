#include <stdio.h>

void read_line(char *buffer);

int main(void) {
    char line[100];
    read_line(line);
    printf("%s\n", line);
}

void read_line(char *buffer) {
    char c;
    
    while ((c = getchar()) != '\n') {
        *buffer = c;
        buffer++;
    }

    *buffer = '\0';
    
}
