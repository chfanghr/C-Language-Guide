#include <stdio.h>

int main() {
  int a = 20;
  int b = 5;
  int c = 6;
  printf("a = %d b = %d c = %d\n", a, b, c);
  printf("a + b = %d\n", a + b);
  printf("a - c = %d\n", a - c);
  printf("a * b = %d\n", a * b);
  printf("a / c = %d\n", a / c);
  printf("a %% c = %d\n", a % c); /*两个%才会输出一个%*/
  return 0;
}