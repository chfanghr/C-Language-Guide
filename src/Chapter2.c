/*一个简单的C程序*/
#include <stdio.h> /* 包含另一个文件 */
int main(void)     /*主函数*/
{
  int num;               /*声明num*/
  printf("Hello World"); /*调用printf()函数*/
  printf("\n");
  num = 100;           /*给num赋值100*/
  printf("%d\n", num); /*打印变量num*/
  return 0;            /*一切正常,返回0*/
}