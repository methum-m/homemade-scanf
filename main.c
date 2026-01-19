#include <stdio.h>

int main() {
  int num = 0; // stores the final number
  int ch;

  // Read characters until newline or EOF
  while ((ch = getchar()) != EOF && ch != '\n') {
    if (ch >= '0' && ch <= '9') {
      num = num * 10 + (ch - '0'); // convert char to number and accumulate
    } else {
      break; // stop if a non-digit character is found
    }
  }

  printf("Number entered: %d\n", num);
  return 0;
}
