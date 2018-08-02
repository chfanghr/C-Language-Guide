# Chapter9 选择结构
> 强烈建议先行阅读数学必修3

&emsp;&emsp;`if else`选择程序结构用于判断给定的条件,根据判断条件的成立与否来控制程序的流程.选择结构有单选择,双选择和多选择3种形式 单选择结构用`if`语句实现: <br>
&emsp;&emsp;形式一：
```C
if(表达式) /*若条件成立则实行花括号里的语句,反之则不执行*/ 
{ 
    语句; 
} 
```
&emsp;&emsp;形式二：
```C
if(表达式) /*若表达式成立则执行语句1,否则执行语句2*/ 
{ 
    语句1; 
} 
else 
{ 
    语句2; 
} 
```
&emsp;&emsp;形式三：
```C
if(表达式) /*如果表达式成立,执行语句1否则继续判断表达式2*/ 
{ 
    语句1; 
} 
else if(表达式2) /*如果表达式成立,执行语句2否则继续判断表达式3*/ 
{ 
    语句2; 
} 
else if(表达式3) /*如果表达式成立,则执行语句3否则继续判断下一个表达式*/ 
{ 
    语句3; 
} 
...
else /*如果以上表达式都不成立 则执行语句4*/ 
{ 
    语句4; 
} 
```
&emsp;&emsp;例子：
```C
if(flag>=90)
{
    printf("Good\n");
}
else if(flag>=60)
{
    printf("passed");
}
else
{
    printf("failed\n");
}
```
&emsp;&emsp;多分支选择结构除了`else if`之外,C语言还提供了`switch`的结构.<br> 
&emsp;&emsp;`switch`语句的执行过程为：首先计算表达式的值,然后依次与常量表达式依次进行比较,若表达式的值与某常量表达式相等,则从该常量表达式处开始执行,直到`switch`语句结束.若所有的常量表达式的值均不等于表达式的值,则从`default`处开始执行. 
```C
switch(表达式) /*首先计算表达式的值*/ 
{ 
    case 常量表达式1:语句1; 
    case 常量表达式2:语句2; 
    case 常量表达式3:语句3; 
    ... 
    case 常量表达式n:语句n; 
    default:语句n+1； 
} 
```
&emsp;&emsp;例子： 
```C
switch(value)
{
    case 1:printf("one");break;
    case 2:printf("two");break;
    case 3:printf("three");break;
    default:printf("other");break;
}
```

建议您亲自上机实验,以加深对C语法的理解,熟练掌握之后再进行下面的学习.
