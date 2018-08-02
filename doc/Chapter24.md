# Chapter24 使用typedef定义类型

&emsp;&emsp;在 C 语言中,除系统定义的标准类型和用户自定义的结构体,共用体等类型之外,还可以使用类型说 明语句 `typedef` 定义新的类型来代替已有的类型.`typedef `语句的一般形式是: 
`typedef` 已定义的类型新的类型. 例如: 

```C
typedef int INTEGER; /*指定用 INTEGER 代表 int 类型*/
typedef float REAL; /*指定用 REAL 代表 float 类型*/
```
&emsp;&emsp;在具有上述 typedef 语句的程序中,下列语句就是等价的: 
```C
int i, j; /*与 INTEGER i, j;*/
float pi; /*与 REAL pi;*/
```
&emsp;&emsp;当然typedef的最常用的作用就是给结构体变量重命名.
* [example:src/Chapter24.c](../src/Chapter24.c)
```C
#include<stdio.h>
#include<string.h>
typedef struct _INFO
{
        int num;
        char str[256];
}INFO;
int main()
{
        struct _INFO A;
        INFO B;    //通过typedef重命名后的名字INFO与struct _INFO完全等价！
        A.num = 2014;
        strcpy(A.str,"Welcome to dotcpp.com");
        B=A;
        printf("This year is %d %s\n",A.num,A.str);
        printf("This year is %d %s\n",B.num,B.str);
        return 0;
}
```