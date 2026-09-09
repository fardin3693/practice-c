#include <stdio.h>

int main() {

  int a[100];
  int *p = a;

  for (int i = 0; i < 100; i++) {
    printf("%d ", *(p + i));
  }

  return 0;
}
