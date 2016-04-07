#include <stdio.h>
#include <stdlib.h>

char* reverse(char *str) {
  int i = -1, j = 0;

  while (str[++i] != '\0');

  char *rev = malloc(i);

  while (i != -1) {
    rev[j++] = str[--i];
  }
  rev[j] = '\0';

  return rev;
}

int main(int argc, char **argv) {
  char *rev = reverse(argv[1]);
  printf("Reversed: %s\n", rev);
  free(rev);
}
