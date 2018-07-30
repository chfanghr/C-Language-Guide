#include<stdio.h>
int main()
{
        int i;
        int a[10]={1,2,3,4,5,6,7,8,9,0};
        int *p=a;
        for(i=0;i<10;i++)
        {
                printf("P Value:%d   a Value :%d\n",*(p++),*(a+i));
        }
        printf("\n");
        return 0;
}