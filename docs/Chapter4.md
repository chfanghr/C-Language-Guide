# Chapter4 数据类型和关键字 
&emsp;&emsp;在程序的世界中,承载一系列的信息的数字和字符都属于数据类型,但计算机需要一种方法来区别和使用这些不同的类型.具体的,C通过识别一些基本的数据类型做到这些.如果是常量数据,编译器一般通过其书写来辨认其类型,比如:123是整数,3.14浮点数(即小数).而变量则需要在声明语句中指定其类型,稍后会做详细介绍.我们先了解C语言的基本数据类型. <br>
## 基本数据类型
&emsp;&emsp;C语言的基本数据类型为:整型,字符型,实数型.这些类型按其在计算机中的存储方式可被分为两个系列,即整数(integer)类型和浮点数(floating-point)类型. <br>
&emsp;&emsp;这三种类型之下分别是:`short`,`int`,`long`,`char`,`float`,`double` 这六个关键字再加上两个符号说明符`signed`和`unsigned`就基本表示了C语言的最常用的数据类型.<br> 
&emsp;&emsp;下面列出了在32位操作系统下 常见编译器下的数据类型大小及表示的数据范围:

|类型名称|占字节数|其他叫法|表示的数据范围|
|----|---|---|---|
|char|1|signed char|-128 ~ 127|
|unsigned char|1|none|0 ~ 255|
|int|4|signed int|-2,147,483,648 ~ 2,147,483,647|
|unsigned int|4|unsigned|0 ~ 4,294,967,295|
|short|2|short int|-32,768 ~ 32,767|
|unsigned short|2|unsigned short int|0 ~ 65,535|
|long|4|long int|-2,147,483,648 ~ 2,147,483,647|
|unsigned long|4|unsigned long|0 ~ 4,294,967,295|
|float|4|none|3.4E +/- 38 (7 digits)|
|double|8|none|1.7E +/- 308 (15 digits)|
|long double|10|none|1.2E +/- 4932 (19 digits)|

&emsp;&emsp;在认识了这么多的数据类型之后,我们就可以根据不同的实际情况,在不同的问题中选择最符合的数据类型来使用.举个例子,如要计算两个数的和,我可以采用int类型定义两个变量,然后输出

```C
int a=24000,b=12345;//定义两个变量a,b并赋值
int c; //定义变量c用于计算a+b的和
c=a+b;
printf("a+b = %d",c);//输出结果
```

&emsp;&emsp;没错,可能您已经考虑到,如果a+b的和超出int类型的最大范围时的问题.这个就需要您根据不同的作用选择不同的数据类型存储了. 

## 关键字
&emsp;&emsp;在c语言中,为了定义变量,表达语句功能和对一些文件进行预处理,还必须用到一些具有特殊意义的字符,这就是关键字,我们用户自己定义的变量函数名等要注意不可以与关键字同名.<br>
&emsp;&emsp;C语言中的32个关键字:

|1|2|3|4|
|----|----|----|----|
|auto|double|int|struct
|break|else|long|switch
|case|enum|register|typedef
|char|extern|return|union
|const|float|short|unsigned
|continue|for|signed|void
|default|goto|sizeof|volatile
|do|if|static|while

---
2018.7.29 18:54