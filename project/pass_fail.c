#include <stdio.h>

int main() {

  int math, physics, biology;

  printf("Enter the marks  in math: ");
  scanf("%d", &math);

  printf("Entre the marks in physics: ");
  scanf("%d", &physics);

  printf("Enter the marks in biology: ");
  scanf("%d", &biology);

  printf("Your provided marks are: %d, %d, %d\n", math, physics, biology);

  if (math <= 32 || physics <= 32 || biology <= 32) {
    printf("You failed becouse of individual marks.\n");
  } else if ((math + physics + biology) / 3 < 40) {
    printf("You are failed for the total percentage.\n");
  } else {
    printf("You passes\n");
  }

  return 0;
}
