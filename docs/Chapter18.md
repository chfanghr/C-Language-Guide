# Chapter18 指针的定义和使用

## 指针
&emsp;&emsp;明白地址的概念之后,指针也就不奇怪了.简单的讲,地址就是逻辑内存上的编号,而指针虽然也表示一个编号,也是一个地址.但两者性质却不相同.一个代表了常量,另一个则是变量.就好比内存是一把尺子,而指针就是尺子上面的游标,可以左右移动,他某一个时刻是指向一个地方的,这就是指针变量. 
对指针变量定义的一般形式为: 
```C
类型说明符 *变量名;
``` 
&emsp;&emsp;这里的`*`与前面的类型说明符共同说明这是一个指针变量,类型说明符表示该指针变量所指向的变量为何种数据类型,变量名即为定义的指针变量名.除此之外,C还提供`*`运算符获取地址上对应的值. 例如：
* [example:src/Chapter18.c](../src/Chapter18.c)
```C 
#include<stdio.h>
int main()
{
        int num=2014;
        int *p=&num;
        printf("num Address = 0x%x,num=%d\n",&num,num);
        printf("p = 0x%x,*p=%d\n",p,*p);
        printf("%d\n",*&num);
        return 0;
}
```
&emsp;&emsp;请亲自运行观察结果并思考.<br>
&emsp;&emsp;值得一提的是,由于指针存放的都是地址,在32位操作系统下都在0 ~ 4,294,967,295这个数区间内,所以：在32位操作系统下,任何类型的指针变量都占四个字节！
* [example:src/Chapter18_1.c](../src/Chapter18_1.c)
```C   
#include<stdio.h>
struct INFO
{
        int a;
        char b;
        double c;
};
int main()
{
        int *p;
        char *p1;
        float *p2;
        double *p3;
        struct INFO *p4;   //struct INFO类型为结构体类型 我们将会在后面的章节中讲解
        void *p5;
        printf("int point size is :%d\n",sizeof(p));
        printf("char point size is :%d\n",sizeof(p1));
        printf("float point size is :%d\n",sizeof(p2));
        printf("double point size is :%d\n",sizeof(p3));
        printf("struct point size is :%d\n",sizeof(p4));
        printf("void point size is :%d\n",sizeof(p5));
        return 0;
}
```
&emsp;&emsp;请您亲自上机运行并观察结果. 