#include <stdio.h>

int main() {

  int a, b, c, d;

  printf("Enter four number gradually: \n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  if (a >= b && a >= c && a >= d) {
    printf("%d is greater among them.", a);
  } else if (b >= a && b >= c && b >= d) {
    printf("%d is greater among them.", b);
  } else if (c >= a && c >= b && c >= d) {
    printf("%d is greater among them.", c);
  } else if (d >= a && d >= b && d >= c) {
    printf("%d is greater among them.", d);
  }
  return 0;
}
