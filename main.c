#include <stdio.h>

int main(int argc, char *argv[]) {

  int input = getchar();

  while (input >= '0' && input <= '9') {

    printf("%s\n", "This is a number");
    return input;
  }

  printf("%s\n", "This is not a number");
}
