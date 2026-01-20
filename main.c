#include <stdio.h>

int main(int argc, char *argv[]) {

  int num = 0;
  int ch;

  while ((ch = getchar()) != EOF && ch != '\n') {

    if (ch == ' ' || ch == '\t') {

      continue;
    }

    if (ch >= '0' && ch <= '9') {

      num = num * 10 + (ch - '0');

    } else {

      printf("%s\n", "This is not a number!");
      break;
    }
  }

  printf("%d\n", num);
}
