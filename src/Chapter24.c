#include<stdio.h>
#include<string.h>
typedef struct _INFO
{
        int num;
        char str[256];
}INFO;
int main()
{
        struct _INFO A;
        INFO B;    //通过typedef重命名后的名字INFO与struct _INFO完全等价！
        A.num = 2014;
        strcpy(A.str,"Welcome to dotcpp.com");
        B=A;
        printf("This year is %d %s\n",A.num,A.str);
        printf("This year is %d %s\n",B.num,B.str);
        return 0;
}