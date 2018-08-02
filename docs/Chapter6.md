# Chapter6 其他运算符

&emsp;&emsp;C中大约有40个运算符,其中有些运算符比其他运算符要常用的多.我们前面已经讨论的那些是最常用的,现在我们将继续介绍几个比较有用的运算符. 

## 常年被人误认为函数的关键字`sizeof` 
&emsp;&emsp;`sizeof`是C语言的32个关键字之一,并非“函数”(我们会后面介绍),也叫长度(求字节)运算符,`sizeof`是一种单目运算符,以字节为单位返回某操作数的大小,用来求某一类型变量的长度.其运算对象可以是任何数据类型或变量. 

* [example:Chapter6.c](../src/Chapter6.c)
```C
#include<stdio.h>
int main()
{
        int n=0;
        int intsize = sizeof(int);
        printf("int sizeof is %d bytes\n",intsize);
        return 0;
}
```
&emsp;&emsp;在64位操作系统下,运行结果如下：
```sh
$ cc Chapter6.c -o Chapter6
$ ./Chapter6
int sizeof is 4 bytes
```

<!--TODO:还有一些没水的-->

---
2018.7.30 18.27