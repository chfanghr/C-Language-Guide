#include<stdio.h>
union INFO
{
        int a;
        int b;
        int c;
};
int main()
{
        union INFO A;
        A.a=1;
        A.b=2;
        A.c=3;
        printf("a:%d\n",A.a);
        printf("b:%d\n",A.b);
        printf("c:%d\n",A.c);
        return 0;
}