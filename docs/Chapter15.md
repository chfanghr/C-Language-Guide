# Chapter15 二维数组的定义和使用

&emsp;&emsp;通过对一维数组的学习,我们已经能想到,一维数组是呈线性排布的,如果我们需要比如矩阵这样的结构时,该怎么办？一个最直观的想法就是每一行都用一个一维数组存放,那么有几行,就需要几个一维数组.等等,还记得上节课的点与线的关系吗？那矩阵这种结构就是线与面的关系！丹尼斯·里奇同样为我们提供了二维数组(多维数组)这样的东西,很好的解决了这个问题. 

## 二维数组的定义: 
```C
类型说明符 数组名[行数][列数]; 
```
&emsp;&ensp;如： 
```C 
int a[3][4];/*定义一个整形二维数组a,有3行4列共12个元素分别为:
a[0][0] a[0][1] a[0][2] a[0][3]
a[1][0] a[1][1] a[1][2] a[1][3]
a[2][0] a[2][1] a[2][2] a[2][3]
*/
char arry[10][10];//定义一个字符型二维数组arry,有10行10列,依次为arry[0][0]~arry[9][9]供100个元素
```

## 二维数组的初始化: 
&emsp;&emsp;二维数组可以用以下两种方式初始化赋值：
```C 
int a[3][4]={{1,2,3,4},{10,20,30,40},{100,200,300,400}};//定义一个三行四列的二维数组,按行赋值
int a[3][4]={1,2,3,4,10,20,30,40,100,200,300,400};//定义一个三行四列的二维数组并对其中的12(3*4)个元素进行赋值
```
&emsp;&emsp;您可能会想,为什么第二种也可以？这样的话,定义int a[3][4]和定义int a[12]有什么区别呢？真相是:二维数组与一维数组一样在内存中的存储也是按照线性排布的. 
&emsp;&emsp;同样,建议您亲自上机实验.