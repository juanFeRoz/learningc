#include <stdio.h>
#define MAXLINE 10

int line_length(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  while ((len = line_length(line, MAXLINE)) > 0)
    
    
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0)
    printf("%s %d \n", longest, len);
}

int line_length(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}

void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
