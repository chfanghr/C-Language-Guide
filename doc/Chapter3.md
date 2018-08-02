# Chapter3 变量与常量数据

&emsp;&emsp;在程序的世界中,可以让计算机按照指令做很多事情,如进行数值计算,图像显示,语音对话,视频播放,天文计算,发送邮件,游戏绘图以及任何我们可以想象到的事情.要完成这些任务,程序需要使用数据,即承载信息的数字与字符. <br>
&emsp;&emsp;在计算机中,数据的性质和表示方式可能不同.所以需要将相同性质的数据归类,并用一定数据类型描述.任何数据对用户都呈现常量和变量两种形式.常量是指程序在运行时其值不能改变的量.常量不占内存,在程序运行时它作为操作对象直接出现在运算器的各种寄存器中.变量是指在程序运行时其值可以改变的量.变量的功能就是存储数据.例子: <br>

* [example:src/Chapter3.c](../src/Chapter3.c)
```C
#include <stdio.h>

int main(){
    const int a=99;//a是一个常量
    int b;//b是一个变量
    b=100;//数字100是一个常量
    printf("%d\n",b);
    b=0;
    printf("%d\n",b);
    printf("%d\n",a);
    return 0;
}
```
&emsp;&emsp;编译,运行:
```sh
$ cc Chapter3.c -o Chapter3
$ ./Chapter3
100
0
99
```
&emsp;&emsp;顾名思义,常量就是在程序编写时就已经确定了的运行时不可变的量,而变量恰恰相反,是在运行时可以发生变化的量.<br>
&emsp;&emsp;等等,这东西是怎么回事,为什么说a是个常量呢?
```C
const int a=99;//a是一个常量
```
&emsp;&emsp;如果a是个变量的话,按照我们的定义,a可以在运行时被修改,比如:
* [example:Chapter3_1.c](../src/Chapter3_1.c)
```C
#include <stdio.h>

int main(){
    const int a=100;
    printf("%d\n",a);
    a=99;//修改a的量
    printf("%d\n",a);
    return 0;
}
```
&emsp;&emsp;然后我们试图编译这个源文件:
```sh
$ cc Chapter3_1.c -o Chapter3_1
Chapter3_1.c: In function ‘main’:
Chapter3_1.c:6:6: error: assignment of read-only variable ‘a’
     a=99;//修改a的量
```
&emsp;&emsp;于是编译器报错了...编译失败了<br>
&emsp;&emsp;为啥?<br>
&emsp;&emsp;其实`const`是C语言的一个关键字,用来在声明一个量时表明这是一个常量.因此,当我们试图修改常量a时产生了一个语法错误,导致编译失败.

---
2018.7.29 18:36