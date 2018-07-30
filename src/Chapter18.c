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
