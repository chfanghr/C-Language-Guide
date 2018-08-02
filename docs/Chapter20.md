# Chapter20 字符串与指针

&emsp;&emsp;前面我们已经讨论过字符数组与字符串,字符指针也可以指向一个字符串,可以用字符串常量对字符 指针进行初始化.例如:
```C
char *str = "Surprise" ;
```
&emsp;&emsp;这是对字符指针进行初始化.此时,字符指针指向一个字符串常量的首地址. <br>
&emsp;&emsp;还可以用字符数组来存放字符串,例如: 
```C
char string[ ] = "Surprise motherfu*ker";
```
&emsp;&emsp;在这个语句中,string 是数组名,代表字符数组的首地址.因此可以通过数组名 string 来访问字符串. <br>
&emsp;&emsp;字符串指针和字符串数组两种方式都可以访问字符串,但它们有着本质的区别:字符指针 str 是个变量,可以改变 str 使它指向不同的字符串, 但不能改变 str 所指向的字符串常量的值. 而string 是一个数组,可以改变数组中保存的内容.应注意字符串指针和字符串数组的区别.
* [example:src/Chapter20.c](../src/Chapter20.c)
```C
#include<stdio.h>
int main()
{
        char *str = "Surprise";
        char string[]="Surprise motherfu*ker";
        str[0]='C'; //试图修改str指向的常量区的字符串内容
        return 0;
}
```