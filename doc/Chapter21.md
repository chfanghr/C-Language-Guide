# Chapter21 结构体的定义和使用

&emsp;&emsp;前面我们已经讨论过字符数组与字符串,字符指针也可以指向一个字符串,可以用字符串常量对字符 指针进行初始化.例如: `char *str = "Surprise" ;` 这是对字符指针进行初始化.此时,字符指针指向一个字符串常量的首地址. <br>
&emsp;&emsp;结构体与数组类似,都是由若干分量组成的,与数组不同的是,结构体的成员可以是不同类型,可以通过成员名来访问结构体的元素.<br> 
&emsp;&emsp;结构体的定义说明了它的组成成员,以及每个成员的数据类型.定义一般形式如下: 
```C
struct 结构类型名 
{ 
        数据类型 成员名 1; 
        数据类型 成员名 2; 
        ... 
        数据类型 成员名 n; 
}; 
```
&emsp;&emsp;结构的定义说明了变量在结构中的存在格式,要使用该结构就必须说明结构类型的变量.结构变量说明的一般形式如下:
```C 
struct 结构类型名称 结构变量名; 
```
&emsp;&emsp;定义结构体便是定义了一种由成员组成的复合类型,而用这种类型说明了一个变量才会产生具体的实 体.与说明基本数据类型的变量一样,系统会按照结构定义时的内部组成,为说明的结构变量分配内存空 间.结构变量的成员在内存中占用连续的存储区域,所占内存大小为结构中每个成员的长度之和. <br>
&emsp;&emsp;我们可以将变量 student1 声明为 address 类型的结构变量: 
```C
struct address student1; 
```
&emsp;&emsp;虽然,结构体作为若干成员的集合是一个整体,但在使用结构时,不仅要对结构的整体进行操作,还 
经常要访问结构中的每一个成员.在程序中使用机构中成员的方法为: 
```C
结构变量名.成员名称 
```
&emsp;&emsp;如 `student1.tel`表示结构变量 student1 的电话信息. <br>
&emsp;&emsp;和其他类型的变量一样,结构变量也可以进行初始化.结构初始化的一般形式如下: 
```C
struct 结构类型名 结构变量 = 
{ 
        初始化数据 1,
        ...
        初始化数据 n
};
```
* [example:src/Chapter21.c](../src/Chapter21.c)
```C
#include<stdio.h>
#include<string.h>
  
struct _INFO
{
        int num; 
        char str[256];
};
  
int main()
{
        struct _INFO A; 
        A.num = 2018;
        strcpy(A.str,"Welcome to this fu*king thing");
        printf("This year is %d %s\n",A.num,A.str);
        return 0;
}
```
&emsp;&emsp;请亲自上机实验.