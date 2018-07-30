#include<stdio.h>
int main()
{
        char *str = "Surprise";
        char string[]="Surprise motherfu*ker";
        str[0]='C'; //试图修改str指向的常量区的字符串内容
        return 0;
}