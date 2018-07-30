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