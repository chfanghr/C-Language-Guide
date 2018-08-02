# Chapter29 标准输入输出

## 字符输出函数`putchar()`
&emsp;&emsp;`putchar`函数是字符输出函数,其功能是在终端(显示器)输出单个字符.其一般调用形式为： 
```C
putchar(字符变量); 
```
&emsp;&emsp;例: 
```C
putchar(‘A’); /*输出大写字母A */
putchar(x);  /*输出字符变量x的值*/
putchar(‘\n’); /*换行*/
```

## 字符输入函数`getchar()`
&emsp;&emsp;`getchar`函数的功能是接收用户从键盘上输入的一个字符.其一般调用形式为： 
```
getchar(); 
```
&emsp;&emsp;`getchar`会以返回值的形式返回接收到的字符.通常的用法如下: 
```C
char c;  /*定义字符变量c*/
c=getchar(); /*将读取的字符赋值给字符变量c*/
```
## 格式化输出函数`printf()`
&emsp;&emsp;`printf`函数叫做格式输出函数,其功能是按照用户指定的格式,把指定的数据输出到屏幕上.`printf`函数的格式为: 
```C
printf(“格式控制字符串”,输出表项); 
```
&emsp;&emsp;其中格式控制字符串用来说明输出表项中各输出项的输出格式(好比我要吃苹果,告诉`printf`是做成罐头吃还是直接吃).输出表项列出了要输出的项,各输出项之间用逗号分开.输出表项也可以没有,则表示输出的是格式字符串本身.<br> 
&emsp;&emsp;格式控制字符串有两种：格式字符串和非格式字符串.非格式字符串在输出的时候原样打印；格式字符串是以%打头的字符串,在`%`后面跟不同格式字符,用来说明输出数据的类型,形式,长度,小数位数等.格式字符串的形式为： 
```C
% [输出最小宽度] [.精度] [长度] 类型 
```
&emsp;&emsp;例如,`%d`格式符表示 用十进制整形格式输出.`%f`表示用实型格式输出,`%5.2f` 格式表示输出宽度为5(包括小数点),并包含2位小数.常用的输出格式及含义如下:

|格式字符|意义|
|---|---|
|d , i	|以十进制形式输出有符号整数(正数不输出符号)
|O|	以八进制形式输出无符号整数(不输出前缀0)
|x|	以十六进制形式输出无符号整数(不输出前缀0x)
|U|	以十进制形式输出无符号整数
|f|	以小数形式输出单,双精度类型实数
|e|	以指数形式输出单,双精度实数
|g|	以%f或%e中较短输出宽度的一种格式输出单,双精度实数
|C|	输出单个字符
|S|输出字符串

&emsp;&emsp;关于`printf`的更多用法,请您自行上机实验. 
* [example:src/Chapter29.c](../src/Chapter29.c)   
```C
#include<stdio.h>
int main()
{
    int a=12;
    float b=3.1415;
    char c='A';
    printf("%d\n",a);
    printf("o%o\n",a);
    printf("0x%x\n",a);
    printf("%3.2f\n",b);
    printf("%c\n",c);
    getchar();
    return 0;
}
```
### `*`修饰符在`printf()`中的用法:<br>
&emsp;&emsp;假如您不想事先指定字段宽度,而是希望由程序来制定该值,那么您可以在字段宽度部分使用`*`代替数字来达到目的,但是您也必须使用一个参数来告诉函数宽度的值是多少.具体的说,如果转换说明符为`%*d`,那么参数列表中应该包括一个`*`的值和一个`d`的值,来控制宽度和变量的值.该技术也可以和浮点值一起使用来指定精度和字段宽度.您可以参考下面的例子： 

* [example:src/Chapter29_1.c](../src/Chapter29_1.c)
```C
/*使用可变宽度输出字段*/
#include<stdio.h>
int main(void)
{
    unsigned width,precision;
    int number = 256;
    double weight = 25.5;
    printf("Please input number's width:\n");
    scanf("%d",&width);
    printf("The number is: %*d\n",width,number);
    printf("Then please input width and precision:\n");
    scanf("%d %d",&width,&precision);
    printf("Weight = %*.*f\n",width,precision,weight);
    return 0;
}
```
&emsp;&emsp;gcc下运行过程及结果如下： 
```sh
$ ./a.out
Please input number's width:
6
The number is:    256
Then please input width and precision:
8 3
Weight =   25.500
```

