#include <stdio.h>

void to_upper(char string[]);

int main(void) {
    char text[100];
    scanf("%99s", text);

    to_upper(text);
    printf("%s\n", text);
}

void to_upper(char string[]) {
    for (int i = 0; string[i] != '\0'; ++i) 
        if (string[i] >= 'a' && string[i] <= 'z') 
            string[i] = string[i] - 'a' + 'A'; 
}
