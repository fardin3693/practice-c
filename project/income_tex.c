#include <stdio.h>

int main() {
  int income, tex = 0;

  printf("Enter income: ");
  scanf("%d", &income);
  if (income <= 0) {
    tex = 0;
  } else if (income < 250000) {
    tex = 0;
  }

  else if (income > 250000 && income < 500000) {
    tex = 0.05 * (income - 250000);
  }

  else if (income >= 500000 && income < 1000000) {
    tex = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
  } else {
    tex = 10000;
  }

  printf("Your have to give %d$ tex for your income", tex);

  return 0;
}
