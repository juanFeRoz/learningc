#include <stdio.h>
#include <stdbool.h>

bool is_alpha(const char c);
bool is_num(const char c);
int count_words(const char string[]);

int main(void) {
    const char text[] = ".1 -2 3 400,000.5 Isn't my home. It isn't!'";

    printf("%s - words = %i\n", text, count_words(text));
}

int count_words(const char string[]) {
    int i, word_count = 0;
    bool looking_for_word = true;

    for (i = 0; string[i] != '\0'; ++i) {
        if (is_alpha(string[i]) || is_num(string[i])) {
            if (looking_for_word) {
                ++word_count;
                looking_for_word = false;
            }
        }
        else if (string[i] == '\'' && !looking_for_word) {
            looking_for_word = false; 
        }
        else if((string[i] == '.' || string[i] == ',') && is_num(string[i - 1])) {
            looking_for_word = false;
        }
        else {
            looking_for_word = true;
        }
    }

    return word_count;
}

bool is_alpha(const char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    }
    else {
        return false;
    }
}

bool is_num(const char c) {
    if (c >= '0' && c <= '9')
        return true;
    else
        return false;
}
