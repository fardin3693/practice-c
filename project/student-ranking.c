#include <stdio.h>

int main() {
  int mark;

  printf("Enter you mark: ");
  scanf("%a\n", &mark);
  if (mark < 0 || mark > 100) {
    printf("How did you get this marks");
  }

  else if (mark >= 80 && mark <= 100) {
    printf("You got A+\n");
  } else if (mark >= 70 && mark < 80) {
    printf("You got A\n");
  } else if (mark >= 60 && mark < 70) {
    printf("You got A-\n");
  } else if (mark >= 50 && mark < 60) {
    printf("You got B\n");
  } else if (mark >= 33 && mark < 50) {
    printf("You got C\n");
  } else if (mark < 33) {
    printf("failure is the killer of success....\n");
    printf("failure become piller of success when you are succedd.\n");
  }
  return 0;
}