### 关于`printf()`的返回值
&emsp;&emsp;`printf`函数的返回值是返回所打印的字符的数目.如有输出错误,那么`printf()`会返回一个负数(`printf()`的一些老版本会有不同的值).


## 格式化输入函数scanf

&emsp;&emsp;`scanf`函数称为格式输入函数,即按照格式字符串的格式,从键盘上把数据输入到指定的变量之中.`Scanf`函数的调用的一般形式为： 
```C
scanf(“格式控制字符串”,输入项地址列表); 
```
&emsp;&emsp;其中,格式控制字符串的作用与printf函数相同,但不能显示非格式字符串,也就是不能显示提示字符串.地址表项中的地址给出各变量的地址,地址是由地址运算符`&`后跟变量名组成的.<br> 
&emsp;&emsp;`Scanf` 函数中格式字符串的构成与`printf`函数基本相同,但使用时有几点不同.<br> 
1. 格式说明符中,可以指定数据的宽度,但不能指定数据的精度.例： 
```C
float a；
scanf(“%10f”,&a);  //正确
scanf(“%10.2f”,&a); //错误
```
2. 输入long类型数据时必须使用%ld,输入double数据必须使用%lf或%le. 
3. 附加格式说明符”*”使对应的输入数据不赋给相应的变量. 

&emsp;&emsp;`scanf()`函数所用的转换说明符与`printf()`所用的几乎完全相同.主要区别在于`printf()`把`%f`,`%e`,`%E`,`%g`,`%G`同时用于`float`类型和`double`类型,而`scanf()`只是把他们用于`float`类型,而用于`double`类型时要求使用`l`(字母l)修饰符.

|转换说明符 |意义|
|---|---|	
|%c|	把输入解释成一个字符
|%d	|把输入解释成一个有符号十进制整数
|%e,%f,%g,%a	|把输入解释成一个浮点数(%a是C99的标准)
|%E,%F,%G,%A	|把输入解释成一个浮点数(%A是C99的标准)
|%i	|把输入解释成一个有符号十进制整数
|%o	|把输入解释成一个有符号的八进制整数
|%p	|把输入解释成一个指针(一个地址)
|%s	|把输入解释成一个字符串：输入的内容以第一个非空白字符作为开始,并且包含直到下一个空白字符的全部字符
|%u|	把输入解释成一个无符号十进制整数
|%x,%X	|把输入解释称一个有符号十六进制整数

### `*`修饰符在`scanf()`中的用法：

&emsp;&emsp;`*`在`scanf()`中提供截然不同的服务,当把它放在%和说明符字母之间时,它使函数跳过相应的输入项目.请参考程序范例：
* [example:src/Chapter29_2.c](Chapter29_2.c)
```C 
/*用*跳过scanf接收的数字*/
#include<stdio.h>
int main(void)
{
        int num;
        printf("Please enter three number:\n");
        scanf("%*d %*d %d",&num);
        printf("The last number is %d\n",num);
        return 0;
}
```
&emsp;&emsp;linux下运行结果如下：

```sh
$ ./a.out  
Please enter three number:
2014 2015 2016
The last number is 2016
```

### 关于`scanf()`的返回值


&emsp;&emsp;`scanf()` 函数返回成功读入的项目的个数.如果它没有读取任何项目(比如它期望接收一个数字而您却输入的一个非数字字符时就会发生这种情况),`scanf()`返回0. <br>
&emsp;&emsp;当它检测到“文件末尾”(end of file)时,它返回EOF(EOF在是文件stdio.h中的定义好的一个特殊值,一般,#define指令将EOF的值定义为-1).当您学过循环之后,或在参加ACM这样的比赛及使用在线评测系统的时候会经常用到这种写法.



   
   >