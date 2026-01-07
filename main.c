#include <stdio.h>

int main(int argc, char *argv[]) {

  char *current_char = argv[1];

  if (current_char[0] == ' ') {

    printf("current_char: %s\n", current_char);
  }
}
