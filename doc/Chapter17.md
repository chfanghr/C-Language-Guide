# Chapter17 地址与指针

&emsp;&emsp;Hi,欢迎来到指针的世界,也许您早已听过它的大名,指针被称为是C语言的精华所在.真正理解和掌握指针是征服C语言的关键所在！<br>
&emsp;&emsp;在众多的计算机语言中,试问：还有哪门语言可以有C语言这样在作用,速度和安全上平衡的如此优异的呢？而指针则在其中扮演了重要的角色！或许有人会说：正是因为指针才使C程序变得非常不安全！而我则想说的是：这就要求C程序员要有更高的驾驭C语言的能力,而这点也恰好反映出C的设计哲学！那就是：“C充分相信程序员！” 所以：请不要辜负她！<br>
&emsp;&emsp;OK,在学习指针之前,我们先弄清楚一个概念：
## 地址
&emsp;&emsp;何谓地址？在内存(注意,我们这里提到的内存并不是人们常说的计算机的物理内存,而是虚拟的逻辑内存空间)当中,简单点说：地址就是可以唯一标识某一点的一个编号,即一个数字！我们都见过尺子,我们统一以毫米为单位,一把长1000毫米的尺子,其范围区间为0~999,而我们可以准确的找到35毫米,256毫米处的位置.同样的道理,内存也如此,也是像尺子一样线性排布,只不过这个范围略大,在我们最广泛使用的32位操作系统下,是从0~4,294,967,295之间,而地址就是这之中的的一个编号而已,习惯上,在计算机里地址我们常常用其对应的十六进制数来表示,比如0x12ff7c这样.在我们的C程序中,每一个定义的变量,在内存中都占有一个内存单元,比如`int`类型占四个字节,`char`类型占一个字节等等,每个字节都在0~4,294,967,295之间都有一个对应的编号,C语言允许在程序中使用变量的地址,并可以通过地址运算符`&`得到变量的地址.
* [example:src/Chapter17.c](../src/Chapter17.c)
```C
#include<stdio.h>
int main()
{       
    int i;       
    int a[10]={1,2,3,4,5,6,7,8,9,0};       
    char b[10]={'c','l','a','n','g','u','a','g','e'};       
    for(i=0;i<10;i++)       
    {               
        printf("int Address:0x%x,Value:%d\n",&a[i],a[i]);      
    }       
    printf("\n");       
    for(i=0;i<10;i++)       
    {               
        printf("char Address:0x%x,Value :%c\n",&b[i],b[i]);       
    }       
    return 0;
}
```
在64位linux系统下运行参考结果:

```sh
$ ./a.out
int Address:0xe76c50,Value:1
int Address:0xe76c54,Value:2
int Address:0xe76c58,Value:3
int Address:0xe76c5c,Value:4
int Address:0xe76c60,Value:5
int Address:0xe76c64,Value:6
int Address:0xe76c68,Value:7
int Address:0xe76c6c,Value:8
int Address:0xe76c70,Value:9
int Address:0xe76c74,Value:0

char Address:0xe76c7e,Value :c
char Address:0xe76c7f,Value :l
char Address:0xe76c80,Value :a
char Address:0xe76c81,Value :n
char Address:0xe76c82,Value :g
char Address:0xe76c83,Value :u
char Address:0xe76c84,Value :a
char Address:0xe76c85,Value :g
char Address:0xe76c86,Value :e
char Address:0xe76c87,Value :
```
&emsp;&emsp;请亲自上机运行测试,并观察分析结果. 