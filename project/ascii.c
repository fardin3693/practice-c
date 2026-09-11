#include <stdio.h>

int main() {
  char ch;

  printf("please enter a single charecter: ");
  scanf("%c", &ch);

  if (ch >= 97 && ch <= 122) {
    printf("The value of is: %d\n", ch);
    printf("this charecter is lowercase.\n");
  } else if (ch >= 65 && ch <= 90) {
    printf("The value of is: %d\n", ch);
    printf("This charecter is uppercase.\n");
  } else {
    printf("The value of is: %d\n", ch);
    printf("This charecter is not any alphabet.\n");
  }
  return 0;
}
