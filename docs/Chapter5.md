# Chapter5 基本运算符 

&emsp;&emsp;C使用运算符(operator)来代表算术运算.例如,+运算符可以使它两侧的值加在一起.如果您觉得术语“运算符”听起来比较奇怪,那么请您记住那些东西总得有个名称.与其被称之为“那些东西”或“数学符号”,被称之为“运算符”似乎看起来更专业一些！ 现在,除此之外,让我们再看一下其他的基本运算符<br> 

## 赋值运算符
&emsp;&emsp;在C里,符号`=`不表示“相等”,而是一个赋值运算符.下面的语句是将2014赋给num的变量. <br>
```C
num=2014;
``` 
&emsp;&emsp;也就是说,符号`=`的左边是一个变量名,右边是赋给该变量的值.符号=被称为赋值运算符(assignment operator).再次强调不要把这行代码读做“num等于2014”,而应该读为“将值2014赋给变量num”.赋值运算符的动作是从右到左. <br>
&emsp;&emsp;或许变量的名字和变量值之间的区别看起来微乎其微,但是请考虑下面的常量计算机语句： <br>
```C
i=i+1; 
```
&emsp;&emsp;在数学上,该语句没有任何意义.如果您给一个有限的数加1,结果不会“等于”这个数本身.它意味着“找到名字为i的变量的值：然后对那个值加1,然后将这个新值赋给名字为i的变量”. <br>
&emsp;&emsp;像下面的这条语句： <br>
```C
2014=num；
``` 
&emsp;&emsp;在C中是没有意义的(确切的说是无效的),原因是2014只是一个常量.您不能将一个值赋给一个常量；那个常量本身就是它的值了.所以,当您准备键入代码时请记住在符号=左边的项目必须是一个变量的名字.实际上,赋值运算符左边必须指向一个存储位置.最简单的方法是使用变量的名字,但是以后您会看到,“指针”也可以指向一个存储位置.更普遍地,C使用术语“可修改的左值”(modifiable Ivalue)来标志那些我们可以为之赋值的实体.“可修改的左值”或许不是那么直观易懂,所以我们先看看一些定义. <br>
## 几个术语：数据对象,左值,右值和操作数
&emsp;&emsp;“数据对象“(data object)是泛指数据存储区的术语,数据存储区能用于保存值.例如,用于保存变量或数组的数据存储区是一个数据对象.C的术语左值(lvalue)指用于标识一个特定的数据对象的名字或表达式.例如,变量的名字是一个左值.所以对象指的是实际的数据存储,但是左值是用于识别或定位那个存储的标识符.<br> 
&emsp;&emsp;因为不是所有的对象都是可更改值的,所以C使用术语”可修改的左值“来表示那些可以被更改的对象.所以,赋值运算符的左值应该是一个可修改的左值.lvalue中的l确实是英文单词left的意思,因为可修改的左值可以用在赋值运算符的左边. <br>
&emsp;&emsp;术语"右值"(rvalue)指的是能赋给可修改的左值的量.例如,考虑下面的语句：
```C
num=2014；
``` 
&emsp;&emsp;这里是一个可修改的左值,2014是一个右值.您可能猜到rvalue中的r表示right.右值可以是常量,变量或者任何可以产生一个值的表达式. <br>
&emsp;&emsp;我们可以把变量理解为一个容器,放在左边当左值时,意思为保存,存放右边的值.所以,我们可以说=运算符的左操作数是可修改的左值. <br>
## 数学运算符
&emsp;&emsp;主要包括： 
* 单目运算符：只需要一个操作数(自增：`++` 自减：`--`) 
* 双目运算符：需要两个操作数(加法：`+` 减法：`-` 乘法： `*` 除法： `/` 求模：`%`) 
### 增量和减量运算符： `++`和`--` 
&emsp;&emsp;“增量运算符”(increment operator)完成简单的任务,即将其操作数的值增加1.这个运算符以两种方式出现.在第一种方式中,`++`出现在它作用的变量的前面,这是前缀(prefix)模式.在第二种方式中,`++`出现在它作用的变量的后面,这是后缀(postfix)模式.这两种模式的区别在于值的增加这一动作发生的准确时间不同.对于前缀运算符,先执行自增或自减运算,再计算表达式的值,而后缀运算符,则先计算表达式的值,再执行自增或自减运算. <br>
&emsp;&emsp;我们通过例子来说明： 
* [example:src/Chapter5.c](../src/Chapter5.c)
```C
#include<stdio.h>
int main()
{
        int a,b;
        a=b=5;
        printf("%d      %d\n",a--,--b);
        printf("%d      %d\n",a--,--b);
        printf("%d      %d\n",a--,--b);
        printf("%d      %d\n",a--,--b);
        printf("%d      %d\n",a--,--b);
        return 0;
}
``` 
&emsp;&emsp;编译运行结果如下
```sh
$ cc Chapter5.c -o Chapter5                                           
$ ./Chapter5                                                          
5      4
4      3
3      2
2      1
1      0
```
&emsp;&emsp;这个程序5次将变量a和b减1,您可以通过这个结果来理解前缀和后缀的区别. <br>
&emsp;&emsp;需要提醒一下的是,++与--是单目运算符,即一个操作对象,而这个操作对象只能为变量,因为,常量不可以被赋值.<br>

|运算符|符号|操作|用例|结果|
|---|---|---|---|---|
|加法|+|使它两侧的值加到一起|1+2|3|
|减法|-|从它前面的数减去后面的数|5-3|2|
|乘法|*|将它前面的数乘以后面的数|2*3|6|
|除法|/|用它左边的值除以右边的值|8/3|2(整数的除法会丢掉小数部分)|
|取模|%|求用它左边的值除以右边的数后的余数|5%3|2(%运算符两侧的操作数必须为整数)|

&emsp;&emsp;举个栗子:
* [example:src/Chapter5_1.c](../src/Chapter5_1.c)
```C
#include<stdio.h>

int main()
{
    int a=20;
    int b=5;
    int c=6;
    printf("a = %d b = %d c = %d\n",a,b,c);
    printf("a + b = %d\n",a+b);
    printf("a - c = %d\n",a-c);
    printf("a * b = %d\n",a*b);
    printf("a / c = %d\n",a/c);
    printf("a %% c = %d\n",a%c);/*两个%才会输出一个%*/
    return 0;
}
```
&emsp;&emsp;编译运行结果如下<br>
```sh
$ cc Chapter5_1.c -o Chapter5_1 
$ ./Chapter5_1                                 
a = 20 b = 5 c = 6
a + b = 25
a - c = 14
a * b = 100
a / c = 3
a % c = 2
```
&emsp;&emsp;请大家自己实验一下<br>

---
2018.7.29 21:59