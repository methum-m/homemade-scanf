#include <stdio.h>

int main(int argc, char *argv[]) {

  int input = getchar();

  if (input <= 57 && input >= 48) {
    printf("%d\n", input);
    printf("%s\n", "This is a number value");
  }
}
