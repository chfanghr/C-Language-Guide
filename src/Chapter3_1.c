#include <stdio.h>

int main() {
  const int a = 100;
  printf("%d\n", a);
  a = 99; //修改a的量
  printf("%d\n", a);
  return 0;
}