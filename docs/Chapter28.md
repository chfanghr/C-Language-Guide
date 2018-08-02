# Chapter28 其他与处理命令

## `#error` 等其他常用预处理命令 
&emsp;&emsp;除了上面介绍的之外,C 语言还有`#erroe`,`#line`,`#pragma`等其他常用的预处理命令,在很多 C 语言的 
程序中也是经常可见的.下面向读者简单介绍一下它们. 

1. `#error `<br>
`#error`指令强制编译程序停止编译,它主要用于程序调试.`#error`指令的一般形式是: 
```C
#error error-message 
```
&emsp;&emsp;注意,宏串`error-message`不用双引号引起来.遇到`#error`指令时,错误信息被显示,可能同时还显示 
编译程序作者预先定义的其他内容. 

2. `#line` <br>
&emsp;&emsp;`#line`指令改变`__LINE__`和`__FILE__`的内容.`__LINE__`和`__FILE__`都是编译程序中预定义的标识符. `__FILE__`的内容是当前被编译源文件的文件名.`#line`标识符`__LINE__`的内容是当前被编译代码行的行号,其一般形式是: 
```C
#line number “filename” 
```
&emsp;&emsp;其中,number 是正整数并变成`__LINE__`的新值; 可选的“`filename`”是合法文件标识符并变成`__FILE__`的新值.`#line`主要用于调试和特殊应用. 

3. `#pragma` <br>
&emsp;&emsp;`#pragma` 是编译程序实现时定义的指令,它允许由此向编译程序传入各种指令.例如,一个编译程序可能具有支持跟踪程序执行的选项,此时可以用`#pragma`语句选择该功能,编译程序忽略其不支持的#pragma 选项.使用#pragma 预处理命令可提高 C 源程序对编译程序的可移植性.