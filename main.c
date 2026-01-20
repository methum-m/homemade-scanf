#include <stdio.h>

int main(int argc, char *argv[]) {

  int num;
  int ch;

  while ((ch = getchar()) != EOF && ch != '\n') {

    if (ch >= '0' && ch <= '9') {

      num = num * 10 + (ch - '0');

    } else {

      printf("%s\n", "This is not a number!");
      break;
    }
  }
}
