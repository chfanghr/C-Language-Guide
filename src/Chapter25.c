#include <stdio.h>
#define MAX(a,b) (a>b)?a:b
/*带参数的宏定义*/
main()
{
int x,y,max;
printf("input two numbers: ");
scanf("%d %d",&x,&y);
max=MAX(x,y);
printf("max=%d\n",max);
/*宏调用*/
}