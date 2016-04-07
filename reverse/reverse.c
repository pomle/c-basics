#include <stdio.h>

void reverse(char *str) {
  int i = -1, j = 0;
  char c;

  while (str[++i] != '\0');

  while (--i > j) {
    c = str[i];
    str[i] = str[j];
    str[j++] = c;
  }
}

int main(int argc, char **argv) {
  reverse(argv[1]);
  printf("%s\n", argv[1]);
}
