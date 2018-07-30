#include <stdio.h>
int main() {
  int a, b;
  a = b = 5;
  printf("%d      %d\n", a--, --b);
  printf("%d      %d\n", a--, --b);
  printf("%d      %d\n", a--, --b);
  printf("%d      %d\n", a--, --b);
  printf("%d      %d\n", a--, --b);
  return 0;
}