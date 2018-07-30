#include <stdio.h>

int main() {
  const int a = 99; // a是一个常量
  int b;            // b是一个变量
  b = 100;          //数字100是一个常量
  printf("%d\n", b);
  b = 0;
  printf("%d\n", b);
  printf("%d\n", a);
  return 0;
}