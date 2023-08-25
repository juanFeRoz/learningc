#include <stdio.h>

void substring(char source[], int start, int count, char result[]);

int main(void) {
    char text[] = "two words";
    char text_substring[100] = "";
    
    printf("%s\n", text);

    substring(text, 4, 20, text_substring);

    printf("%s\n", text_substring);
}


void substring(char source[], int start, int count, char result[]) {
    int i,j;
    for (i = start, j = 0; source[i] != '\0' && j < count; ++i, ++j) {
        result[j] = source[i];
    }

    result[j + 1] = '\0';

}
